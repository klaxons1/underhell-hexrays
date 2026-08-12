int __thiscall sub_10207B50(_DWORD *this)
{
  int v2; // esi

  v2 = sub_100DA1F0(this) | 0x40000000;
  if ( (this[62] & 0x100) != 0 )
  {
    v2 |= 0x10u;
  }
  else if ( sub_101E48B0((int)this, 35.0, 128.0) )
  {
    if ( (v2 |= 0x10u, *(_DWORD *)(dword_10698344 + 48))
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(this[280] + 92))(this + 280, 11)
      || *(_DWORD *)(dword_10698344 + 48)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(this[280] + 92))(this + 280, 14) )
    {
      v2 |= 0x200u;
    }
  }
  if ( (this[62] & 0x4000) != 0 )
    return v2 | 0x200;
  return v2;
}
