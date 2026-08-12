void __cdecl sub_102CE610()
{
  sub_1022FD30(dword_1047CBD4);
  sub_10240270(dword_1047CBB0);
  sub_1023D0A0(dword_1047CBB0);
  dword_1047CBB0[6] = (bool (__cdecl *)(const char **, const char **))-1;
  if ( (int)dword_1047CBB0[3] >= 0 )
  {
    if ( dword_1047CBB0[1] )
    {
      (*(void (__thiscall **)(_DWORD, bool (__cdecl *)(const char **, const char **)))(*g_pMemAlloc + 20))(
        g_pMemAlloc,
        dword_1047CBB0[1]);
      dword_1047CBB0[1] = 0;
    }
    dword_1047CBB0[2] = 0;
  }
  dword_1047CBB0[7] = (bool (__cdecl *)(const char **, const char **))-1;
  if ( (int)dword_1047CBB0[3] >= 0 )
  {
    if ( dword_1047CBB0[1] )
    {
      (*(void (__thiscall **)(_DWORD, bool (__cdecl *)(const char **, const char **)))(*g_pMemAlloc + 20))(
        g_pMemAlloc,
        dword_1047CBB0[1]);
      dword_1047CBB0[1] = 0;
    }
    dword_1047CBB0[2] = 0;
  }
}
