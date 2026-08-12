float *__thiscall sub_101F7080(int this)
{
  float *result; // eax
  long double v2; // st7
  float *v3; // [esp-4h] [ebp-1Ch]
  float v4[3]; // [esp+0h] [ebp-18h] BYREF
  float v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = *(float **)(this + 12);
  if ( result )
  {
    v3 = *(float **)(this + 12);
    v2 = cos(*(float *)(this + 28)) * *(float *)(this + 24);
    v4[0] = sin(*(float *)(this + 32)) * v2;
    v4[1] = sin(*(float *)(this + 28)) * *(float *)(this + 24);
    v4[2] = v2 * cos(*(float *)(this + 32));
    v5[0] = -*(float *)(this + 28);
    v5[1] = *(float *)(this + 32);
    v5[2] = 0.0;
    return sub_101F1750(v5, v4, v3);
  }
  return result;
}
