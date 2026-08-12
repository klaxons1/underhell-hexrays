_DWORD *__thiscall sub_1007B7D0(_DWORD *this, char a2)
{
  _DWORD *v3; // esi

  v3 = (_DWORD *)this[3];
  *this = &CAI_MoveProbe::`vftable';
  if ( v3 )
  {
    *v3 = &CTraceListData::`vftable';
    v3[1] = 0;
    v3[5] = 0;
    v3[7] = 0;
    v3[11] = 0;
    sub_102375F0(v3 + 8);
    sub_102375F0(v3 + 2);
    sub_10184660(v3);
  }
  *this = &CAI_Component::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
