char __thiscall sub_1025B6C0(_WORD *this, char a2)
{
  char result; // al

  result = a2;
  if ( ((this[146] & 0x200) != 0) != a2 )
  {
    if ( a2 )
      this[146] |= 0x200u;
    else
      this[146] &= ~0x200u;
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 924))(this);
    return (*(int (__thiscall **)(_WORD *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  }
  return result;
}
