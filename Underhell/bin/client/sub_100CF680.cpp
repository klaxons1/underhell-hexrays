int __thiscall sub_100CF680(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100CD120(this); i != -1; i = sub_100CD1C0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 36 * i + 16));
  return sub_100CEF50(this);
}
