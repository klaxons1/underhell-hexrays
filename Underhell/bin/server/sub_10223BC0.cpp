int __thiscall sub_10223BC0(float *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi

  result = sub_10418360(a4);
  if ( result == 11 )
  {
    result = sub_104185B0(a4);
    v6 = result;
    if ( result )
    {
      result = sub_1041C800(result);
      if ( !(_BYTE)result )
        return sub_1041EC00(v6, this[24]);
    }
  }
  return result;
}
