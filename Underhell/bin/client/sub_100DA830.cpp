int __thiscall sub_100DA830(int this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // edx

  if ( a3 < *(int *)(this + 4) && a3 <= *(_WORD *)(this + 20) && *(_WORD *)(96 * a3 + *(_DWORD *)this + 92) != a3 )
    sub_100DA7A0((int *)this, a3);
  v4 = *(_DWORD *)this + 96 * a3;
  *(_WORD *)(v4 + 92) = a2;
  if ( a2 == 0xFFFF )
  {
    *(_WORD *)(v4 + 94) = *(_WORD *)(this + 12);
    *(_WORD *)(this + 12) = a3;
  }
  else
  {
    v5 = *(_DWORD *)this + 96 * a2;
    *(_WORD *)(v4 + 94) = *(_WORD *)(v5 + 94);
    *(_WORD *)(v5 + 94) = a3;
  }
  result = *(unsigned __int16 *)(v4 + 94);
  if ( (_WORD)result == 0xFFFF )
  {
    ++*(_WORD *)(this + 18);
    *(_WORD *)(this + 14) = a3;
  }
  else
  {
    v7 = 3 * result;
    result = *(_DWORD *)this;
    *(_WORD *)(32 * v7 + *(_DWORD *)this + 92) = a3;
    ++*(_WORD *)(this + 18);
  }
  return result;
}
