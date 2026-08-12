__int16 __thiscall sub_10243B80(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106C5C5C & 1) == 0 )
  {
    dword_106C5C5C |= 1u;
    dword_106C5C54 = -1;
    dword_106C5C58 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106C5C54);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
