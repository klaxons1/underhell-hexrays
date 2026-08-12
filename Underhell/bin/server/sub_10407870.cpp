unsigned int __thiscall sub_10407870(_BYTE *this, int a2)
{
  _BYTE *v3; // esi

  v3 = this + 225;
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  return sub_10407090((int)this);
}
