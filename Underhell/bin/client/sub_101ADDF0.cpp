int sub_101ADDF0()
{
  void *v0; // esi
  int v1; // eax

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 472);
  memset(v0, 0, 0x1D8u);
  if ( v0 && (v1 = sub_101AD990((int)v0, (int)"CHudGrenadeAmmo")) != 0 )
    return v1 + 380;
  else
    return 0;
}
