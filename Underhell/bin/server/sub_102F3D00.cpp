bool __thiscall sub_102F3D00(void *this, _DWORD *a2)
{
  float *v3; // eax
  float *v5; // eax
  float *v7; // eax
  _BYTE v8[12]; // [esp+8h] [ebp-48h] BYREF
  float v9[3]; // [esp+14h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+20h] [ebp-30h] BYREF
  float v11; // [esp+2Ch] [ebp-24h]
  float v12; // [esp+30h] [ebp-20h]
  float v13; // [esp+34h] [ebp-1Ch]
  float v14; // [esp+38h] [ebp-18h]
  float v15; // [esp+3Ch] [ebp-14h]
  float v16; // [esp+40h] [ebp-10h]
  float v17; // [esp+44h] [ebp-Ch]
  float v18; // [esp+48h] [ebp-8h]
  float v19; // [esp+4Ch] [ebp-4h]
  float v20; // [esp+58h] [ebp+8h]

  v3 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v8);
  v17 = *v3;
  v18 = v3[1];
  v19 = v3[2];
  sub_100F5A30(a2, (int)v10, 0, 0);
  v5 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504))(a2, v8);
  v14 = v17 - *v5;
  v15 = v18 - v5[1];
  v16 = v19 - v5[2];
  v20 = off_10689714();
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) && v20 > 96.0
    || v10[1] * v15 + v14 * v10[0] + v10[2] * v16 < 0.98 )
  {
    return 0;
  }
  v7 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504))(a2, v8);
  v11 = *v7 - v17;
  v12 = v7[1] - v18;
  v13 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 920))(this, v9);
  return v9[1] * v12 + v11 * v9[0] + v9[2] * v13 > 0.3;
}
