int sub_100C8640()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 316);
  memset(v0, 0, 0x13Cu);
  if ( v0 )
    return sub_100C8490((int)v0, (int)"CHudHDRDemo");
  else
    return 0;
}
