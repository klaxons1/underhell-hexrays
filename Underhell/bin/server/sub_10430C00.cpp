char __thiscall sub_10430C00(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_10162DE0((int)this); i != 0xFFFF; i = sub_10162EB0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 12 * i + 8));
  return sub_10430540((int)this);
}
