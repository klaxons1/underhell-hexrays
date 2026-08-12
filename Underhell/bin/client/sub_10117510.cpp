int __thiscall sub_10117510(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  _BYTE *i; // [esp+10h] [ebp-4h]

  v4 = this[6];
  if ( v4 )
    v5 = *(_BYTE **)(v4 + 4);
  else
    v5 = 0;
  v6 = 0;
  for ( i = &v5[a4]; v6 < a3; ++v5 )
  {
    if ( v5 >= i )
      break;
    for ( *(_DWORD *)(a2 + 4 * v6) = *v5 ? sub_100AF260(v5) : 0; *v5; ++v5 )
      ;
    ++v6;
  }
  v7 = (_DWORD *)this[6];
  if ( !v7 || v7[3] == v7[2] )
    return v6;
  v8 = v7[2];
  v9 = v7[3] - v8;
  if ( !v9 )
  {
LABEL_17:
    Warning("Restore underflow!\n");
    return v6;
  }
  if ( a4 > v9 )
  {
    v7[2] = v7[3];
    goto LABEL_17;
  }
  v7[1] += a4;
  v7[2] = a4 + v8;
  return v6;
}
