int __thiscall sub_10191950(int this, int *a2)
{
  float *v3; // eax
  int *v4; // edi
  float *v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // ecx
  int result; // eax

  v3 = *(float **)(this + 740);
  *(float *)(this + 4) = *v3;
  v4 = a2;
  *(float *)(this + 8) = v3[1];
  *(float *)(this + 12) = v3[2];
  v5 = *(float **)(this + 748);
  *(float *)(this + 16) = *v5;
  *(float *)(this + 20) = v5[1];
  *(float *)(this + 24) = v5[2];
  v6 = *(_DWORD *)(this + 744);
  v7 = *(float *)(this + 4);
  v8 = *(_DWORD *)(this + 752);
  *(float *)(this + 28) = (v7 + *(float *)(this + 16)) * 0.5;
  *(float *)(this + 32) = (*(float *)(this + 20) + *(float *)(this + 8)) * 0.5;
  *(float *)(this + 36) = 0.5 * (*(float *)(this + 24) + *(float *)(this + 12));
  *(float *)(this + 52) = *(float *)(v6 + 8);
  *(float *)(this + 56) = *(float *)(v8 + 8);
  sub_1018ABC0(v6, v4, this);
  sub_10190D50((char *)this, (int)v4);
  result = sub_10194AB0(&a2);
  if ( v4 )
  {
    sub_10190B20(v4);
    return sub_10184660((int)v4);
  }
  return result;
}
