char __thiscall sub_1025B670(_BYTE *this, char a2)
{
  char result; // al

  result = a2;
  if ( this[292] >> 7 != a2 )
  {
    if ( a2 )
      *((_WORD *)this + 146) |= 0x80u;
    else
      *((_WORD *)this + 146) &= ~0x80u;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 924))(this);
    return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  }
  return result;
}
