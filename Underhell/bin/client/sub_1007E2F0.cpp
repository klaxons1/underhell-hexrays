int __thiscall sub_1007E2F0(int *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  sub_1007DBD0(this, a3);
  v4 = *this;
  v5 = *this + 36 * a3;
  *(_WORD *)(v5 + 34) = a2;
  if ( a2 == 0xFFFF )
  {
    result = *((unsigned __int16 *)this + 8);
    *(_WORD *)(v5 + 32) = result;
    this[4] = a3;
  }
  else
  {
    v7 = v4 + 36 * a2;
    result = *(unsigned __int16 *)(v7 + 32);
    *(_WORD *)(v5 + 32) = result;
    *(_WORD *)(v7 + 32) = a3;
  }
  if ( (_WORD)result == 0xFFFF )
  {
    ++this[6];
    this[3] = a3;
  }
  else
  {
    result = 9 * (unsigned __int16)result;
    *(_WORD *)(v4 + 4 * result + 34) = a3;
    ++this[6];
  }
  return result;
}
