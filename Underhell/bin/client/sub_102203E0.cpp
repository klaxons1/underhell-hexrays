_DWORD *__thiscall sub_102203E0(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)sub_101F8C60(72);
  v4 = 0;
  if ( v3 )
  {
    *v3 = &C_OP_ColorInterpolate::`vftable';
    v3[11] = 0;
    v4 = v3;
  }
  v4[6] = this;
  sub_10233090(a2, v4 + 7);
  return v4;
}
