float *sub_103F5160()
{
  float *result; // eax

  if ( (dword_106EF164 & 1) == 0 )
    dword_106EF164 |= 1u;
  result = &flt_106EF158;
  flt_106EF158 = 0.026179999;
  flt_106EF15C = 0.026179999;
  flt_106EF160 = 0.026179999;
  return result;
}
