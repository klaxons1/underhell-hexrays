bool __thiscall sub_100C7B70(float *this, float *a2)
{
  float v4[3]; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *a2 - this[145];
  v6 = a2[1] - this[146];
  v7 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 904))(this, v4);
  return v5 * v4[0] + v4[1] * v6 + v4[2] * v7 > 0.994;
}
