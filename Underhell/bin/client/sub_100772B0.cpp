int *__thiscall sub_100772B0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10413850 & 1) == 0 )
  {
    dword_10413850 |= 1u;
    dword_10413848 = -1;
    dword_1041384C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return &dword_10413848;
  else
    return (int *)(this[1] + 60 * a2);
}
