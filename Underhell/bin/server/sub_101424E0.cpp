int __thiscall sub_101424E0(_BYTE *this, int a2)
{
  _BYTE *v3; // esi
  int result; // eax

  v3 = this + 225;
  if ( this[225] )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  if ( this[224] != 2 )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 472))(this, this + 224);
    this[224] = 2;
  }
  return result;
}
