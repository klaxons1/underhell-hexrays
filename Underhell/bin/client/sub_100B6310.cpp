void __thiscall sub_100B6310(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100B4CF0(this); i != -1; i = sub_100B4D90(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_100B4C30(this);
}
