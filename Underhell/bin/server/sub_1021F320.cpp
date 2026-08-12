int __thiscall sub_1021F320(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE *v5; // esi
  int v6; // edi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  _BYTE *v14; // [esp+10h] [ebp-4h]

  v4 = this[6];
  if ( v4 )
    v5 = *(_BYTE **)(v4 + 4);
  else
    v5 = 0;
  v6 = 0;
  v14 = &v5[a4];
  if ( a3 > 0 )
  {
    v7 = a2;
    do
    {
      if ( v5 >= v14 )
        break;
      for ( *(_DWORD *)(v7 + 4 * v6) = *v5 ? *sub_10162BE0(&a2, v5) : 0; *v5; ++v5 )
        ;
      ++v6;
      ++v5;
    }
    while ( v6 < a3 );
  }
  v8 = (_DWORD *)this[6];
  if ( !v8 || v8[3] == v8[2] )
    return v6;
  v9 = v8[2];
  v10 = v8[3] - v9;
  if ( !v10 )
  {
LABEL_18:
    Warning("Restore underflow!\n");
    return v6;
  }
  v11 = a4;
  if ( a4 > v10 )
  {
    v8[2] = v8[3];
    goto LABEL_18;
  }
  v8[1] += a4;
  v8[2] = v11 + v9;
  return v6;
}
