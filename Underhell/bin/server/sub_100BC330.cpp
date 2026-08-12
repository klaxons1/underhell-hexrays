void __thiscall sub_100BC330(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100BB3F0(this); i != -1; i = sub_100BBAC0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_100BBA00(this);
}
