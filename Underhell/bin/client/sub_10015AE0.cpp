_DWORD *__thiscall sub_10015AE0(_DWORD *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  unsigned int v5; // eax

  if ( (dword_10402BBC & 1) == 0 )
    dword_10402BBC |= 1u;
  v2 = this[305];
  if ( !v2
    || v2 == 3
    || ((v3 = this[302], this[v3 + 306] == -1)
     || *((_DWORD *)off_103DCD74 + 4 * (this[v3 + 306] & 0xFFF) + 2) != this[v3 + 306] >> 12
      ? (v4 = 0)
      : (v4 = *((_DWORD *)off_103DCD74 + 4 * (this[v3 + 306] & 0xFFF) + 1)),
        !(unsigned __int8)sub_10136EE0(v4, this[v3 + 316], 0, &unk_10402BB0)) )
  {
    v5 = this[81];
    if ( v5 == -1
      || *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 2) != v5 >> 12
      || !*((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 1) )
    {
      return this + 336;
    }
    sub_10037F50(this);
    sub_101ED860(this + 336, this + 165, &unk_10402BB0);
  }
  return &unk_10402BB0;
}
