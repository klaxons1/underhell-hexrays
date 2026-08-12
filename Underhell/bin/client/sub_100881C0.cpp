int __thiscall sub_100881C0(int *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  int result; // eax
  int v4; // edi
  unsigned __int16 v5; // dx

  v2 = a2;
  result = a2;
  if ( a2 < this[1] && a2 <= *((_WORD *)this + 10) )
  {
    result = *this + 168 * a2;
    if ( *(_WORD *)(result + 164) != a2 )
    {
      v4 = *(unsigned __int16 *)(result + 164);
      v5 = *(_WORD *)(result + 166);
      if ( (_WORD)v4 == 0xFFFF )
      {
        *((_WORD *)this + 6) = v5;
      }
      else
      {
        *(_WORD *)(168 * v4 + *this + 166) = v5;
        v2 = a2;
      }
      if ( v5 == 0xFFFF )
        *((_WORD *)this + 7) = v4;
      else
        *(_WORD *)(168 * v5 + *this + 164) = v4;
      *(_WORD *)(result + 166) = v2;
      *(_WORD *)(result + 164) = v2;
      result = 0xFFFF;
      --*((_WORD *)this + 9);
    }
  }
  return result;
}
