char __thiscall sub_100E7D10(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_100E3AF0((int)this); i != 0xFFFF; i = sub_100E6220(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 16 * i + 8));
  return sub_100E6160((int)this);
}
