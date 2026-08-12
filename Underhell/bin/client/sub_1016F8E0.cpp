int __thiscall sub_1016F8E0(int this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // edx
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  sub_1003A300((int *)this, a3);
  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)this + 8 * a3;
  *(_WORD *)(v5 + 6) = a2;
  if ( a2 == 0xFFFF )
  {
    result = *(unsigned __int16 *)(this + 14);
    *(_WORD *)(v5 + 4) = result;
    *(_WORD *)(this + 14) = a3;
  }
  else
  {
    v7 = v4 + 8 * a2;
    result = *(unsigned __int16 *)(v7 + 4);
    *(_WORD *)(v5 + 4) = result;
    *(_WORD *)(v7 + 4) = a3;
  }
  if ( (_WORD)result == 0xFFFF )
  {
    ++*(_WORD *)(this + 18);
    *(_WORD *)(this + 12) = a3;
  }
  else
  {
    result = (unsigned __int16)result;
    *(_WORD *)(v4 + 8 * (unsigned __int16)result + 6) = a3;
    ++*(_WORD *)(this + 18);
  }
  return result;
}
