int __thiscall sub_101BDD20(float *this, int a2, float *a3, int a4)
{
  double v5; // st7
  double (__thiscall *v6)(int); // edx
  double v7; // st7
  void (__thiscall *v8)(int, float *, int, float *, float *); // eax
  float v10[3]; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]

  v5 = this[7];
  v11 = *a3 * v5;
  v12 = a3[1] * v5;
  v6 = *(double (__thiscall **)(int))(*(_DWORD *)a4 + 116);
  v13 = v5 * a3[2];
  v7 = v6(a4);
  v8 = *(void (__thiscall **)(int, float *, int, float *, float *))(*(_DWORD *)a4 + 252);
  v10[0] = v11 * v7;
  v10[1] = v12 * v7;
  v10[2] = v7 * v13;
  v8(a4, v10, a2, this + 1, this + 4);
  return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)a4 + 232))(a4, this + 1, this + 1);
}
