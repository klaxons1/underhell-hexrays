int __thiscall sub_10239A70(_WORD *this)
{
  int result; // eax

  this[40] |= 1u;
  this[40] &= ~0x40u;
  if ( this )
    return (*(int (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 120))(this, 1);
  return result;
}
