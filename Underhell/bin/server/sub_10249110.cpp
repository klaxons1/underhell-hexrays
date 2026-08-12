int __thiscall sub_10249110(_BYTE *this)
{
  _BYTE *v2; // esi

  v2 = this + 225;
  if ( this[225] != 1 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v2 = 1;
  }
  return sub_10253070(this);
}
