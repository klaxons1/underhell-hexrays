void __cdecl sub_1019A510(float *a1, float *a2, float a3)
{
  float *v3; // esi
  double v4; // st7
  float *v5; // eax
  float *v6; // edi
  float *v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st7
  float *v17; // eax
  float *v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  double (__stdcall *v22)(_DWORD, _DWORD); // edx
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  int v32; // eax
  float v33; // [esp+50h] [ebp-6Ch]
  float v34; // [esp+54h] [ebp-68h]
  float v35[3]; // [esp+64h] [ebp-58h] BYREF
  float v36; // [esp+70h] [ebp-4Ch]
  float v37; // [esp+74h] [ebp-48h]
  float v38; // [esp+7Ch] [ebp-40h]
  float v39; // [esp+80h] [ebp-3Ch]
  float v40; // [esp+84h] [ebp-38h]
  float v41; // [esp+88h] [ebp-34h] BYREF
  float v42; // [esp+8Ch] [ebp-30h]
  float v43; // [esp+90h] [ebp-2Ch]
  float v44; // [esp+94h] [ebp-28h] BYREF
  float v45; // [esp+98h] [ebp-24h]
  float v46; // [esp+9Ch] [ebp-20h]
  int v47; // [esp+A0h] [ebp-1Ch]
  int v48; // [esp+A4h] [ebp-18h]
  _DWORD *v49; // [esp+A8h] [ebp-14h]
  int v50; // [esp+ACh] [ebp-10h]
  float *v51; // [esp+B0h] [ebp-Ch]
  float v52; // [esp+B4h] [ebp-8h] BYREF
  float v53; // [esp+B8h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "StriderBlood", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = a1;
  (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v35, a1, 1);
  sub_100A64D0(v35, (int)&v41, &v52);
  v41 = v41 * 0.25 + 0.75;
  v42 = v42 * 0.25 + 0.75;
  v43 = 0.25 * v43 + 0.75;
  v4 = v52 * 255.0;
  if ( v4 < 200.0 )
    v4 = 200.0;
  v52 = v4;
  v5 = (float *)sub_100DDA40(268);
  v6 = v5;
  if ( v5 )
  {
    sub_100F2BA0(v5, (int)"splish");
    *(_DWORD *)v6 = &CSplashParticle::`vftable';
    *((_BYTE *)v6 + 264) = 0;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  v51 = 0;
  if ( v7 )
  {
    sub_100F2950(v7);
    v51 = v7;
    v8 = (int)v7;
  }
  sub_100F3060(v8, a1);
  v53 = a3 * 0.125;
  v9 = sub_100F0920();
  v48 = sub_100F0950((int)v9, v8, (int)a1, "effects/slime1");
  v10 = sub_100DDA40(384);
  if ( v10 && (v11 = (_DWORD *)sub_1017A770(v10, (int)"splash"), v12 = (int)v11, (v49 = v11) != 0) )
  {
    sub_100F2950(v11);
    sub_100F3060(v12, a1);
    *(float *)(v12 + 364) = 600.0;
    *(_DWORD *)(v12 + 376) |= 1u;
    *(float *)(v12 + 380) = 2.0;
    v50 = 0;
    while ( 1 )
    {
      v44 = *v3;
      v45 = v3[1];
      v46 = v3[2];
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -8.0,
              8.0);
      v44 = v14 * v53 + v44;
      v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -8.0,
              8.0);
      v45 = v15 * v53 + v45;
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -8.0,
              8.0);
      v46 = v16 * v53 + v46;
      v17 = sub_100F2B60(v12, (int)v3, 56, v48, &v44);
      v18 = v17;
      if ( !v17 )
        break;
      v17[11] = 0.0;
      v17[10] = 1.0;
      v19 = sub_10115FB0();
      v36 = (double)v19 * 0.000030518509 + (double)v19 * 0.000030518509 - 1.0;
      v20 = sub_10115FB0();
      v37 = (double)v20 * 0.000030518509 + (double)v20 * 0.000030518509 - 1.0;
      v21 = sub_10115FB0();
      v22 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v38 = *a2 + v36;
      v39 = a2[1] + v37;
      v40 = (double)v21 * 0.000030518509 * 2.0 - 1.0 + a2[2];
      v34 = 2048.0 * v53 * 2.0;
      v33 = 2.0 * (v53 * 128.0);
      v23 = v22(LODWORD(v33), LODWORD(v34));
      v24 = v38 * v23;
      v25 = v39 * v23;
      v26 = v23 * v40;
      v18[6] = v24;
      v18[7] = v25;
      v18[8] = v26;
      v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              32.0);
      v18[8] = v27 * v53 + v18[8];
      v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              20.0,
              26.0);
      v18[13] = v28 * v53;
      v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.1,
              0.2);
      v18[12] = v29 * v53;
      v30 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                      dword_10413198,
                      (int)(v52 * 0.75),
                      (int)v52);
      v12 = (int)v49;
      *((_BYTE *)v18 + 36) = (int)(v41 * v30);
      *((_BYTE *)v18 + 37) = (int)(v42 * v30);
      v31 = v30 * v43;
      *((_BYTE *)v18 + 39) = -1;
      v32 = ++v50;
      v47 = (int)v31;
      *((_BYTE *)v18 + 38) = (int)v31;
      if ( v32 >= 64 )
        break;
      v3 = a1;
    }
    sub_100F2FF0(v12);
    v13 = (int)v51;
    if ( v51 )
      goto LABEL_17;
  }
  else if ( v8 )
  {
    v13 = v8;
LABEL_17:
    sub_100F2FF0(v13);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
