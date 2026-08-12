double __thiscall sub_100784D0(int this, float a2)
{
  double v3; // st7
  double result; // st7
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v3 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 724))(*(_DWORD *)(this + 4));
  v8 = v3;
  if ( v3 <= 0.0 )
    return a2;
  v5 = *(float *)(this + 32) * *(float *)(this + 32)
     + *(float *)(this + 28) * *(float *)(this + 28)
     + *(float *)(this + 36) * *(float *)(this + 36);
  v7 = off_10689708(v5) / v8;
  v6 = *(float *)(this + 36) * *(float *)(this + 36)
     + *(float *)(this + 28) * *(float *)(this + 28)
     + *(float *)(this + 32) * *(float *)(this + 32);
  result = off_10689708(v6) * v7 - v7 * (v8 * 0.5 * v7);
  if ( a2 >= result )
    return a2;
  return result;
}
