_DWORD *__thiscall sub_10212AD0(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = (_DWORD *)sub_101F8C60(96);
  v4 = 0;
  if ( v3 )
  {
    *v3 = &C_INIT_RandomColor::`vftable';
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v4 = v3;
  }
  v4[6] = this;
  sub_10233090(a2, v4 + 7);
  return v4;
}
