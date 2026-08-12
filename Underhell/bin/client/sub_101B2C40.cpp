int sub_101B2C40()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 288);
  memset(v0, 0, 0x120u);
  if ( v0 )
    return sub_101B29E0((int)v0, (int)"CHudPoisonDamageIndicator");
  else
    return 0;
}
