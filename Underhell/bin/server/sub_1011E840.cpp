int __thiscall sub_1011E840(_DWORD *this)
{
  int i; // esi

  for ( i = sub_1011D540(this); i != -1; i = sub_1011DD20(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 40 * i + 16));
  return sub_1011E550(this);
}
