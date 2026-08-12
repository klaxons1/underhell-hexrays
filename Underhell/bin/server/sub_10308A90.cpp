float *__thiscall sub_10308A90(float *this, float *a2, _DWORD *a3, int a4, float *a5, float *a6)
{
  int (__thiscall *v6)(_DWORD *); // edx
  float *v7; // edi
  float *v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  float *v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st4
  int (__thiscall *v24)(_DWORD *); // eax
  double v25; // st3
  float *v26; // eax
  double v27; // st7
  float *result; // eax
  float v29; // [esp+14h] [ebp-38h]
  float v30[3]; // [esp+24h] [ebp-28h] BYREF
  float v31; // [esp+30h] [ebp-1Ch] BYREF
  float v32; // [esp+34h] [ebp-18h]
  float v33; // [esp+38h] [ebp-14h]
  float v34; // [esp+3Ch] [ebp-10h]
  float v35; // [esp+40h] [ebp-Ch]
  float v36; // [esp+44h] [ebp-8h]
  float *v37; // [esp+48h] [ebp-4h]

  v6 = *(int (__thiscall **)(_DWORD *))(*a3 + 576);
  v37 = this;
  v7 = (float *)v6(a3);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 576))(a4);
  v34 = *v8 - *v7;
  v35 = v8[1] - v7[1];
  v36 = v8[2] - v7[2];
  off_10689714();
  v9 = a3[63];
  v10 = a3[106];
  v36 = 0.0;
  v31 = -v34;
  v32 = -v35;
  v33 = 0.0;
  if ( (v9 & 0x800) != 0 )
    sub_100DAE60((int)a3);
  if ( (a3[63] & 0x800) != 0 )
    sub_100DAE60((int)a3);
  v11 = *(_DWORD *)dword_106BAFF0;
  v12 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *, float *))(*(_DWORD *)v10 + 292))(v10, a3 + 145, a3 + 176, &v31);
  (*(void (__thiscall **)(int, float *, int))(v11 + 88))(dword_106BAFF0, v30, v12);
  v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 576))(a3);
  v14 = v30[1] - v13[1];
  v15 = v14 * v14;
  v16 = v30[0] - *v13;
  v17 = v15;
  v18 = v30[2] - v13[2];
  v29 = v16 * v16 + v17 + v18 * v18;
  v19 = off_10689708(v29);
  v20 = v19 + v37[88] + 32.0;
  v21 = v36;
  v22 = v35;
  v23 = v34;
  if ( a5 )
  {
    *a5 = v34;
    a5[1] = v22;
    a5[2] = v21;
  }
  if ( a6 )
    *a6 = v20;
  v24 = *(int (__thiscall **)(_DWORD *))(*a3 + 576);
  v25 = -v20;
  v31 = v23 * v25;
  v32 = v22 * v25;
  v33 = v25 * v21;
  v26 = (float *)v24(a3);
  *a2 = *v26 + v31;
  a2[1] = v26[1] + v32;
  v27 = v26[2];
  result = a2;
  a2[2] = v27 + v33;
  return result;
}
