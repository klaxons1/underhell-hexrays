float *sub_104042E0()
{
  if ( (dword_106F04C0 & 1) == 0 )
  {
    dword_106F04C0 |= 1u;
    flt_106F04B4 = 0.026179999;
    flt_106F04B8 = 0.026179999;
    flt_106F04BC = 0.026179999;
  }
  return &flt_106F04B4;
}
