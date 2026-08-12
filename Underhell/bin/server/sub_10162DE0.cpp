int __thiscall sub_10162DE0(int this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_106B4BB4;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_106B4BAC = -1;
      dword_106B4BB0 = 0x1FFFF;
      v2 |= 1u;
      dword_106B4BB4 = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &dword_106B4BAC : (int *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
    if ( *(_WORD *)v3 == 0xFFFF )
      break;
    if ( (v2 & 1) == 0 )
    {
      dword_106B4BAC = -1;
      dword_106B4BB0 = 0x1FFFF;
      v2 |= 1u;
      dword_106B4BB4 = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)dword_106B4BAC;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int16)result);
  }
  return result;
}
