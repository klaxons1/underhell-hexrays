int __thiscall sub_1026A090(_DWORD **this, _BYTE *a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this[12] + 4))(this[12], a2);
  if ( (a2[3296] & 0x20) != 0 )
  {
    result = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this[12] + 24))(this[12], a2);
    if ( (_BYTE)result )
    {
      result = ((int (__thiscall *)(_DWORD **, _BYTE *))(*this)[18])(this, a2);
      if ( !(_BYTE)result )
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 1460))(a2);
    }
  }
  return result;
}
