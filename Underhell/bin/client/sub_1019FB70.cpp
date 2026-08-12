int *sub_1019FB70()
{
  if ( (dword_10449A50 & 1) == 0 )
  {
    dword_10449A50 |= 1u;
    dword_10449A34 = (int)"C_PropVehiclePrisonerPod";
    dword_10449A3C = 0;
    dword_10449A40 = 0;
    dword_10449A44 = 0;
    dword_10449A48 = 0;
    dword_10449A4C = 0;
    dword_10449A38 = 24;
    atexit(sub_102CD9D0);
  }
  dword_103EB7A8 = (int)&dword_103D8A64;
  dword_103EB7A0 = 1;
  dword_103EB79C = (int)asc_103EB82C;
  return &dword_103EB79C;
}
