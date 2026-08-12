int __thiscall sub_10067420(int *this, float a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int *v9; // esi
  int v10; // ecx
  int v11; // eax

  v4 = this[315];
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_6:
    v7 = this[315];
    v8 = this[313];
    v9 = this + 312;
    if ( v7 + 1 > v8 )
      sub_100798B0(v7 - v8 + 1);
    ++v9[3];
    v10 = *v9;
    v11 = v9[3] - v7 - 1;
    v9[4] = *v9;
    if ( v11 > 0 )
      memcpy((void *)(v10 + 12 * v7 + 12), (const void *)(v10 + 12 * v7), 12 * v11);
    result = *v9 + 12 * v7;
    if ( result )
    {
      *(float *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
    }
  }
  else
  {
    result = this[312] + 8;
    while ( *(_DWORD *)(result - 4) != a3 || *(_DWORD *)result != a4 )
    {
      ++v5;
      result += 12;
      if ( v5 >= v4 )
        goto LABEL_6;
    }
  }
  return result;
}
