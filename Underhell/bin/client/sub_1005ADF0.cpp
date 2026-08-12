void __thiscall sub_1005ADF0(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // eax
  int v4; // esi
  __int16 v5; // bx
  int v6; // esi
  __int16 v7; // bx
  _WORD *v8; // eax
  int v9; // ecx

  if ( a3 < *((_WORD *)this + 24) )
  {
    v3 = *this + 40 * a3;
    if ( *(_WORD *)(v3 + 36) != a3 )
    {
      v4 = *(unsigned __int16 *)(v3 + 36);
      v5 = *(_WORD *)(v3 + 38);
      if ( (_WORD)v4 == 0xFFFF )
        *(_WORD *)(this[3] + 10 * a2) = v5;
      else
        *(_WORD *)(*this + 40 * v4 + 38) = v5;
      v6 = *(unsigned __int16 *)(v3 + 38);
      v7 = *(_WORD *)(v3 + 36);
      if ( (_WORD)v6 == 0xFFFF )
        *(_WORD *)(this[3] + 10 * a2 + 2) = v7;
      else
        *(_WORD *)(*this + 40 * v6 + 36) = v7;
      *(_WORD *)(v3 + 38) = a3;
      *(_WORD *)(v3 + 36) = a3;
      v8 = (_WORD *)(this[3] + 10 * a2 + 4);
      --*v8;
      v9 = this[10];
      if ( v9 )
        *(_WORD *)(v9 + 2 * a3) = -1;
    }
  }
}
