int __thiscall sub_10051190(int *this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // edx

  if ( a3 < this[1] && a3 <= *((_WORD *)this + 10) && *(_WORD *)(*this + 10 * a3 + 6) != a3 )
    sub_1005A8B0(a3);
  v4 = *this + 10 * a3;
  *(_WORD *)(v4 + 6) = a2;
  if ( a2 == 0xFFFF )
  {
    *(_WORD *)(v4 + 8) = *((_WORD *)this + 6);
    *((_WORD *)this + 6) = a3;
  }
  else
  {
    v5 = *this + 10 * a2;
    *(_WORD *)(v4 + 8) = *(_WORD *)(v5 + 8);
    *(_WORD *)(v5 + 8) = a3;
  }
  result = *(unsigned __int16 *)(v4 + 8);
  if ( (_WORD)result == 0xFFFF )
  {
    ++*((_WORD *)this + 9);
    *((_WORD *)this + 7) = a3;
  }
  else
  {
    v7 = 5 * result;
    result = *this;
    *(_WORD *)(*this + 2 * v7 + 6) = a3;
    ++*((_WORD *)this + 9);
  }
  return result;
}
