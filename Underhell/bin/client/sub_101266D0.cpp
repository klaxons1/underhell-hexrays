char __thiscall sub_101266D0(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10125D30((int)this); i != 0xFFFF; i = sub_10125E00(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_10125C70((int)this);
}
