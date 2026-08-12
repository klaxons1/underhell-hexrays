float *__thiscall sub_1039ED60(int *this, float *a2)
{
  int *v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  double v8; // st7
  float *result; // eax

  v2 = this + 80;
  v3 = (int *)(*(int (__thiscall **)(int *))(this[80] + 32))(this + 80);
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  *(_DWORD *)a2 = v4;
  *((_DWORD *)a2 + 1) = v5;
  v7 = *v2;
  *((_DWORD *)a2 + 2) = v6;
  v8 = *(float *)((*(int (__thiscall **)(int *))(v7 + 8))(v2) + 8) + a2[2];
  result = a2;
  a2[2] = v8;
  return result;
}
