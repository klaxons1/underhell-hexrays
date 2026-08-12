_DWORD *sub_101B89E0()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 472);
  memset(v0, 0, 0x1D8u);
  if ( v0 )
    return sub_101B8430(v0, (int)"CHudWeaponSelection");
  else
    return 0;
}
