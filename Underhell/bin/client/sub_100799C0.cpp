int __thiscall sub_100799C0(int *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  int result; // eax
  int v4; // ebx
  unsigned __int16 v5; // dx

  v2 = a2;
  result = a2;
  if ( a2 < this[1] && a2 <= *((_WORD *)this + 10) )
  {
    result = *this + 20 * a2;
    if ( *(_WORD *)(result + 16) != a2 )
    {
      v4 = *(unsigned __int16 *)(result + 16);
      v5 = *(_WORD *)(result + 18);
      if ( (_WORD)v4 == 0xFFFF )
      {
        *((_WORD *)this + 6) = v5;
      }
      else
      {
        *(_WORD *)(*this + 20 * v4 + 18) = v5;
        v2 = a2;
      }
      if ( v5 == 0xFFFF )
        *((_WORD *)this + 7) = v4;
      else
        *(_WORD *)(*this + 20 * v5 + 16) = v4;
      *(_WORD *)(result + 18) = v2;
      *(_WORD *)(result + 16) = v2;
      result = 0xFFFF;
      --*((_WORD *)this + 9);
    }
  }
  return result;
}
