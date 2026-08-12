char __cdecl sub_102ACD40(int a1, int a2)
{
  int v2; // ebp
  int *v3; // esi
  int v4; // ebx
  int v5; // edi
  int i; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax

  v2 = a1;
  v3 = (int *)a2;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    sub_1022E840((_DWORD *)a1);
    if ( *(_BYTE *)(a1 + 20) )
      return 1;
    while ( 1 )
    {
      v13 = v3[3];
      v14 = v3[1];
      if ( v13 + 1 > v14 )
        sub_102AB920(v3, v13 - v14 + 1);
      ++v3[3];
      v15 = *v3;
      v16 = v3[3] - v13 - 1;
      v11 = v3[3] - v13 == 1;
      v3[4] = *v3;
      if ( v16 >= 0 && !v11 )
        memcpy((void *)((v13 << 6) + v15 + 64), (const void *)((v13 << 6) + v15), v16 << 6);
      if ( !(unsigned __int8)sub_102AFBE0(a1, (void *)(*v3 + (v13 << 6))) )
        break;
      sub_1022E840((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 20) )
        return 1;
    }
  }
  else
  {
    sub_10096130((_DWORD *)a1, &a2);
    v5 = a2;
    if ( !a2 )
      return *(_BYTE *)(v2 + 20) == 0;
    sub_102ABBD0(v3, a2);
    if ( v5 <= 0 )
      return *(_BYTE *)(v2 + 20) == 0;
    for ( i = 0; ; i += 64 )
    {
      v7 = v3[3];
      v8 = v3[1];
      if ( v7 + 1 > v8 )
        sub_102AB920(v3, v7 - v8 + 1);
      ++v3[3];
      v9 = *v3;
      v10 = v3[3] - v7 - 1;
      v11 = v3[3] - v7 == 1;
      v3[4] = *v3;
      if ( v10 >= 0 && !v11 )
        memcpy((void *)((v7 << 6) + v9 + 64), (const void *)((v7 << 6) + v9), v10 << 6);
      if ( !(unsigned __int8)sub_102AFBE0(a1, (void *)(i + *v3)) )
        break;
      if ( ++v4 >= a2 )
      {
        v2 = a1;
        return *(_BYTE *)(v2 + 20) == 0;
      }
    }
  }
  return 0;
}
