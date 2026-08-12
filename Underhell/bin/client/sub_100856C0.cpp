float *__thiscall sub_100856C0(int this, int a2, float *a3, float *a4)
{
  unsigned __int16 v5; // ax
  int v6; // eax
  __int16 v7; // ax
  int v8; // eax
  int (__thiscall *v9)(int); // eax
  int v10; // eax
  int (__thiscall *v11)(int); // eax
  float *result; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  float v17; // [esp+Ch] [ebp-54h]
  float v18[3]; // [esp+18h] [ebp-48h] BYREF
  float v19; // [esp+24h] [ebp-3Ch] BYREF
  float v20; // [esp+28h] [ebp-38h]
  float v21; // [esp+2Ch] [ebp-34h]
  float v22[3]; // [esp+30h] [ebp-30h] BYREF
  float v23; // [esp+3Ch] [ebp-24h]
  float v24; // [esp+40h] [ebp-20h]
  float v25; // [esp+44h] [ebp-1Ch]
  float v26; // [esp+48h] [ebp-18h] BYREF
  float v27; // [esp+4Ch] [ebp-14h]
  float v28; // [esp+50h] [ebp-10h]
  float v29; // [esp+54h] [ebp-Ch] BYREF
  float v30; // [esp+58h] [ebp-8h]
  float v31; // [esp+5Ch] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v5 == 0xFFFF )
  {
    v6 = 0;
  }
  else
  {
    v7 = *(_WORD *)(168 * v5 + *(_DWORD *)(this + 36) + 8);
    if ( (v7 & 4) != 0 )
      v8 = *(_BYTE *)(this + 208) != 0;
    else
      v8 = (v7 & 0x10) != 0 ? 3 : 0;
    v6 = v8 + 1;
  }
  (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)a2 + 88))(a2, &v29, &v26, v6);
  v17 = (v26 - v29) * (v26 - v29) + (v27 - v30) * (v27 - v30) + (v28 - v31) * (v28 - v31);
  *a4 = off_103EDFE0(v17) * 0.5;
  v9 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 8);
  v23 = (v29 + v26) * 0.5;
  v24 = (v30 + v27) * 0.5;
  v25 = 0.5 * (v31 + v28);
  v10 = v9(a2);
  sub_101EE040(v10, v18, &v19, v22);
  v11 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 4);
  v19 = v19 * -1.0;
  v20 = v20 * -1.0;
  v21 = -1.0 * v21;
  result = (float *)v11(a2);
  *a3 = *result;
  a3[1] = result[1];
  v13 = result[2];
  a3[2] = result[2];
  v14 = v23;
  v15 = v24;
  v16 = v25;
  *a3 = v22[0] * v25 + v19 * v24 + v18[0] * v23 + *a3;
  a3[1] = v18[1] * v14 + a3[1] + v20 * v15 + v22[1] * v16;
  a3[2] = v13 + v14 * v18[2] + v15 * v21 + v16 * v22[2];
  return result;
}
