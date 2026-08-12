_DWORD *__thiscall sub_100A5960(_DWORD *this, char a2)
{
  int v4; // [esp-4h] [ebp-8h]

  v4 = this[336];
  *this = &CInstancedResponseSystem::`vftable';
  sub_10184660(v4);
  sub_100A52D0(this);
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
