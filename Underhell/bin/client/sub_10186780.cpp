int __thiscall sub_10186780(void *this, float a2)
{
  void (__thiscall *v3)(void *, float *, float *); // eax
  float *v4; // eax
  double v5; // st7
  void (__thiscall *v6)(void *, float *, float *); // eax
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  float v11; // [esp+0h] [ebp-1Ch] BYREF
  float v12; // [esp+4h] [ebp-18h] BYREF
  float v13; // [esp+8h] [ebp-14h]
  float v14[2]; // [esp+Ch] [ebp-10h] BYREF
  float v15; // [esp+14h] [ebp-8h] BYREF
  float v16; // [esp+18h] [ebp-4h]

  v11 = a2;
  v3 = *(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 116);
  v12 = 0.0;
  v13 = 0.0;
  v3(this, &v15, &v11);
  v4 = sub_101859B0((int)this, &v12, &v15);
  v15 = *v4;
  v5 = v4[1];
  v6 = *(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 116);
  v16 = v5;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v6(this, v14, &v11);
  v7 = sub_101859B0((int)this, &v12, v14);
  v8 = *v7;
  v14[0] = *v7;
  v9 = v16 - v7[1];
  return (int)sqrt((double)((int)v9 * (int)v9 + (int)(v15 - v8) * (int)(v15 - v8)));
}
