bool __thiscall sub_1027E810(int this, char *String2, char *String1, int a4)
{
  int v5; // esi
  int v6; // edi
  char v7; // bl
  int v8; // esi
  int v9; // eax
  int v10; // eax
  bool v11; // cc
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h]

  v5 = this - 204;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this - 204) + 128))(this - 204)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 232))(v5, 2);
  }
  v6 = 0;
  v7 = 0;
  v13 = 0;
  if ( *(int *)(this + 84) > 0 )
  {
    v14 = 0;
    do
    {
      if ( !_strnicmp(
              (const char *)(v6 + *(_DWORD *)(this + 72) + 4),
              String2,
              strlen((const char *)(v6 + *(_DWORD *)(this + 72) + 4))) )
      {
        v8 = sub_10237C80((_DWORD *)(v6 + *(_DWORD *)(this + 72)));
        if ( v8 )
        {
          v9 = sub_10229D00(32);
          if ( v9 )
          {
            v10 = sub_1022B200(
                    v9,
                    (int)"CustomURL",
                    "url",
                    &String2[strlen((const char *)(v6 + *(_DWORD *)(this + 72) + 4)) + 3],
                    "protocol",
                    (const char *)(v6 + *(_DWORD *)(this + 72) + 4));
            v6 = v14;
          }
          else
          {
            v10 = 0;
          }
          (*(void (__stdcall **)(int, int, _DWORD))(*(_DWORD *)(this - 204) + 132))(v8, v10, 0.0);
        }
        v7 = 1;
      }
      v6 += 36;
      v11 = ++v13 < *(_DWORD *)(this + 84);
      v14 = v6;
    }
    while ( v11 );
    if ( v7 )
      return 0;
  }
  return !*(_BYTE *)(this + 68) || String1 && (!_stricmp(String1, "_blank") || !_stricmp(String1, "_new"));
}
