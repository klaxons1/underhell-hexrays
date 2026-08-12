int *__thiscall sub_100D80A0(_DWORD *this)
{
  if ( this[4] == 13 )
    return this + 3;
  if ( (dword_10697954 & 1) == 0 )
    dword_10697954 |= 1u;
  dword_10697950 = -1;
  return &dword_10697950;
}
