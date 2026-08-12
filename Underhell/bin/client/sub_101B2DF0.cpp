int sub_101B2DF0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 252);
  memset(v0, 0, 0xFCu);
  if ( v0 )
    return sub_101B2C90((int)v0, (int)"CHudPosture");
  else
    return 0;
}
