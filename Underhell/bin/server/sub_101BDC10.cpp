int __thiscall sub_101BDC10(_DWORD **this)
{
  int result; // eax

  result = sub_100C6890((int)this);
  if ( this[538] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[538] + 4))(this[538], this + 530);
  return result;
}
