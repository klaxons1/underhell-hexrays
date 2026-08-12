__int16 __thiscall sub_1010D650(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10436F2C & 1) == 0 )
  {
    dword_10436F2C |= 1u;
    dword_10436F24 = -1;
    dword_10436F28 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10436F28;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
