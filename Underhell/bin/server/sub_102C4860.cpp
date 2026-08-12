int __thiscall sub_102C4860(_DWORD *this)
{
  int i; // esi

  for ( i = sub_102C2000(this); i != -1; i = sub_102C20B0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 28 * i + 16));
  return sub_102C2CB0(this);
}
