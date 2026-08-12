void __thiscall sub_1007DBD0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // edx

  if ( a2 >= 0 && a2 < this[1] && (unsigned int)a2 <= this[7] )
  {
    v2 = *this + 36 * a2;
    if ( *(unsigned __int16 *)(v2 + 32) != a2 )
    {
      v3 = *(unsigned __int16 *)(v2 + 32);
      v4 = *(unsigned __int16 *)(v2 + 34);
      if ( (_WORD)v3 == 0xFFFF )
        this[3] = v4;
      else
        *(_WORD *)(*this + 36 * v3 + 34) = v4;
      if ( (_WORD)v4 == 0xFFFF )
      {
        v5 = *(unsigned __int16 *)(v2 + 32);
        --this[6];
        this[4] = v5;
      }
      else
      {
        *(_WORD *)(*this + 36 * (unsigned __int16)v4 + 32) = *(_WORD *)(v2 + 32);
        --this[6];
      }
      *(_WORD *)(v2 + 34) = a2;
      *(_WORD *)(v2 + 32) = a2;
    }
  }
}
