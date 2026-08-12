bool __thiscall sub_100C7790(float *this, float *a2)
{
  float *v3; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-24h] BYREF
  float v6[3]; // [esp+10h] [ebp-18h] BYREF
  float v7; // [esp+1Ch] [ebp-Ch]
  float v8; // [esp+20h] [ebp-8h]
  float v9; // [esp+24h] [ebp-4h]

  v3 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504))(this, v5);
  v7 = *a2 - *v3;
  v8 = a2[1] - v3[1];
  v9 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 920))(this, v6);
  return v7 * v6[0] + v6[1] * v8 + v6[2] * v9 > this[421];
}
