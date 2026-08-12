_DWORD *__thiscall sub_10147100(_DWORD *this)
{
  _DWORD *result; // eax

  if ( this == (_DWORD *)668 )
  {
    result = sub_10145000((_DWORD *)0x29C, 0);
    MEMORY[0x320] = 8212;
  }
  else
  {
    result = sub_10145000(this, this - 165);
    this[33] = 8212;
  }
  return result;
}
