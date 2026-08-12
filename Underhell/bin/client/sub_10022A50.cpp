int __thiscall sub_10022A50(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // eax
  int v8; // edx
  int result; // eax
  int v10; // edi
  int v11; // edi
  int v12; // esi
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st4
  double v18; // st7
  int v19; // esi
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int v25; // esi
  _BYTE v26[48]; // [esp+14h] [ebp-8Ch] BYREF
  _BYTE v27[48]; // [esp+44h] [ebp-5Ch] BYREF
  int v28[4]; // [esp+74h] [ebp-2Ch] BYREF
  float v29[3]; // [esp+84h] [ebp-1Ch] BYREF
  float v30[3]; // [esp+90h] [ebp-10h] BYREF
  int *v31; // [esp+9Ch] [ebp-4h]
  int v32; // [esp+BCh] [ebp+1Ch]
  int v33; // [esp+BCh] [ebp+1Ch]

  v7 = (int *)this[1022];
  v8 = *v7;
  result = v7[11];
  v10 = *(_DWORD *)(v8 + 288) + 16 * *(_DWORD *)a2;
  v31 = this;
  v11 = v8 + v10;
  v12 = *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 56);
  if ( (*(_DWORD *)(result + 4 * v12) & this[1047]) != 0 )
  {
    sub_10020130(this[1022], (int)(this + 1033), a4, a5, v12, a6, a7);
    v32 = a6 + 48 * v12;
    sub_101EDA00(v32, 3, v29);
    v13 = (float *)(132 * a3 + v31[1028]);
    v14 = *(float *)(a2 + 4);
    v15 = v13[8] * v14;
    v16 = v13[9] * v14;
    v17 = 1.0 - v14;
    v18 = v14 * v13[10] + (1.0 - v14) * v29[2];
    v30[0] = v15 + v29[0] * v17;
    v30[1] = v16 + v29[1] * v17;
    v30[2] = v18;
    if ( v13[28] * v13[28] + v13[27] * v13[27] + v13[29] * v13[29] <= 0.0 )
      sub_100222B0(v11, v30, a6);
    else
      sub_1001FDD0(
        *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11),
        *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 28),
        *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 56),
        v30,
        (float *)(v31[1028] + 132 * a3 + 120),
        (float *)(v31[1028] + 132 * a3 + 108),
        a6);
    sub_101EDA00(v32, 3, v30);
    sub_101F0F40(132 * a3 + v31[1028] + 44, v30, v32);
    v19 = 16 * v12;
    v20 = *(_DWORD *)(a5 + v19);
    v28[1] = *(_DWORD *)(a5 + v19 + 4);
    v21 = *(_DWORD *)(v19 + a5 + 12);
    v28[0] = v20;
    v22 = *(_DWORD *)(v19 + a5 + 8);
    v28[3] = v21;
    v28[2] = v22;
    v33 = v19 + a5;
    v23 = *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 56);
    sub_101F0AB0(a6 + 48 * *(_DWORD *)(*(_DWORD *)(v31[1022] + 64) + 4 * v23), v27);
    sub_101EDC00(v27, a6 + 48 * v23, v26);
    sub_101F0930(v26, a5 + 16 * v23, a4 + 12 * v23);
    sub_101F0F00(v33, (int)v28, *(float *)(a2 + 8), v33);
    v24 = *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 28);
    sub_101F0AB0(a6 + 48 * *(_DWORD *)(*(_DWORD *)(v31[1022] + 64) + 4 * v24), v26);
    sub_101EDC00(v26, a6 + 48 * v24, v27);
    sub_101F0930(v27, a5 + 16 * v24, a4 + 12 * v24);
    v25 = *(_DWORD *)(v11 + *(_DWORD *)(v11 + 12));
    sub_101F0AB0(a6 + 48 * *(_DWORD *)(*(_DWORD *)(v31[1022] + 64) + 4 * v25), v26);
    sub_101EDC00(v26, a6 + 48 * v25, v27);
    return sub_101F0930(v27, a5 + 16 * v25, a4 + 12 * v25);
  }
  return result;
}
