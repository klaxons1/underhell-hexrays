void __userpurge sub_1038CF90(int a1@<ecx>, int a2@<ebx>, float a3)
{
  int v4; // ebx
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // rt1
  double v9; // st5
  double v10; // st5
  float *v11; // edi
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st3
  double v16; // st6
  double v17; // st3
  double v18; // st7
  double v19; // st4
  double v20; // st4
  double v21; // st2
  double v22; // st3
  double v23; // st1
  double v24; // st4
  double v25; // st0
  double v26; // st5
  double v27; // rt2
  double v28; // st6
  double v29; // st7
  float v30; // [esp+Ch] [ebp-6Ch]
  _BYTE v32[12]; // [esp+24h] [ebp-54h] BYREF
  float v33[3]; // [esp+30h] [ebp-48h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  float v35; // [esp+48h] [ebp-30h]
  float v36; // [esp+4Ch] [ebp-2Ch]
  float v37; // [esp+50h] [ebp-28h]
  float v38; // [esp+54h] [ebp-24h] BYREF
  float v39; // [esp+58h] [ebp-20h]
  float v40; // [esp+5Ch] [ebp-1Ch]
  float v41; // [esp+60h] [ebp-18h] BYREF
  float v42; // [esp+64h] [ebp-14h]
  float v43; // [esp+68h] [ebp-10h]
  int v44; // [esp+6Ch] [ebp-Ch] BYREF
  float v45; // [esp+70h] [ebp-8h]
  float v46; // [esp+74h] [ebp-4h]
  float v47; // [esp+80h] [ebp+8h]

  if ( *(_DWORD *)(a1 + 4268) )
  {
    v47 = *(float *)(dword_106E9D74 + 44) * a3;
    v4 = sub_10389120(a1, v47);
    *(_DWORD *)(a1 + 4236) = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               3,
                               4,
                               a2);
    *(_DWORD *)(a1 + 4268) = 2;
    *(_DWORD *)(a1 + 4272) = 2;
    v30 = v47 * 0.80000001;
    sub_1038C750((_DWORD *)a1, v30, 500.0, 0.0, (float *)&v44, (float *)v34);
    v5 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, v33);
    v38 = *v5 - *(float *)&v44;
    v39 = v5[1] - v45;
    v40 = v5[2] - v46;
    off_10689714();
    off_10689714();
    sub_10388ED0((float *)v34, &v38, &v41);
    v6 = v41 * 200.0;
    v41 = v6;
    v7 = v42 * 200.0;
    v42 = v7;
    v8 = v7;
    v9 = 200.0 * v43;
    v43 = v9;
    *(float *)&v44 = v6 + *(float *)&v44;
    v45 = v8 + v45;
    v46 = v46 + v9;
    v10 = v9 * 0.0;
    v35 = v8 - v10;
    v36 = v10 - v6;
    v37 = v6 * 0.0 - v8 * 0.0;
    off_10689714();
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v11 = sub_1038C4E0((void *)a1, v33, a1 + 580, 0);
    v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 968))(a1, v32);
    v13 = *v12 - *v11;
    v38 = v13;
    v14 = v12[1] - v11[1];
    v39 = v14;
    v15 = v14 * v36;
    v16 = v35;
    v17 = v13 * v35 + v15;
    v18 = v37;
    if ( (v12[2] - v11[2]) * v37 + v17 < 0.0 )
      v19 = -1.0;
    else
      v19 = 1.0;
    v20 = v19 * 1000.0;
    v21 = 0.80000001 * v20 * v16 + *(float *)&v44;
    v22 = v36 * (0.80000001 * v20) + v45;
    v23 = v20;
    v24 = 0.80000001 * v20 * v18 + v46;
    v25 = v23 * -0.19999999;
    v26 = v16 * v25 + *(float *)&v44;
    v27 = v36 * v25 + v45;
    v28 = v25 * v18 + v46;
    *(float *)(a1 + 4208) = v21;
    *(float *)(a1 + 4212) = v22;
    *(float *)(a1 + 4216) = v24;
    *(float *)(a1 + 4220) = v26 - v21;
    *(float *)(a1 + 4224) = v27 - v22;
    *(float *)(a1 + 4228) = v28 - v24;
    *(float *)(a1 + 4256) = *(float *)(a1 + 4208);
    *(float *)(a1 + 4260) = *(float *)(a1 + 4212);
    *(float *)(a1 + 4264) = *(float *)(a1 + 4216);
    *(float *)(a1 + 4244) = *(float *)(a1 + 4220);
    *(float *)(a1 + 4248) = *(float *)(a1 + 4224);
    *(float *)(a1 + 4252) = *(float *)(a1 + 4228);
    *(float *)(a1 + 4276) = 150.0;
    *(float *)(a1 + 4208) = *(float *)(a1 + 4208) - *(float *)v34 * 150.0;
    *(float *)(a1 + 4212) = *(float *)(a1 + 4212) - *(float *)&v34[1] * 150.0;
    *(float *)(a1 + 4216) = *(float *)(a1 + 4216) - 150.0 * *(float *)&v34[2];
    v29 = 1.0 / (double)(v4 - 1);
    *(float *)(a1 + 4220) = v29 * *(float *)(a1 + 4220);
    *(float *)(a1 + 4224) = *(float *)(a1 + 4224) * v29;
    *(float *)(a1 + 4228) = v29 * *(float *)(a1 + 4228);
  }
}
