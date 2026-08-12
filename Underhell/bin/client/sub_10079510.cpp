char __thiscall sub_10079510(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_100775D0((int)this); i != 0xFFFF; i = sub_10078180(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 60 * i + 8));
  return sub_100780C0((int)this);
}
