unsigned int *__thiscall sub_101C5F60(void *this, int a2, int a3)
{
  unsigned int *v4; // eax
  unsigned int *result; // eax

  sub_10079DC0(flt_106BA850, a3);
  flt_106BA888 = *(float *)(a3 + 56);
  dword_106BA88C = *(_DWORD *)(a3 + 60);
  dword_106BA890 = *(_DWORD *)(a3 + 64);
  dword_106BA894 = *(_DWORD *)(a3 + 68);
  word_106BA898 = *(_WORD *)(a3 + 72);
  dword_106BA89C = *(_DWORD *)(a3 + 76);
  dword_106BA8A0 = *(_DWORD *)(a3 + 80);
  dword_106BA89C = a2;
  v4 = sub_101C4FA0((int)this, a2);
  if ( v4 )
    v4[1] = -1;
  dword_106BA89C = (int)this;
  result = sub_101C4FA0(a2, (int)this);
  if ( result )
    result[1] = -1;
  return result;
}
