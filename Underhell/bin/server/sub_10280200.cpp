float *sub_10280200()
{
  if ( (dword_106D1E20 & 1) == 0 )
  {
    dword_106D1E20 |= 1u;
    flt_106D1E14 = 0.043620002;
    flt_106D1E18 = 0.043620002;
    flt_106D1E1C = 0.043620002;
  }
  return &flt_106D1E14;
}
