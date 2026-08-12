char __thiscall sub_102BA470(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  this[63] |= 0x80u;
  sub_100D8500(this);
  return sub_100EAB80(this, 80);
}
