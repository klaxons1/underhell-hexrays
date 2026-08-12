int __thiscall sub_10369430(_DWORD *this)
{
  int v2; // eax

  this[1421] = -1;
  this[1422] = -1;
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  if ( this[55] != 80 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 80;
  }
  sub_10399F00(this);
  v2 = *this;
  this[63] |= 0x58000000u;
  return (*(int (__thiscall **)(_DWORD *))(v2 + 1164))(this);
}
