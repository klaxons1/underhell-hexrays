_DWORD *sub_100BF6A0()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 356);
  memset(v0, 0, 0x164u);
  if ( v0 )
    return sub_100BED80(v0, (int)"CHudChat");
  else
    return 0;
}
