int __thiscall sub_10022190(void *this)
{
  void *v2; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 156);
  memset(v2, 0, 0x9Cu);
  if ( v2 )
    return sub_1007E490(this);
  else
    return 0;
}
