void __thiscall sub_100A21B0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_1009DB90(this); i != -1; i = sub_1009DC30(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_1009DAD0(this);
}
