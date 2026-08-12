int sub_100BCE20()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 288);
  memset(v0, 0, 0x120u);
  if ( v0 )
    return sub_100BCC90((int)v0, (int)"CHudDotReticle");
  else
    return 0;
}
