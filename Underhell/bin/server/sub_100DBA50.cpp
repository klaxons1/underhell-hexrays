__int16 __thiscall sub_100DBA50(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10697960 & 1) == 0 )
  {
    dword_10697960 |= 1u;
    dword_10697958 = -1;
    dword_1069795C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1069795C;
  else
    return *(_WORD *)(this[1] + 24 * a2 + 4);
}
