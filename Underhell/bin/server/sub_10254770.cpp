int __thiscall sub_10254770(_DWORD **this, _DWORD *a2)
{
  int result; // eax

  result = ((int (__thiscall *)(_DWORD **, _DWORD *))(*this)[180])(this, a2);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*a2 + 320))(a2);
    if ( !(_BYTE)result )
    {
      result = a2[106];
      if ( result )
      {
        if ( this[214] )
          return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[214] + 12))(this[214], a2[106]);
      }
    }
  }
  return result;
}
