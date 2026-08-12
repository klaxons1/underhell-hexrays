int *__thiscall sub_100F8980(void *this, int a2, int a3)
{
  int *v4; // eax
  int *result; // eax

  sub_1000F8E0(flt_10436070, a3);
  flt_104360A8 = *(float *)(a3 + 56);
  dword_104360AC = *(_DWORD *)(a3 + 60);
  dword_104360B0 = *(_DWORD *)(a3 + 64);
  dword_104360B4 = *(_DWORD *)(a3 + 68);
  word_104360B8 = *(_WORD *)(a3 + 72);
  dword_104360BC = *(_DWORD *)(a3 + 76);
  dword_104360C0 = *(_DWORD *)(a3 + 80);
  dword_104360BC = a2;
  v4 = sub_100F7FA0((int)this, a2);
  if ( v4 )
    v4[1] = -1;
  dword_104360BC = (int)this;
  result = sub_100F7FA0(a2, (int)this);
  if ( result )
    result[1] = -1;
  return result;
}
