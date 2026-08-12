const char *__thiscall sub_1042EE50(_DWORD *this, unsigned __int16 a2)
{
  if ( a2 == 0xFFFF )
    return String;
  else
    return (const char *)(*(_DWORD *)(this[9] + 4 * *(unsigned __int16 *)(this[1] + 12 * a2 + 8))
                        + *(unsigned __int16 *)(this[1] + 12 * a2 + 10)
                        + 8);
}
