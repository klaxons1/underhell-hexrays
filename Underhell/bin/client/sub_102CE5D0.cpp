void __cdecl sub_102CE5D0()
{
  sub_1022FD30(dword_1047CB74);
  sub_102402C0(dword_1047CB50);
  sub_1023D450(dword_1047CB50);
  dword_1047CB50[6] = (bool (__cdecl *)(const char **, const char **))-1;
  if ( (int)dword_1047CB50[3] >= 0 )
  {
    if ( dword_1047CB50[1] )
    {
      (*(void (__thiscall **)(_DWORD, bool (__cdecl *)(const char **, const char **)))(*g_pMemAlloc + 20))(
        g_pMemAlloc,
        dword_1047CB50[1]);
      dword_1047CB50[1] = 0;
    }
    dword_1047CB50[2] = 0;
  }
  dword_1047CB50[7] = (bool (__cdecl *)(const char **, const char **))-1;
  if ( (int)dword_1047CB50[3] >= 0 )
  {
    if ( dword_1047CB50[1] )
    {
      (*(void (__thiscall **)(_DWORD, bool (__cdecl *)(const char **, const char **)))(*g_pMemAlloc + 20))(
        g_pMemAlloc,
        dword_1047CB50[1]);
      dword_1047CB50[1] = 0;
    }
    dword_1047CB50[2] = 0;
  }
}
