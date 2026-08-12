void __cdecl sub_100702E0(float *a1)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // rt0
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // rt1
  int v13; // eax
  int v14; // esi
  float *v15; // eax
  double v16; // st7
  float v17[3]; // [esp+58h] [ebp-30h] BYREF
  float v18[3]; // [esp+64h] [ebp-24h] BYREF
  float v19; // [esp+70h] [ebp-18h] BYREF
  float v20; // [esp+74h] [ebp-14h]
  float v21; // [esp+78h] [ebp-10h]
  int v22; // [esp+7Ch] [ebp-Ch]
  float v23; // [esp+80h] [ebp-8h]
  int v24; // [esp+84h] [ebp-4h] BYREF
  float v25; // [esp+90h] [ebp+8h]

  sub_100F32D0(&v24, "dust");
  sub_100F3060(a1);
  sub_100F29C0(32.0, 64.0);
  v2 = a1[14];
  v3 = a1[6] * v2;
  v4 = a1[7] * v2;
  v5 = v2 * a1[8] + a1[2];
  v6 = v4 + a1[1];
  v19 = v3 + *a1;
  v20 = v6;
  v21 = v5;
  (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v18, &v19, 1);
  v7 = a1[14] * 16.0;
  v23 = -v7;
  v25 = v7 - -v7;
  v22 = sub_10115FB0();
  v19 = (double)v22 * 0.000030518509 * v25 + v23;
  v22 = sub_10115FB0();
  v20 = (double)v22 * 0.000030518509 * v25 + v23;
  sub_10115FB0();
  v8 = a1[14];
  v9 = a1[6] * v8;
  v10 = a1[7] * v8;
  v11 = v8 * a1[8] + a1[2];
  v12 = v10 + a1[1];
  v19 = v9 + *a1 + v19;
  v20 = v12 + v20;
  v21 = v11;
  v13 = sub_100F2B60(60, dword_1043DF20[0], &v19);
  v14 = v13;
  if ( v13 )
  {
    *(float *)(v13 + 44) = 0.0;
    *(float *)(v13 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                             dword_10413198,
                             0.25,
                             0.5);
    v15 = sub_10042010(v17, -1.0, 1.0);
    *(float *)(v14 + 24) = *v15;
    *(float *)(v14 + 28) = v15[1];
    *(float *)(v14 + 32) = v15[2];
    off_103EDFEC();
    *(float *)(v14 + 32) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                             dword_10413198,
                             16.0,
                             32.0)
                         * (a1[14] + a1[14])
                         + *(float *)(v14 + 32);
    v16 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 100, 150);
    *(_BYTE *)(v14 + 48) = (int)(v18[0] * v16 + 16.0);
    *(_BYTE *)(v14 + 49) = (int)(v18[1] * v16 + 8.0);
    v22 = (int)(v16 * v18[2]);
    *(_BYTE *)(v14 + 50) = v22;
    *(_BYTE *)(v14 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                             dword_10413198,
                             (int)(a1[14] * 64.0),
                             (int)(a1[14] * 128.0));
    *(_BYTE *)(v14 + 52) = 0;
    v22 = (int)((double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 24)
              * a1[14]);
    *(_BYTE *)(v14 + 53) = v22;
    v22 = (int)((double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 48)
              * a1[14]);
    *(_BYTE *)(v14 + 54) = v22;
    *(float *)(v14 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                    dword_10413198,
                                    0,
                                    360);
    *(float *)(v14 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                             dword_10413198,
                             -2.0,
                             2.0);
  }
  if ( v24 )
    sub_100F2FF0();
}
