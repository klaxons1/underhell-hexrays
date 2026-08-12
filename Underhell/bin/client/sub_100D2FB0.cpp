int sub_100D2FB0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 256);
  memset(v0, 0, 0x100u);
  if ( v0 )
    return sub_100D2DE0((int)v0, (int)"CHudWeapon");
  else
    return 0;
}
