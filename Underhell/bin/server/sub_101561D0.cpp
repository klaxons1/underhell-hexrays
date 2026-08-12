int __thiscall sub_101561D0(int *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  int result; // eax
  int v4; // ebx
  unsigned __int16 v5; // dx

  v2 = a2;
  result = a2;
  if ( a2 < this[1] && a2 <= *((_WORD *)this + 10) )
  {
    result = *this + 12 * a2;
    if ( *(_WORD *)(result + 8) != a2 )
    {
      v4 = *(unsigned __int16 *)(result + 8);
      v5 = *(_WORD *)(result + 10);
      if ( (_WORD)v4 == 0xFFFF )
      {
        *((_WORD *)this + 6) = v5;
      }
      else
      {
        *(_WORD *)(*this + 12 * v4 + 10) = v5;
        v2 = a2;
      }
      if ( v5 == 0xFFFF )
        *((_WORD *)this + 7) = v4;
      else
        *(_WORD *)(*this + 12 * v5 + 8) = v4;
      *(_WORD *)(result + 10) = v2;
      *(_WORD *)(result + 8) = v2;
      result = 0xFFFF;
      --*((_WORD *)this + 9);
    }
  }
  return result;
}
