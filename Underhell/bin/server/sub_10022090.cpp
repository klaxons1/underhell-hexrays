int __thiscall sub_10022090(void *this)
{
  void *v2; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 96);
  memset(v2, 0, 0x60u);
  if ( v2 )
    return sub_10079890(this);
  else
    return 0;
}
