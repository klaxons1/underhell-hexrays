float *sub_100AF650()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 260);
  memset(v0, 0, 0x104u);
  if ( v0 )
    return sub_100AF390((float *)v0, (int)"CHudGeiger");
  else
    return 0;
}
