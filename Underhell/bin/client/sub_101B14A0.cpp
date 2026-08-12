int sub_101B14A0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 320);
  memset(v0, 0, 0x140u);
  if ( v0 )
    return sub_101B1270((int)v0, (int)"CHudDamageIndicator");
  else
    return 0;
}
