int __thiscall sub_1007E410(int *this, int a2)
{
  int result; // eax
  int v4; // edx
  _WORD *v5; // ebx
  int v6; // esi
  _WORD *v7; // ecx
  int v8; // edx

  result = a2;
  if ( a2 >= 0 && a2 < this[1] && a2 <= (unsigned int)this[7] )
  {
    v4 = *this;
    if ( *(unsigned __int16 *)(*this + 8 * a2 + 4) != a2 )
    {
      v5 = (_WORD *)(v4 + 8 * a2 + 4);
      v6 = *(unsigned __int16 *)(v4 + 8 * a2 + 6);
      v7 = (_WORD *)(v4 + 8 * a2 + 6);
      if ( *v5 == 0xFFFF )
        this[3] = v6;
      else
        *(_WORD *)(v4 + 8 * (unsigned __int16)*v5 + 6) = v6;
      v8 = (unsigned __int16)*v5;
      if ( (_WORD)v6 == 0xFFFF )
      {
        --this[6];
        *v5 = a2;
        this[4] = v8;
      }
      else
      {
        *(_WORD *)(*this + 8 * (unsigned __int16)v6 + 4) = v8;
        --this[6];
        *v5 = a2;
      }
      *v7 = a2;
    }
  }
  return result;
}
