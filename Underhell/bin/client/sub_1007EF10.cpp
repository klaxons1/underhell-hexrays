int __thiscall sub_1007EF10(int *this, int a2, int a3)
{
  int v4; // ebx
  unsigned __int16 v5; // dx
  int result; // eax

  sub_1007E370(this, a3);
  v4 = *this;
  *(_WORD *)(*this + 16 * a3 + 14) = a2;
  if ( a2 == 0xFFFF )
  {
    v5 = *((_WORD *)this + 8);
    *(_WORD *)(v4 + 16 * a3 + 12) = v5;
    this[4] = a3;
  }
  else
  {
    v5 = *(_WORD *)(v4 + 16 * a2 + 12);
    *(_WORD *)(v4 + 16 * a3 + 12) = v5;
    *(_WORD *)(v4 + 16 * a2 + 12) = a3;
  }
  result = 0xFFFF;
  if ( v5 == 0xFFFF )
  {
    ++this[6];
    this[3] = a3;
  }
  else
  {
    *(_WORD *)(v4 + 16 * v5 + 14) = a3;
    ++this[6];
  }
  return result;
}
