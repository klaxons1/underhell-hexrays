int sub_100BE780()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 372);
  memset(v0, 0, 0x174u);
  if ( v0 )
    return sub_100BE580((int)v0, (int)"CHudUHBattery");
  else
    return 0;
}
