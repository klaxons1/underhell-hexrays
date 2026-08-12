char __thiscall sub_10232090(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10231810((int)this); i != 0xFFFF; i = sub_102318E0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 12 * i + 8));
  return sub_10231750((int)this);
}
