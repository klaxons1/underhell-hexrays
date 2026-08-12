char __thiscall sub_1025B620(_WORD *this, char a2)
{
  char result; // al

  result = a2;
  if ( a2 != ((this[146] & 8) != 0) )
  {
    if ( a2 )
      this[146] |= 8u;
    else
      this[146] &= ~8u;
    return (*(int (__thiscall **)(_WORD *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  }
  return result;
}
