bool __thiscall sub_101115D0(_BYTE *this, __int16 a2)
{
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 56))(this) == 1 )
    return (a2 & 0x200) != 0;
  else
    return (this[36] & 8) == 0;
}
