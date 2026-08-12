int __thiscall sub_10150530(_DWORD **this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // eax

  if ( this[1] )
  {
    if ( this[2] )
    {
      v3 = sub_10073890();
      if ( v3 )
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*this[1] + 48))(this[1], v3 + 1196, 3);
        (*(void (__thiscall **)(_DWORD *, int, int))(*this[2] + 48))(this[2], v3 + 1208, 3);
      }
    }
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
    return sub_101BCA60(v5);
  }
  return result;
}
