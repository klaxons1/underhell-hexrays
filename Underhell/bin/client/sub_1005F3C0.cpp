_DWORD *sub_1005F3C0()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 1028);
  memset(v0, 0, 0x404u);
  if ( v0 )
    return sub_1005F010(v0, (int)"CHudCommentary");
  else
    return 0;
}
