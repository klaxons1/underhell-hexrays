int __thiscall sub_10022110(void *this)
{
  void *v2; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 212);
  memset(v2, 0, 0xD4u);
  if ( v2 )
    return sub_10074B40(this);
  else
    return 0;
}
