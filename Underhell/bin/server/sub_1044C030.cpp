char __cdecl sub_1044C030(int Src, int a2)
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

  v2 = Src;
  v3 = (int *)a2;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (*(_BYTE *)(Src + 21) & 1) != 0 )
  {
    sub_1042D6E0((_DWORD *)Src);
    if ( *(_BYTE *)(Src + 20) )
      return 1;
    while ( 1 )
    {
      v13 = v3[3];
      v14 = v3[1];
      if ( v13 + 1 > v14 )
        sub_1044ADB0(v3, v13 - v14 + 1);
      ++v3[3];
      v15 = *v3;
      v16 = v3[3] - v13 - 1;
      v11 = v3[3] - v13 == 1;
      v3[4] = *v3;
      if ( v16 >= 0 && !v11 )
        memcpy((void *)(16 * v13 + v15 + 16), (const void *)(16 * v13 + v15), 16 * v16);
      if ( !(unsigned __int8)sub_1044ED00(Src, *v3 + 16 * v13) )
        break;
      sub_1042D6E0((_DWORD *)Src);
      if ( *(_BYTE *)(Src + 20) )
        return 1;
    }
  }
  else
  {
    sub_100878C0((_DWORD *)Src, &a2);
    v5 = a2;
    if ( !a2 )
      return *(_BYTE *)(v2 + 20) == 0;
    sub_1044B060(v3, a2);
    if ( v5 <= 0 )
      return *(_BYTE *)(v2 + 20) == 0;
    for ( i = 0; ; i += 16 )
    {
      v7 = v3[3];
      v8 = v3[1];
      if ( v7 + 1 > v8 )
        sub_1044ADB0(v3, v7 - v8 + 1);
      ++v3[3];
      v9 = *v3;
      v10 = v3[3] - v7 - 1;
      v11 = v3[3] - v7 == 1;
      v3[4] = *v3;
      if ( v10 >= 0 && !v11 )
        memcpy((void *)(16 * v7 + v9 + 16), (const void *)(16 * v7 + v9), 16 * v10);
      if ( !(unsigned __int8)sub_1044ED00(Src, i + *v3) )
        break;
      if ( ++v4 >= a2 )
      {
        v2 = Src;
        return *(_BYTE *)(v2 + 20) == 0;
      }
    }
  }
  return 0;
}
