int __thiscall sub_1023FAB0(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  this[63] |= 0x80u;
  return sub_100D8500(this);
}
