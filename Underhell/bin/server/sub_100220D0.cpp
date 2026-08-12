int __thiscall sub_100220D0(void *this)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 20);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  if ( v2 )
    return sub_10079D90(this);
  else
    return 0;
}
