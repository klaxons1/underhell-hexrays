BOOL __thiscall sub_102B2860(float *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st4
  double v5; // st5
  float v7; // [esp+0h] [ebp-8h]

  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v3 = *v2 - this[905];
  v4 = v2[1] - this[906];
  v5 = v2[2] - this[907];
  v7 = v5 * v5 + v4 * v4 + v3 * v3;
  return off_10689708(v7) < 128.0;
}
