int __thiscall sub_100AED80(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD v5[12]; // [esp+4h] [ebp-40h] BYREF
  char v6[16]; // [esp+34h] [ebp-10h] BYREF

  result = this[648];
  if ( result && *(_BYTE *)(result + 4) )
  {
    sub_1022EDF0(0, 0, 1);
    sub_1022B390(v5, 0);
    v4 = CommandLine_Tier0(v3);
    if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 40))(v4, "-gamestatsfileoutputonly") )
    {
      strcpy(v6, "gamestats.dat");
      (*(void (__thiscall **)(int, char *, const char *, _DWORD *))(*(_DWORD *)(dword_10413188 + 4) + 60))(
        dword_10413188 + 4,
        v6,
        "MOD",
        v5);
    }
    else if ( dword_104131C4 )
    {
      (**(void (__thiscall ***)(int, const char *, int, _DWORD, _DWORD))dword_104131C4)(
        dword_104131C4,
        Locale,
        1,
        v5[4],
        v5[0]);
    }
    result = sub_100AE9F0(this);
    if ( v5[2] >= 0 )
    {
      result = v5[0];
      if ( v5[0] )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v5[0]);
    }
  }
  return result;
}
