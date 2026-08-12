__int16 __thiscall sub_1021F220(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // eax
  int v3; // esi
  __int16 result; // ax
  __int16 *v5; // edx

  v1 = (_DWORD *)this[6];
  if ( !v1 || v1[3] == v1[2] )
    return 0;
  v2 = v1[3];
  v3 = v1[2];
  if ( v2 == v3 )
  {
LABEL_6:
    Warning("Restore underflow!\n");
    return 0;
  }
  if ( v2 - v3 < 2 )
  {
    v1[2] = v2;
    goto LABEL_6;
  }
  v5 = (__int16 *)v1[1];
  result = *v5;
  v1[2] = v3 + 2;
  v1[1] = v5 + 1;
  return result;
}
