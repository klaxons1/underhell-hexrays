void __thiscall sub_100A7280(_BYTE *this, char *String1, int a3)
{
  int v4; // edi
  int i; // esi
  char *v6; // esi
  __int16 v7; // ax
  int v8; // edi
  int v9; // eax
  _BYTE *v10; // eax
  __int16 j; // di
  int v12; // eax
  _BYTE v13[136]; // [esp+Ch] [ebp-C8h] BYREF
  _DWORD v14[15]; // [esp+94h] [ebp-40h] BYREF
  int v15; // [esp+D0h] [ebp-4h] BYREF

  v4 = sub_1002A680(&dword_10690DF8);
  for ( i = 0; i < sub_1016BFB0(&dword_10690DF8); ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 4 * i) + 1904))(*(_DWORD *)(v4 + 4 * i));
  if ( this[4] )
  {
    v6 = String1;
    (*(void (__thiscall **)(char *))(*(_DWORD *)String1 + 20))(String1);
    sub_100B2070(v13);
    v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 52))(v6);
    v8 = v7;
    while ( v8 )
    {
      --v8;
      v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 40))(v6);
      (*(void (__thiscall **)(char *, char **, int, int))(*(_DWORD *)v6 + 76))(v6, &String1, 1, v9);
      v10 = (_BYTE *)sub_100B0F90(String1);
      if ( !v10 )
        v10 = v13;
      (*(void (__thiscall **)(char *, _BYTE *, int *))(*(_DWORD *)v6 + 8))(v6, v10, &dword_1060B8C8);
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 32))(v6);
    (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 20))(v6);
    sub_10077A30(v14);
    for ( j = (*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 52))(v6); j; --j )
    {
      (*(void (__thiscall **)(char *, int *, int, _DWORD))(*(_DWORD *)v6 + 120))(v6, &v15, 1, 0);
      if ( v15 )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 1868))(v15);
        (*(void (__thiscall **)(char *, int, int *))(*(_DWORD *)v6 + 8))(v6, v12, &dword_10607EB0);
      }
      else
      {
        (*(void (__thiscall **)(char *, _DWORD *, int *))(*(_DWORD *)v6 + 8))(v6, v14, &dword_10607EB0);
      }
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 32))(v6);
    sub_100772A0((int)v14);
    sub_100B1A90(v13);
  }
  if ( sub_1016BFB0(&dword_10690DF8) && !*(_DWORD *)(dword_106935D8 + 4) && !byte_1069362C )
  {
    Msg("***\n");
    Msg("ERROR: Loaded save game with no node graph. Load map and build node graph first!\n");
    Msg("***\n");
    dword_1069042C |= 1u;
    sub_10085F40((_BYTE *)dword_10693628);
  }
}
