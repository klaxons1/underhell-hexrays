char __thiscall sub_10264890(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10263D00((int)this); i != 0xFFFF; i = sub_10263DD0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_10263FC0((int)this);
}
