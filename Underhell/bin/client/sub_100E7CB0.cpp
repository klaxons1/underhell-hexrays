char __thiscall sub_100E7CB0(_DWORD *this)
{
  unsigned __int16 i; // si

  for ( i = sub_100E4F20((int)this); i != 0xFFFF; i = sub_100E4FF0(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 20 * i + 8));
  return sub_100E55A0((int)this);
}
