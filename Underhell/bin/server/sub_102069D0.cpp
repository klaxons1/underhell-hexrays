volatile signed __int32 *__stdcall sub_102069D0(int a1, int a2)
{
  BOOL v2; // edi
  int v3; // esi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float v8; // ecx
  float v9; // edx
  float *v10; // edi
  float v11; // eax
  double v12; // st4
  double v13; // st2
  double v14; // st3
  double v15; // st7
  int v16; // ecx
  int v18[3]; // [esp+Ch] [ebp-54h] BYREF
  int v19[3]; // [esp+18h] [ebp-48h] BYREF
  _BYTE v20[12]; // [esp+24h] [ebp-3Ch] BYREF
  float v21[3]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v22[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v23; // [esp+48h] [ebp-18h] BYREF
  float v24; // [esp+4Ch] [ebp-14h]
  float v25; // [esp+50h] [ebp-10h]
  float v26; // [esp+54h] [ebp-Ch] BYREF
  float v27; // [esp+58h] [ebp-8h]
  float v28; // [esp+5Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a2 + 28) + 4))(*(_DWORD *)(a2 + 28), v20);
  v2 = a1 == 0;
  v3 = *(_DWORD *)(a2 + 4 * v2);
  (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v3 + 224))(v3, &v23, v20);
  v4 = (float *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 176))(v3, v22);
  v5 = v23 - *v4;
  v23 = v5;
  v6 = v24 - v4[1];
  v24 = v6;
  v7 = v25 - v4[2];
  v8 = *(float *)(a2 + 12 * v2 + 80);
  v9 = *(float *)(a2 + 12 * v2 + 84);
  v25 = v7;
  v10 = (float *)(a2 + 12 * v2);
  v11 = v10[22];
  *(float *)v22 = v8;
  *(float *)&v22[1] = v9;
  v12 = v8 * 0.017453292;
  *(float *)&v22[2] = v11;
  v13 = v9 * 0.017453292;
  v14 = 0.017453292 * v11;
  v21[0] = v13 * v7 - v14 * v6;
  v21[1] = v14 * v5 - v7 * v12;
  v21[2] = v6 * v12 - v5 * v13;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v3 + 228))(v3, &v26, v21);
  v26 = v10[8] + v26;
  v27 = v10[9] + v27;
  v28 = v10[10] + v28;
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 116))(v3);
  v16 = *(_DWORD *)(a2 + 4 * a1);
  v26 = v26 * v15;
  v27 = v27 * v15;
  v28 = v15 * v28;
  (*(void (__thiscall **)(int, float *, _BYTE *, int *, int *))(*(_DWORD *)v16 + 248))(v16, &v26, v20, v18, v19);
  return sub_101BA7D0(*(_DWORD *)(a2 + 4 * a1), v18, v19);
}
