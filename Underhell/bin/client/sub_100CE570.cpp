void __thiscall sub_100CE570(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100CC5E0(this); i != -1; i = sub_100CD3F0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_100CD330(this);
}
