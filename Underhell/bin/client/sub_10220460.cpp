_DWORD *__thiscall sub_10220460(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)sub_101F8C60(528);
  v4 = 0;
  if ( v3 )
  {
    *v3 = &C_OP_ControlpointLight::`vftable';
    v3[124] = 0;
    v3[125] = 0;
    v3[126] = 0;
    v3[127] = 0;
    v4 = v3;
  }
  v4[6] = this;
  sub_10233090(a2, v4 + 7);
  return v4;
}
