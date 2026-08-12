int __thiscall sub_102307E0(int this, int a2)
{
  const char *v4; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  const char *v8; // ecx
  char *v9; // eax
  const char *v10; // ecx
  int v11; // edi
  const char *v12; // eax
  __int64 v13; // [esp+10h] [ebp-18h]
  bool v14; // [esp+24h] [ebp-4h]
  int v15; // [esp+30h] [ebp+8h]

  if ( a2 )
  {
    v6 = *(_DWORD *)(this + 248);
    v14 = (v6 & 8) == 0;
    v7 = 0;
    if ( (v6 & 0x10) != 0 )
    {
      v7 = *(_DWORD **)(this + 840);
    }
    else
    {
      v8 = *(const char **)(this + 836);
      if ( v8 )
      {
        v15 = *(int *)(this + 808);
        if ( v8 == "!player" || !_stricmp(v8, "!player") )
          *(float *)&v15 = 56755.84;
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v9 = *(char **)(this + 836);
        if ( !v9 )
          v9 = (char *)String;
        v7 = sub_1012C650(v9, (float *)(a2 + 580), *(float *)&v15, this, 0, 0, 0);
      }
    }
    v10 = *(const char **)(this + 800);
    if ( !v10 )
      v10 = String;
    v11 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, bool, _DWORD *))(*(_DWORD *)a2 + 1600))(
            a2,
            v10,
            *(float *)(this + 812),
            *(float *)(this + 828),
            *(_DWORD *)(this + 820),
            v14,
            v7);
    v12 = *(const char **)(this + 800);
    if ( !v12 )
      v12 = String;
    DevMsg(2, "Playing sentence %s\n", v12);
    HIDWORD(v13) = this;
    LODWORD(v13) = 0;
    sub_1010DD80((_DWORD *)(this + 844), v13, 0.0);
    return v11;
  }
  else
  {
    v4 = *(const char **)(this + 800);
    if ( !v4 )
      v4 = String;
    DevMsg(2, "Not Playing sentence %s\n", v4);
    return -1;
  }
}
