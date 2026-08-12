int sub_101AD110()
{
  void *v0; // esi
  int v1; // eax

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 448);
  memset(v0, 0, 0x1C0u);
  if ( v0 && (v1 = sub_101ACAF0((int)v0, (int)"CHudAmmo")) != 0 )
    return v1 + 380;
  else
    return 0;
}
