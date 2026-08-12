int sub_101AD0C0()
{
  void *v0; // esi
  int v1; // eax

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 440);
  memset(v0, 0, 0x1B8u);
  if ( v0 && (v1 = sub_101ACDA0((int)v0, (int)"CHudSecondaryAmmo")) != 0 )
    return v1 + 380;
  else
    return 0;
}
