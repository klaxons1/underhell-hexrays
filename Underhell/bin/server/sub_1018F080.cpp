int __thiscall sub_1018F080(int this, float *a2, float *a3)
{
  int *v4; // eax
  int i; // edi
  int v6; // ebx
  int *v7; // eax
  int j; // edi
  int v9; // ebx
  int result; // eax

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
  v4 = (int *)(this + 524);
  for ( i = 3; i >= 0; --i )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[7] = -1;
    v6 = *v4;
    v4[3] = -1;
    v4[4] = -1;
    v4[5] = -1;
    v4[6] = 0;
    v4[8] = v6;
    v4 += 9;
  }
  v7 = (int *)(this + 668);
  for ( j = 1; j >= 0; --j )
  {
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[7] = -1;
    v9 = *v7;
    v7[3] = -1;
    v7[4] = -1;
    v7[5] = -1;
    v7[6] = 0;
    v7[8] = v9;
    v7 += 9;
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
  if ( *a3 <= (double)*a2 )
  {
    *(float *)(this + 16) = *a2;
    *(float *)(this + 4) = *a3;
  }
  else
  {
    *(float *)(this + 4) = *a2;
    *(float *)(this + 16) = *a3;
  }
  if ( a3[1] <= (double)a2[1] )
  {
    *(float *)(this + 20) = a2[1];
    *(float *)(this + 8) = a3[1];
  }
  else
  {
    *(float *)(this + 8) = a2[1];
    *(float *)(this + 20) = a3[1];
  }
  *(float *)(this + 12) = a2[2];
  result = this;
  *(float *)(this + 24) = a2[2];
  *(float *)(this + 28) = (*(float *)(this + 4) + *(float *)(this + 16)) * 0.5;
  *(float *)(this + 32) = (*(float *)(this + 20) + *(float *)(this + 8)) * 0.5;
  *(float *)(this + 36) = 0.5 * (*(float *)(this + 24) + *(float *)(this + 12));
  *(float *)(this + 52) = a2[2];
  *(float *)(this + 56) = a3[2];
  return result;
}
