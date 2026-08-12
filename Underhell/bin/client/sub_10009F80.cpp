void __thiscall sub_10009F80(_DWORD *this)
{
  int i; // esi

  for ( i = sub_10009210(this); i != -1; i = sub_100098E0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_10009820(this);
}
