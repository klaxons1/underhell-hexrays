unsigned int __thiscall sub_102546E0(_DWORD **this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( this[214] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[214] + 4))(this[214], this + 215);
  return result;
}
