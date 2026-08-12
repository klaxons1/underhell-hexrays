void __stdcall sub_103149E0(float *a1, float a2, float a3, float *a4, float *a5)
{
  float *v6; // eax
  double v8; // st7
  int v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st5
  float *v13; // eax
  double v14; // st6
  double v15; // st5
  float v16; // [esp+10h] [ebp-18h]
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+1Ch] [ebp-Ch]
  float v22; // [esp+20h] [ebp-8h]
  float v23; // [esp+20h] [ebp-8h]
  float v24; // [esp+20h] [ebp-8h]
  float v25; // [esp+24h] [ebp-4h]
  float v26; // [esp+24h] [ebp-4h]
  float v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+30h] [ebp+8h]
  int v29; // [esp+3Ch] [ebp+14h]
  int v30; // [esp+3Ch] [ebp+14h]

  v6 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
  v16 = *v6 - *a4;
  v17 = v6[1] - a4[1];
  v18 = v6[2] - a4[2];
  *(float *)&v29 = off_10689714();
  v27 = a1[88];
  v8 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(LODWORD(a2), LODWORD(a3))
     + v27;
  *(float *)&v28 = v8;
  if ( *(float *)&v29 > v8 )
    *(float *)&v28 = v8 * *(float *)&v29 / sqrt(*(float *)&v29 * *(float *)&v29 - v8 * v8);
  v9 = sub_10219A30();
  v19 = (double)v9 * 0.000030518509 + (double)v9 * 0.000030518509 - 1.0;
  v10 = sub_10219A30();
  v22 = (double)v10 * 0.000030518509 + (double)v10 * 0.000030518509 - 1.0;
  v30 = sub_10219A30();
  v11 = (double)v30 * 0.000030518509 + (double)v30 * 0.000030518509 - 1.0;
  v12 = -(v11 * v18 + v19 * v16 + v22 * v17);
  v20 = v19 + v16 * v12;
  v23 = v22 + v17 * v12;
  v25 = v11 + v18 * v12;
  off_10689714();
  v21 = v20 * *(float *)&v28;
  v24 = v23 * *(float *)&v28;
  v26 = *(float *)&v28 * v25;
  v13 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
  v14 = v13[1] + v24;
  v15 = v13[2] + v26;
  *a5 = *v13 + v21 - *a4;
  a5[1] = v14 - a4[1];
  a5[2] = v15 - a4[2];
  off_10689714();
}
