int __thiscall sub_10008C10(_DWORD *this)
{
  int i; // esi

  for ( i = sub_10002280(this); i != -1; i = sub_10002AC0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 40 * i + 16));
  return sub_10008A10(this);
}
