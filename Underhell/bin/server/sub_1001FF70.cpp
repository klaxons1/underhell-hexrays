bool __thiscall sub_1001FF70(float *this, float *a2)
{
  double v3; // st7
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]
  float v9; // [esp+24h] [ebp+8h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *a2 - this[145];
  v7 = a2[1] - this[146];
  v8 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 904))(this, v5);
  v9 = v6 * v5[0] + v5[1] * v7 + v5[2] * v8;
  v3 = v9;
  if ( ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x20000000) != 0 )
    return v3 > 0.8660254037839999;
  else
    return v3 > 0.994;
}
