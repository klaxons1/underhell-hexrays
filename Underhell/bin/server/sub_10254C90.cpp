unsigned int __thiscall sub_10254C90(_DWORD **this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( this[204] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[204] + 4))(this[204], this + 203);
  return result;
}
