float *__thiscall sub_100550F0(float *this, float *a2, int a3, int a4, int a5)
{
  float *v5; // eax
  double v6; // st7
  float *result; // eax
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]

  v8 = (double)a3 * this[438] * 2.0 + this[438];
  v9 = (double)a4 * this[438] * 2.0 + this[438];
  v10 = 2.0 * ((double)a5 * this[438]) + this[438];
  v5 = (float *)(*(int (**)(void))(*(_DWORD *)this + 260))();
  *a2 = *v5 + v8;
  a2[1] = v5[1] + v9;
  v6 = v5[2];
  result = a2;
  a2[2] = v6 + v10;
  return result;
}
