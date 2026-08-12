int __thiscall sub_10084980(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax

  (*(void (__thiscall **)(_DWORD *, int))(*this[1] + 56))(this[1], dword_1042C508);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v4 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
    return sub_101BCA60(v4);
  }
  return result;
}
