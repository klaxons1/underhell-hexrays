void __thiscall sub_1019F0B0(int this, char a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  _DWORD *v16; // esi
  int v17; // [esp+Ch] [ebp-4h]

  v2 = dword_10632630;
  if ( a2 )
  {
    if ( dword_10632630 != -1 )
    {
      v7 = dword_10632624;
      do
      {
        v8 = 12 * v2;
        sub_1018AB80(*(_DWORD **)(v8 + v7));
        v7 = dword_10632624;
        v2 = *(_DWORD *)(v8 + dword_10632624 + 8);
      }
      while ( v2 != -1 );
    }
  }
  else
  {
    byte_106B7A14 = 1;
    if ( dword_10632630 != -1 )
    {
      v4 = dword_10632624;
      do
      {
        v5 = 12 * v2;
        v6 = *(_DWORD *)(v5 + v4);
        if ( v6 )
        {
          sub_10190B20(*(int **)(v5 + v4));
          sub_10184660(v6);
          v4 = dword_10632624;
        }
        v2 = *(_DWORD *)(v5 + v4 + 8);
      }
      while ( v2 != -1 );
    }
    sub_1018EC70(&dword_10632624);
    byte_106B7A14 = 0;
    sub_1019EF10((_DWORD *)this);
  }
  sub_1019EF70();
  v9 = dword_106B8C10;
  if ( dword_106B8C10 )
  {
    do
    {
      v10 = *(_DWORD *)(v9 + 48);
      sub_10184660(v9);
      v9 = v10;
    }
    while ( v10 );
  }
  dword_106B8C10 = 0;
  dword_106B8C14 = 0;
  dword_10632888 = 1;
  if ( !a2 )
  {
    v11 = *(_DWORD *)(this + 4);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 - 4);
      v13 = v11 - 4;
      v14 = 9 * v12;
      v15 = v12 - 1;
      v17 = v11 - 4;
      v16 = (_DWORD *)(v11 + 4 * v14);
      if ( v15 >= 0 )
      {
        do
        {
          v16 -= 9;
          sub_1018EC70(v16);
          if ( (int)v16[2] >= 0 )
          {
            if ( *v16 )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v16);
              *v16 = 0;
            }
            v16[1] = 0;
          }
          --v15;
        }
        while ( v15 >= 0 );
        v13 = v17;
      }
      sub_10184660(v13);
    }
    *(_DWORD *)(this + 4) = 0;
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
  }
  memset((void *)(this + 36), 0, 0x400u);
  if ( !a2 )
  {
    *(_DWORD *)(this + 28) = 0;
    sub_1018CFC0();
    sub_1019CCA0();
  }
  *(_DWORD *)(this + 1088) = 0;
  *(_DWORD *)(this + 1092) = 0;
  *(_DWORD *)(this + 1096) = 0;
  *(_DWORD *)(this + 1124) = 0;
  *(_BYTE *)(this + 1128) = 0;
  *(_BYTE *)(this + 1168) = 0;
  *(_DWORD *)(this + 1180) = 0;
  *(_DWORD *)(this + 1172) = 0;
  if ( !a2 )
    *(_BYTE *)(this + 32) = 0;
}
