int sub_100CB830()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 404);
  memset(v0, 0, 0x194u);
  if ( v0 )
    return sub_100CB4C0((int)v0, (int)"CHudStamina");
  else
    return 0;
}
