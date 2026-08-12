int __thiscall sub_1007EE90(int *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  sub_1007E4C0(this, a3);
  v4 = *this;
  v5 = *this + 12 * a3;
  *(_WORD *)(v5 + 10) = a2;
  if ( a2 == 0xFFFF )
  {
    result = *((unsigned __int16 *)this + 8);
    *(_WORD *)(v5 + 8) = result;
    this[4] = a3;
  }
  else
  {
    v7 = v4 + 12 * a2;
    result = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(v5 + 8) = result;
    *(_WORD *)(v7 + 8) = a3;
  }
  if ( (_WORD)result == 0xFFFF )
  {
    ++this[6];
    this[3] = a3;
  }
  else
  {
    result = 3 * (unsigned __int16)result;
    *(_WORD *)(v4 + 4 * result + 10) = a3;
    ++this[6];
  }
  return result;
}
