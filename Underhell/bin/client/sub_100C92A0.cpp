int sub_100C92A0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 404);
  memset(v0, 0, 0x194u);
  if ( v0 )
    return sub_100C8F40((int)v0, (int)"CHudEndurance");
  else
    return 0;
}
