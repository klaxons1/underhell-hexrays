float *__thiscall sub_100EB560(int this, float *a2, float *a3)
{
  float *v4; // eax
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  float *result; // eax

  v4 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 36))(*(_DWORD *)(this + 136));
  v5 = *(float *)(this + 80) - v4[1];
  v6 = *(float *)(this + 76) - *v4;
  v7 = *(float *)(this + 84) - v4[2];
  *a2 = v6;
  a2[1] = v5;
  a2[2] = v7;
  *a2 = v6 - *(float *)(this + 124);
  a2[1] = v5 - *(float *)(this + 124);
  a2[2] = v7 - *(float *)(this + 124);
  v8 = *(float *)(this + 88) - *v4;
  v9 = *(float *)(this + 92) - v4[1];
  v10 = *(float *)(this + 96) - v4[2];
  result = a3;
  *a3 = v8;
  a3[1] = v9;
  a3[2] = v10;
  *a3 = v8 + *(float *)(this + 124);
  a3[1] = v9 + *(float *)(this + 124);
  a3[2] = v10 + *(float *)(this + 124);
  return result;
}
