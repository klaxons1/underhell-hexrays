void *__thiscall sub_100CE9A0(unsigned __int8 (__cdecl **this)(int, int), int a2, int a3, void *Src, int *a5)
{
  void *result; // eax
  const char *v6; // edi
  void *v7; // eax
  int v8; // edi
  void *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // ebx
  int v15; // eax
  _DWORD *v16; // edi
  int i; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // eax
  void *Srca; // [esp+14h] [ebp+10h]

  result = (void *)sub_10229C90(Src);
  for ( Srca = result; result; Srca = result )
  {
    v6 = (const char *)sub_10229A00(Srca);
    if ( !_stricmp(v6, "iterate_players") || !_stricmp(v6, "iterate_team") )
    {
      v14 = 0;
      if ( !_stricmp(v6, "iterate_players") )
      {
        v14 = 1;
      }
      else if ( !_stricmp(v6, "iterate_team") )
      {
        v14 = 2;
      }
      v15 = sub_100DDA40(88);
      if ( v15 )
      {
        *(_BYTE *)(v15 + 4) = 1;
        *(_DWORD *)(v15 + 12) = 0;
        *(_DWORD *)(v15 + 16) = 0;
        *(_DWORD *)(v15 + 20) = 0;
        *(_DWORD *)(v15 + 24) = 0;
        *(_DWORD *)(v15 + 28) = 0;
        *(_DWORD *)(v15 + 32) = 0;
        *(_DWORD *)(v15 + 36) = 0;
        *(_DWORD *)(v15 + 40) = 0;
        *(_DWORD *)(v15 + 44) = 0;
        *(_DWORD *)(v15 + 48) = 0;
        *(_DWORD *)(v15 + 52) = 0;
        *(_DWORD *)v15 = &CLCDItemAggregate::`vftable';
        *(_DWORD *)(v15 + 56) = 0;
        *(_DWORD *)(v15 + 60) = 0;
        *(_DWORD *)(v15 + 64) = 0;
        *(_DWORD *)(v15 + 68) = 0;
        *(_DWORD *)(v15 + 72) = 0;
        *(_DWORD *)(v15 + 76) = 0;
        *(_DWORD *)(v15 + 80) = 0;
        *(_DWORD *)(v15 + 84) = 0;
        *(_DWORD *)(v15 + 8) = 4;
        v16 = (_DWORD *)v15;
      }
      else
      {
        v16 = 0;
      }
      v16[15] = v14;
      v16[4] = sub_1022A800("x", 0);
      v16[5] = sub_1022A800("y", 0);
      v16[16] = sub_1022A800("y_increment", 10);
      sub_100CE9A0(a2, 0, Srca, (int)(v16 + 17));
      for ( i = 0; i < v16[20]; *(_BYTE *)(v18 + 4) = 0 )
        v18 = *(_DWORD *)(v16[17] + 4 * i++);
      v19 = a5[3];
      v20 = a5[1];
      if ( v19 + 1 > v20 )
        sub_1010AFF0(v19 - v20 + 1);
      ++a5[3];
      v21 = *a5;
      v22 = a5[3] - v19 - 1;
      a5[4] = *a5;
      if ( v22 > 0 )
        memcpy((void *)(v21 + 4 * v19 + 4), (const void *)(v21 + 4 * v19), 4 * v22);
      v23 = (_DWORD *)(*a5 + 4 * v19);
      if ( v23 )
        *v23 = v16;
      goto LABEL_31;
    }
    if ( !_stricmp(v6, "static_icon") )
    {
      v7 = sub_100CE730(this, a2, 1, (int)Srca);
    }
    else
    {
      if ( _stricmp(v6, "static_text") )
      {
        if ( !_stricmp(v6, "newsubpage") )
          ++*(_DWORD *)(a2 + 60);
        goto LABEL_31;
      }
      v7 = sub_100CE840((int)this, a2, 1, Srca);
    }
    v8 = a5[3];
    v9 = v7;
    v10 = a5[1];
    if ( v8 + 1 > v10 )
      sub_1010AFF0(v8 - v10 + 1);
    ++a5[3];
    v11 = *a5;
    v12 = a5[3] - v8 - 1;
    a5[4] = *a5;
    if ( v12 > 0 )
      memcpy((void *)(v11 + 4 * v8 + 4), (const void *)(v11 + 4 * v8), 4 * v12);
    v13 = (_DWORD *)(*a5 + 4 * v8);
    if ( v13 )
      *v13 = v9;
LABEL_31:
    result = (void *)sub_1021F0F0(Srca);
  }
  return result;
}
