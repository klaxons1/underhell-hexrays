signed int __thiscall sub_10219E80(void *this, _DWORD *a2)
{
  signed int result; // eax
  int i; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // esi
  int *v8; // eax

  if ( (dword_10645FE8[0] & *a2) != 0 )
  {
    _BitScanForward((unsigned int *)&result, dword_10645FE8[0] & *a2);
  }
  else
  {
    for ( i = 1; i < 7; ++i )
    {
      v5 = a2[i];
      if ( v5 )
      {
        _BitScanForward(&v5, v5);
        result = v5 + 32 * i;
        goto LABEL_8;
      }
    }
    result = a2[7] & 0x7FFFFFFF;
    if ( !result )
      return result;
    _BitScanForward(&v6, result);
    result = v6 + 224;
  }
LABEL_8:
  while ( result > -1 )
  {
    v7 = result + 1;
    v8 = (int *)sub_1025FB50(result + 1);
    if ( v8 )
      sub_10219D00((int)this, v8);
    result = sub_10219AE0(a2, v7);
  }
  return result;
}
