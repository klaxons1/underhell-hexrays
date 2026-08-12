int __thiscall sub_1013D760(_BYTE *this, int a2, int a3)
{
  int result; // eax

  LOBYTE(result) = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 720))(this, a2, a3);
  if ( this[800] )
    return (_BYTE)result == 0;
  else
    return (unsigned __int8)result;
}
