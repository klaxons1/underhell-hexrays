bool __thiscall sub_10372250(void *this, _DWORD *a2)
{
  float *v3; // eax
  float *v5; // ebx
  float *v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-54h] BYREF
  _BYTE v8[12]; // [esp+14h] [ebp-48h] BYREF
  float v9[3]; // [esp+20h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v11[3]; // [esp+38h] [ebp-24h] BYREF
  float v12[3]; // [esp+44h] [ebp-18h] BYREF
  float v13; // [esp+50h] [ebp-Ch]
  float v14; // [esp+54h] [ebp-8h]
  float v15; // [esp+58h] [ebp-4h]

  sub_100BD6D0(this, dword_10674308, (int)v12, v9, 0, 0);
  sub_100F5A30(a2, (int)v11, 0, 0);
  v3 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504))(a2, v8);
  if ( (v12[2] - v3[2]) * v11[2] + (v12[1] - v3[1]) * v11[1] + (v12[0] - *v3) * v11[0] < 0.98 )
    return 0;
  v5 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v8);
  v6 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504))(a2, v7);
  v13 = *v6 - *v5;
  v14 = v6[1] - v5[1];
  v15 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 920))(this, v10);
  return v10[1] * v14 + v13 * v10[0] + v10[2] * v15 > 0.3;
}
