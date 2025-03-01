import torch
import torch_frontend
from torch_frontend import compile_dynamo_model

# ==============================================================================

class AtenSliceModule(torch.nn.Module):
    def __init__(self):
        super().__init__()
    
    def forward(self, x):
        return x[1:]

def test_slice():
    inputs = (torch.randn(4),)
    module = AtenSliceModule()
    prog = torch.export.export(module, inputs, constraints=None)
    module = compile_dynamo_model(prog, "raw")
    print(module.operation.get_asm())

if __name__ == "__main__":
    test_slice()