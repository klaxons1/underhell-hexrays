void __cdecl sub_10166BA0(int a1, int a2, float *a3, float *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edi
  double v10; // st6
  double v11; // st5
  int v12; // eax
  int v13; // esi
  int v14; // edx
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // edi
  double v19; // st4
  int v20; // eax
  int v21; // esi
  double v22; // st7
  double (__stdcall *v23)(_DWORD, _DWORD); // eax
  double v24; // st7
  double (__thiscall *v25)(int, _DWORD, _DWORD); // eax
  double v26; // st7
  double v27; // st6
  float v28; // [esp+2Ch] [ebp-54h]
  float v29; // [esp+30h] [ebp-50h]
  float v30; // [esp+34h] [ebp-4Ch]
  float v31; // [esp+4Ch] [ebp-34h]
  float v32; // [esp+50h] [ebp-30h]
  float v33; // [esp+54h] [ebp-2Ch]
  float v34; // [esp+58h] [ebp-28h]
  float v35; // [esp+5Ch] [ebp-24h]
  float v36; // [esp+60h] [ebp-20h]
  float v37; // [esp+64h] [ebp-1Ch]
  float v38; // [esp+68h] [ebp-18h]
  float v39; // [esp+68h] [ebp-18h]
  int v40; // [esp+6Ch] [ebp-14h]
  int v41; // [esp+6Ch] [ebp-14h]
  int v42; // [esp+70h] [ebp-10h] BYREF
  float v43; // [esp+74h] [ebp-Ch]
  float v44; // [esp+78h] [ebp-8h]
  __int16 v45; // [esp+7Ch] [ebp-4h]
  char v46; // [esp+7Eh] [ebp-2h]
  char v47; // [esp+7Fh] [ebp-1h]

  sub_10166A60(a7, a3, a4, a5, a6, a7, a8, a9);
  sub_10172990(&v42, "TEBloodStream", a3);
  if ( v42 )
  {
    v43 = 0.050000001;
    v44 = *(float *)&a9;
    v32 = *a4;
    v33 = a4[1];
    v34 = a4[2];
    off_103EDFEC();
    v40 = 100;
    do
    {
      v9 = sub_10172220(v42);
      if ( v9 )
      {
        v30 = (float)a7;
        v29 = (float)a6;
        v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.69999999,
                1.0)
            * (double)a5;
        sub_101669B0((_BYTE *)v9, v28, v29, v30);
        *(_BYTE *)(v9 + 47) = (int)((double)a8 * 255.89999);
        *(float *)(v9 + 12) = *a3;
        *(float *)(v9 + 16) = a3[1];
        *(float *)(v9 + 20) = a3[2];
        *(float *)(v9 + 36) = 2.0;
        *(_BYTE *)(v9 + 40) = 9;
        v10 = v34 - v43;
        v43 = v43 - 0.005;
        v11 = (double)SLODWORD(v44);
        *(float *)(v9 + 24) = v32 * v11;
        *(float *)(v9 + 28) = v33 * v11;
        *(float *)(v9 + 32) = v11 * v10;
        LODWORD(v44) = (int)((double)SLODWORD(v44) - 0.00001);
      }
      --v40;
    }
    while ( v40 );
    v43 = 0.075000003;
    if ( a9 / 5 > 0 )
    {
      v41 = a9 / 5;
      do
      {
        v12 = sub_10172220(v42);
        v13 = v12;
        if ( v12 )
        {
          *(float *)(v12 + 36) = 3.0;
          *(_BYTE *)(v12 + 44) = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                              + 4))(
                                         dword_10413198,
                                         0.69999999,
                                         1.0)
                                     * (double)a5
                                     * 255.89999);
          *(_BYTE *)(v13 + 45) = (int)((double)a6 * 255.89999);
          v47 = (int)((double)a6 * 255.89999);
          *(_BYTE *)(v13 + 46) = (int)((double)a7 * 255.89999);
          v46 = (int)((double)a7 * 255.89999);
          *(_BYTE *)(v13 + 47) = (int)(255.89999 * (double)a8);
          HIBYTE(v45) = (int)(255.89999 * (double)a8);
          *(float *)(v13 + 12) = *a3;
          *(float *)(v13 + 16) = a3[1];
          *(float *)(v13 + 20) = a3[2];
          *(_BYTE *)(v13 + 40) = 8;
          v14 = *(_DWORD *)dword_10413198;
          v31 = v34 - v43;
          v43 = v43 - 0.005;
          v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v14 + 4))(dword_10413198, 0.0, 1.0);
          v16 = (int)((double)a9 * v15);
          v17 = v15 * 1.7;
          v44 = *(float *)&v16;
          v18 = 2;
          v36 = v17;
          v19 = (double)v16;
          v35 = v19;
          *(float *)(v13 + 24) = v32 * v17 * v19;
          *(float *)(v13 + 28) = v33 * v17 * v19;
          *(float *)(v13 + 32) = v17 * v31 * v19;
          do
          {
            v20 = sub_10172220(v42);
            v21 = v20;
            if ( v20 )
            {
              *(float *)(v20 + 36) = 3.0;
              v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.69999999,
                      1.0);
              *(_BYTE *)(v21 + 45) = v47;
              *(_BYTE *)(v21 + 46) = v46;
              *(_BYTE *)(v21 + 44) = (int)(v22 * 255.89999);
              *(_BYTE *)(v21 + 47) = HIBYTE(v45);
              v23 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
              v37 = a3[2];
              v44 = a3[1];
              v38 = *a3;
              v39 = v23(-1.0, 1.0) + v38;
              v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -1.0,
                      1.0);
              v25 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
              v44 = v24 + v44;
              v26 = v25(dword_10413198, -1.0, 1.0) + v37;
              *(float *)(v21 + 12) = v39;
              *(float *)(v21 + 16) = v44;
              *(float *)(v21 + 20) = v26;
              *(_BYTE *)(v21 + 40) = 8;
              v27 = v36 * (v34 - v43) * v35;
              *(float *)(v21 + 24) = v32 * v36 * v35;
              *(float *)(v21 + 28) = v33 * v36 * v35;
              *(float *)(v21 + 32) = v27;
            }
            --v18;
          }
          while ( v18 );
        }
        --v41;
      }
      while ( v41 );
    }
    if ( v42 )
      sub_100F2FF0(v42);
  }
}
