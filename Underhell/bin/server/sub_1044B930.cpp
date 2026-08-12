char __cdecl sub_1044B930(int a1, int a2)
{
  int *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  signed int v8; // eax
  bool v9; // zf
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  signed int v14; // eax

  v2 = (int *)a2;
  v3 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    sub_1042D6E0((_DWORD *)a1);
    if ( *(_BYTE *)(a1 + 20) )
      return 1;
    while ( 1 )
    {
      v11 = v2[3];
      v12 = v2[1];
      if ( v11 + 1 > v12 )
        sub_1044AB00(v2, v11 - v12 + 1);
      ++v2[3];
      v13 = *v2;
      v14 = v2[3] - v11 - 1;
      v9 = v2[3] - v11 == 1;
      v2[4] = *v2;
      if ( v14 >= 0 && !v9 )
        memcpy((void *)(v11 + v13 + 1), (const void *)(v11 + v13), v14);
      if ( !(unsigned __int8)sub_1044EE40(a1, v11 + *v2) )
        break;
      sub_1042D6E0((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 20) )
        return 1;
    }
  }
  else
  {
    sub_100878C0((_DWORD *)a1, &a2);
    v4 = a2;
    if ( !a2 )
      return *(_BYTE *)(a1 + 20) == 0;
    sub_1044AE60(v2, a2);
    if ( v4 <= 0 )
      return *(_BYTE *)(a1 + 20) == 0;
    while ( 1 )
    {
      v5 = v2[3];
      v6 = v2[1];
      if ( v5 + 1 > v6 )
        sub_1044AB00(v2, v5 - v6 + 1);
      ++v2[3];
      v7 = *v2;
      v8 = v2[3] - v5 - 1;
      v9 = v2[3] - v5 == 1;
      v2[4] = *v2;
      if ( v8 >= 0 && !v9 )
        memcpy((void *)(v5 + v7 + 1), (const void *)(v5 + v7), v8);
      if ( !(unsigned __int8)sub_1044EE40(a1, v3 + *v2) )
        break;
      if ( ++v3 >= a2 )
        return *(_BYTE *)(a1 + 20) == 0;
    }
  }
  return 0;
}
