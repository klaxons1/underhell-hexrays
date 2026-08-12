float *sub_103F4790()
{
  int v0; // eax
  int v1; // eax
  bool v2; // zf
  float *result; // eax

  v0 = dword_106EEFBC;
  if ( (dword_106EEFBC & 1) == 0 )
  {
    v0 = dword_106EEFBC | 1;
    flt_106EEFB0 = 0.017449999;
    dword_106EEFBC |= 1u;
    flt_106EEFB4 = 0.017449999;
    flt_106EEFB8 = 0.017449999;
  }
  if ( (v0 & 2) == 0 )
  {
    flt_106EEFA4 = 0.052340001;
    dword_106EEFBC = v0 | 2;
    flt_106EEFA8 = 0.052340001;
    flt_106EEFAC = 0.052340001;
  }
  if ( !*(_DWORD *)(dword_10698344 + 48) )
    return &flt_106EEFB0;
  v1 = sub_101679A0((int)"ep2_alyx_injured");
  v2 = sub_10167A00(v1) != 1;
  result = &flt_106EEFA4;
  if ( v2 )
    return &flt_106EEFB0;
  return result;
}
