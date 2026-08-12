int *sub_103F4CF0()
{
  if ( (dword_106EF05C & 1) == 0 )
  {
    dword_106EF05C |= 1u;
    dword_106EF050 = LODWORD(flt_106F1CA8);
    dword_106EF054 = LODWORD(flt_106F1CAC);
    dword_106EF058 = LODWORD(flt_106F1CB0);
  }
  return &dword_106EF050;
}
