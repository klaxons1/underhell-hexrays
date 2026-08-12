int __thiscall sub_10247030(_DWORD *this)
{
  int i; // esi

  for ( i = sub_10245D30(this); i != -1; i = sub_10246800(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  return sub_10246770(this);
}
