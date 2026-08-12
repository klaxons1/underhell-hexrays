int __thiscall sub_1018F380(int this, float *a2, int a3, float *a4, int a5)
{
  int *v6; // eax
  int i; // edi
  int v8; // ebx
  int *v9; // eax
  int j; // edi
  int v11; // ebx
  double v12; // st7

  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 112) = -1;
  *(_DWORD *)(this + 116) = *(_DWORD *)(this + 84);
  *(_DWORD *)(this + 96) = -1;
  *(_DWORD *)(this + 100) = -1;
  *(_DWORD *)(this + 104) = -1;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 148) = -1;
  *(_DWORD *)(this + 152) = *(_DWORD *)(this + 120);
  *(_DWORD *)(this + 132) = -1;
  *(_DWORD *)(this + 136) = -1;
  *(_DWORD *)(this + 140) = -1;
  *(_DWORD *)(this + 144) = 0;
  v6 = (int *)(this + 524);
  for ( i = 3; i >= 0; --i )
  {
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[7] = -1;
    v8 = *v6;
    v6[3] = -1;
    v6[4] = -1;
    v6[5] = -1;
    v6[6] = 0;
    v6[8] = v8;
    v6 += 9;
  }
  v9 = (int *)(this + 668);
  for ( j = 1; j >= 0; --j )
  {
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[7] = -1;
    v11 = *v9;
    v9[3] = -1;
    v9[4] = -1;
    v9[5] = -1;
    v9[6] = 0;
    v9[8] = v11;
    v9 += 9;
  }
  *(_DWORD *)(this + 756) = 0;
  *(_DWORD *)(this + 760) = 0;
  *(_DWORD *)(this + 764) = 0;
  *(_DWORD *)(this + 784) = -1;
  *(_DWORD *)(this + 768) = -1;
  *(_DWORD *)(this + 772) = -1;
  *(_DWORD *)(this + 776) = -1;
  *(_DWORD *)(this + 788) = *(_DWORD *)(this + 756);
  *(_DWORD *)(this + 780) = 0;
  sub_1018EE30((char *)this);
  *(float *)(this + 4) = *a2;
  *(float *)(this + 8) = a2[1];
  *(float *)(this + 12) = a2[2];
  *(float *)(this + 16) = *a4;
  *(float *)(this + 20) = a4[1];
  *(float *)(this + 24) = a4[2];
  *(float *)(this + 28) = (*(float *)(this + 16) + *(float *)(this + 4)) * 0.5;
  *(float *)(this + 32) = (*(float *)(this + 20) + *(float *)(this + 8)) * 0.5;
  *(float *)(this + 36) = 0.5 * (*(float *)(this + 24) + *(float *)(this + 12));
  *(float *)(this + 52) = *(float *)(a3 + 8);
  v12 = *(float *)(a5 + 8);
  *(_DWORD *)(this + 748) = a4;
  *(float *)(this + 56) = v12;
  *(_DWORD *)(this + 740) = a2;
  *(_DWORD *)(this + 744) = a3;
  *(_DWORD *)(this + 752) = a5;
  sub_1018ABC0((int)a2, (_DWORD *)this, this);
  return this;
}
