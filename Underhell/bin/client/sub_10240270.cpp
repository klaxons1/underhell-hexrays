int __thiscall sub_10240270(_DWORD *this)
{
  int i; // esi

  for ( i = sub_1023D130(this); i != -1; i = sub_1023D1D0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  return sub_1023D0A0(this);
}
