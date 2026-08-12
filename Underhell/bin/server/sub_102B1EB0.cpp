float *__thiscall sub_102B1EB0(void *this, float *a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  float *result; // eax
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]

  v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 1100))(this);
  v8 = v4[1];
  v7 = *v4;
  v9 = v4[2];
  v5 = *(float *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 1140))(this) + 8 * a3);
  result = a2;
  *a2 = v7 * v5;
  a2[1] = v8 * v5;
  a2[2] = v5 * v9;
  return result;
}
