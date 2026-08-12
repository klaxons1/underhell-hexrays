unsigned int __thiscall sub_10152EC0(_BYTE *this, int a2)
{
  unsigned int result; // eax

  if ( this[12] )
  {
    result = dword_103E8C58;
    if ( *(_DWORD *)(dword_1043CDD4 + 48) )
    {
      if ( dword_103E8C58 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 2) != (unsigned int)dword_103E8C58 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 1) )
      {
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
      }
    }
    else if ( dword_103E8C58 != -1 )
    {
      result = (unsigned int)dword_103E8C58 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 2) == (unsigned int)dword_103E8C58 >> 12 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 1) )
          return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 24))(this);
      }
    }
  }
  return result;
}
