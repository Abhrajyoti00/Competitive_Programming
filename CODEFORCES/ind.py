def _conv_forward(self, input: Tensor, weight: Tensor, bias: Optional[Tensor]):
    input_float32 = input.float()  # Convert input tensor to float32
    weight_float32 = weight.float()  # Convert weight tensor to float32
    bias_float32 = None
    if bias is not None:
        bias_float32 = bias.float()  # Convert bias tensor to float32
    if self.padding_mode != 'zeros':
        return F.conv2d(F.pad(input_float32, self._reversed_padding_repeated_twice, mode=self.padding_mode),
                        weight_float32, bias_float32, self.stride,
                        _pair(0), self.dilation, self.groups)
    return F.conv2d(input_float32, weight_float32, bias_float32, self.stride,
                    self.padding, self.dilation, self.groups)
