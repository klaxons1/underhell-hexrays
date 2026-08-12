int __thiscall sub_10160360(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  _DWORD v4[12]; // [esp+4h] [ebp-40h] BYREF
  char v5[16]; // [esp+34h] [ebp-10h] BYREF

  result = this[648];
  if ( result && *(_BYTE *)(result + 4) )
  {
    sub_1042DE40(0, 0, 1);
    sub_1042B330(v4, 0);
    v3 = CommandLine_Tier0();
    if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 40))(v3, "-gamestatsfileoutputonly") )
    {
      strcpy(v5, "gamestats.dat");
      (*(void (__thiscall **)(int, char *, const char *, _DWORD *))(*(_DWORD *)(dword_106B31D8 + 4) + 60))(
        dword_106B31D8 + 4,
        v5,
        "MOD",
        v4);
    }
    else if ( dword_106B31CC )
    {
      (**(void (__thiscall ***)(int, const char *, int, _DWORD, _DWORD))dword_106B31CC)(
        dword_106B31CC,
        String,
        1,
        v4[4],
        v4[0]);
    }
    result = sub_1015FD90(this);
    if ( v4[2] >= 0 )
    {
      result = v4[0];
      if ( v4[0] )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v4[0]);
    }
  }
  return result;
}
