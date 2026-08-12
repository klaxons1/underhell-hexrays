char __thiscall sub_10035DA0(_DWORD *this, int a2, float *a3, float *a4)
{
  char *v4; // esi
  float *v5; // eax
  int (__thiscall *v6)(char *); // edx
  float *v7; // eax
  double v8; // st7
  char result; // al

  v4 = (char *)(this - 1);
  v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
  *a3 = *v5;
  a3[1] = v5[1];
  v6 = *(int (__thiscall **)(char *))(*(_DWORD *)v4 + 40);
  a3[2] = v5[2];
  v7 = (float *)v6(v4);
  *a4 = *v7;
  a4[1] = v7[1];
  v8 = v7[2];
  result = 1;
  a4[2] = v8;
  return result;
}
