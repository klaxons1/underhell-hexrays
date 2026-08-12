char __thiscall sub_1014F210(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_1014E480((int)this); i != 0xFFFF; i = sub_1014E8F0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_1014E830((int)this);
}
