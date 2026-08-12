int sub_101AE220()
{
  void *v0; // esi
  int v1; // eax

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 436);
  memset(v0, 0, 0x1B4u);
  if ( v0 && (v1 = sub_101ADF60((int)v0, (int)"CHudBattery")) != 0 )
    return v1 + 380;
  else
    return 0;
}
