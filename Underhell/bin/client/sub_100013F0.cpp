int __thiscall sub_100013F0(int *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // di
  int result; // eax
  int v4; // ebx
  unsigned __int16 v5; // dx

  v2 = a2;
  result = a2;
  if ( a2 < this[1] && a2 <= *((_WORD *)this + 10) )
  {
    result = *this + 1280 * a2;
    if ( *(_WORD *)(result + 1276) != a2 )
    {
      v4 = *(unsigned __int16 *)(result + 1276);
      v5 = *(_WORD *)(result + 1278);
      if ( (_WORD)v4 == 0xFFFF )
      {
        *((_WORD *)this + 6) = v5;
      }
      else
      {
        *(_WORD *)(1280 * v4 + *this + 1278) = v5;
        v2 = a2;
      }
      if ( v5 == 0xFFFF )
        *((_WORD *)this + 7) = v4;
      else
        *(_WORD *)(1280 * v5 + *this + 1276) = v4;
      *(_WORD *)(result + 1278) = v2;
      *(_WORD *)(result + 1276) = v2;
      result = 0xFFFF;
      --*((_WORD *)this + 9);
    }
  }
  return result;
}
