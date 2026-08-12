int __thiscall sub_1026EF90(_DWORD **this)
{
  int result; // eax

  if ( this[93] )
  {
    (*(void (__thiscall **)(_DWORD *))(*this[93] + 508))(this[93]);
    (*(void (__thiscall **)(_DWORD *, int))(*this[93] + 124))(this[93], 1);
    return ((int (__thiscall *)(_DWORD **))(*this)[263])(this);
  }
  return result;
}
