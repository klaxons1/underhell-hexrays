int __thiscall sub_1013D7A0(_BYTE *this, int a2)
{
  int result; // eax

  LOBYTE(result) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 724))(this, a2);
  if ( this[800] )
    return (_BYTE)result == 0;
  else
    return (unsigned __int8)result;
}
