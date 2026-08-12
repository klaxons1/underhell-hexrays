int __thiscall sub_101A4BF0(void *this)
{
  void *v2; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 244);
  memset(v2, 0, 0xF4u);
  if ( v2 )
    return sub_10164E00((int)v2, (int)this);
  else
    return 0;
}
