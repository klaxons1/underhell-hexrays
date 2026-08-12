int __thiscall sub_1018EF80(int this)
{
  int *v2; // eax
  int i; // edi
  int v4; // ebx
  int *v5; // eax
  int j; // edi
  int v7; // ebx

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
  v2 = (int *)(this + 524);
  for ( i = 3; i >= 0; --i )
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[7] = -1;
    v4 = *v2;
    v2[3] = -1;
    v2[4] = -1;
    v2[5] = -1;
    v2[6] = 0;
    v2[8] = v4;
    v2 += 9;
  }
  v5 = (int *)(this + 668);
  for ( j = 1; j >= 0; --j )
  {
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[7] = -1;
    v7 = *v5;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = -1;
    v5[6] = 0;
    v5[8] = v7;
    v5 += 9;
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
  return this;
}
