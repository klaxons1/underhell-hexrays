int sub_100BEC50()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 296);
  memset(v0, 0, 0x128u);
  if ( v0 )
    return sub_100BEA80((int)v0, (int)"CHudBleeding");
  else
    return 0;
}
