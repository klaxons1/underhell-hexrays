int sub_100C7C60()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 828);
  memset(v0, 0, 0x33Cu);
  if ( v0 )
    return sub_100C7AB0((int)v0, (int)"CHudFilmDemo");
  else
    return 0;
}
