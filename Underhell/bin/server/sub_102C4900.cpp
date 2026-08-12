void __thiscall sub_102C4900(_DWORD *this)
{
  int i; // esi

  for ( i = sub_102C2620(this); i != -1; i = sub_102C26C0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 48 * i + 16));
  sub_102C2E00(this);
}
