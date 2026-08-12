int __thiscall sub_100AF7F0(_DWORD *this)
{
  int i; // esi

  for ( i = sub_100ADCC0(this); i != -1; i = sub_100ADD70(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 28 * i + 16));
  return sub_100ADEF0(this);
}
