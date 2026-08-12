int sub_100D2C10()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 252);
  memset(v0, 0, 0xFCu);
  if ( v0 )
    return sub_100D2AA0((int)v0, (int)"CHudVehicle");
  else
    return 0;
}
