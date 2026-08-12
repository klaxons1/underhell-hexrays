char __thiscall sub_100E7AF0(int this)
{
  char v2; // al
  _BYTE *v4; // eax
  int (*v5)(void); // eax
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // [esp+4h] [ebp-8h] BYREF
  char v12; // [esp+Bh] [ebp-1h] BYREF

  v2 = *(_BYTE *)(this + 72);
  if ( (v2 & 0x10) != 0 )
    return 1;
  *(_BYTE *)(this + 72) = v2 | 0x10;
  v4 = *(_BYTE **)(this + 52);
  if ( v4 && *v4 )
  {
    v5 = *(int (**)(void))(this + 60);
    if ( v5 )
      v6 = v5();
    else
      v6 = 0;
    v7 = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 64) = v6;
    v8 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 8))(
           dword_10700A38 + 4,
           v7,
           "rb",
           "MOD");
    v11 = v8;
    if ( v8 )
    {
      v9 = (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 52))(
             dword_10700A38 + 4,
             *(_DWORD *)(this + 52),
             "MOD");
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10700A38 + 4) + 28))(dword_10700A38 + 4, v8);
      v12 = 0;
      if ( v10 <= 0x100000 )
        sub_100E6F00(this, &v11, v10, &v12);
      else
        sub_100E70F0(this, &v11, &v12);
      if ( v12 )
      {
        if ( (*(_BYTE *)(this + 72) & 2) == 0 )
          (*(void (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_10700A38 + 60))(
            dword_10700A38,
            *(_DWORD *)(this + 52),
            "MOD");
        *(_BYTE *)(this + 72) |= 8u;
      }
      sub_100E7450(this, 0, v9);
      return 1;
    }
    else
    {
      *(_BYTE *)(this + 72) |= 8u;
      return 1;
    }
  }
  else
  {
    Error("CUtlCachedFileData:  Can't Init, no repository file specified.");
    return 0;
  }
}
