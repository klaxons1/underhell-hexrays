double sub_10153C40()
{
  int v0; // eax
  int v1; // eax
  double v2; // st7

  v0 = CommandLine_Tier0();
  if ( (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v0 + 12))(v0, "-tickrate", 0)
    && (v1 = CommandLine_Tier0(),
        v2 = (double)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v1 + 28))(v1, "-tickrate", 0),
        v2 > 10.0) )
  {
    return 1.0 / v2;
  }
  else
  {
    return (float)0.015;
  }
}
