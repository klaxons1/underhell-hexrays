_DWORD *__thiscall sub_10212890(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)sub_101F8C60(76);
  if ( v3 )
  {
    *v3 = &C_INIT_PositionOffset::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  v4[6] = this;
  sub_10233090(a2, v4 + 7);
  return v4;
}
