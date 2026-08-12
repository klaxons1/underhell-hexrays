int __thiscall sub_100200C0(_DWORD **this)
{
  int result; // eax

  result = ((int (__thiscall *)(_DWORD **))(*this)[272])(this);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_DWORD *))(*this[651] + 84))(this[651]);
  return result;
}
