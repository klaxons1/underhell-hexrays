int *sub_1006F950()
{
  if ( (dword_10412750 & 1) == 0 )
  {
    dword_10412750 |= 1u;
    dword_10412734 = (int)"C_PropVehicleChoreoGeneric";
    dword_1041273C = 0;
    dword_10412740 = 0;
    dword_10412744 = 0;
    dword_10412748 = 0;
    dword_1041274C = 0;
    dword_10412738 = 26;
    atexit(sub_102C9000);
  }
  dword_103DC330 = (int)&dword_103D8A64;
  dword_103DC328 = 1;
  dword_103DC324 = (int)asc_103DC40C;
  return &dword_103DC324;
}
