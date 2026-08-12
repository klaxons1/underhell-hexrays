void __thiscall sub_1003A300(int *this, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  int v3; // eax
  int v4; // edi
  unsigned __int16 *v5; // esi
  unsigned __int16 v6; // dx

  v2 = a2;
  if ( a2 < this[1] && a2 <= *((_WORD *)this + 10) )
  {
    v3 = *this;
    if ( *(_WORD *)(*this + 8 * a2 + 4) != a2 )
    {
      v4 = *(unsigned __int16 *)(v3 + 8 * a2 + 4);
      v5 = (unsigned __int16 *)(v3 + 8 * a2 + 6);
      v6 = *v5;
      if ( (_WORD)v4 == 0xFFFF )
      {
        *((_WORD *)this + 6) = v6;
      }
      else
      {
        *(_WORD *)(v3 + 8 * v4 + 6) = v6;
        v2 = a2;
      }
      if ( v6 == 0xFFFF )
        *((_WORD *)this + 7) = v4;
      else
        *(_WORD *)(*this + 8 * v6 + 4) = v4;
      --*((_WORD *)this + 9);
      *v5 = v2;
      *(_WORD *)(v3 + 8 * a2 + 4) = v2;
    }
  }
}
