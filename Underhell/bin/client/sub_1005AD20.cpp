void __thiscall sub_1005AD20(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  __int16 v6; // bx
  _WORD *v7; // eax
  int v8; // ecx

  if ( a3 < *((_WORD *)this + 24) )
  {
    v3 = *this + 28 * a3;
    if ( *(_WORD *)(v3 + 24) != a3 )
    {
      v4 = *(unsigned __int16 *)(v3 + 24);
      if ( (_WORD)v4 == 0xFFFF )
        *(_WORD *)(this[3] + 10 * a2) = *(_WORD *)(v3 + 26);
      else
        *(_WORD *)(*this + 28 * v4 + 26) = *(_WORD *)(v3 + 26);
      v5 = *(unsigned __int16 *)(v3 + 26);
      v6 = *(_WORD *)(v3 + 24);
      if ( (_WORD)v5 == 0xFFFF )
        *(_WORD *)(this[3] + 10 * a2 + 2) = v6;
      else
        *(_WORD *)(*this + 28 * v5 + 24) = v6;
      *(_WORD *)(v3 + 26) = a3;
      *(_WORD *)(v3 + 24) = a3;
      v7 = (_WORD *)(this[3] + 10 * a2 + 4);
      --*v7;
      v8 = this[10];
      if ( v8 )
        *(_WORD *)(v8 + 2 * a3) = -1;
    }
  }
}
