int __thiscall sub_1014BC60(_BYTE *this)
{
  int v2; // edx

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 320), 2);
  sub_100E0970((int)this, v2, 5, 0);
  if ( this[225] != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    this[225] = 2;
  }
  sub_100EBE30((int)this, 6);
  return (*(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 104))(this, "models/brokenglass_piece.mdl");
}
