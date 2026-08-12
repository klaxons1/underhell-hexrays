void __cdecl sub_100A6BC0(float *a1, float *a2, float a3)
{
  double v3; // st6
  double v4; // rt0
  double v5; // st7
  int v6; // eax
  int v7; // edi
  double v8; // st7
  double v9; // st7
  int v10; // eax
  int v11; // esi
  double (__thiscall *v12)(int, _DWORD, _DWORD); // edx
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st4
  double v22; // st7
  int *v23; // esi
  int *v24; // edi
  int *v25; // esi
  int v26; // edx
  void (__thiscall *v27)(int *, _DWORD); // eax
  int v28; // eax
  int v29; // edi
  double v30; // st7
  double v31; // st4
  double v32; // rtt
  double v33; // st7
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st4
  double v38; // st7
  double v39; // st5
  double v40; // st7
  double v41; // st5
  double v42; // st3
  double v43; // st4
  unsigned __int8 v44; // al
  int v45; // eax
  double v46; // st7
  int v47; // eax
  int v48; // eax
  float v49; // [esp+80h] [ebp-E4h]
  int v50; // [esp+84h] [ebp-E0h]
  float v51; // [esp+84h] [ebp-E0h]
  float v52; // [esp+84h] [ebp-E0h]
  _BYTE v53[32]; // [esp+94h] [ebp-D0h] BYREF
  float v54[3]; // [esp+B4h] [ebp-B0h] BYREF
  float v55[3]; // [esp+C0h] [ebp-A4h] BYREF
  _DWORD v56[9]; // [esp+CCh] [ebp-98h] BYREF
  __int16 v57; // [esp+F0h] [ebp-74h]
  char v58; // [esp+F2h] [ebp-72h]
  int v59; // [esp+F4h] [ebp-70h]
  int v60; // [esp+F8h] [ebp-6Ch]
  int v61; // [esp+FCh] [ebp-68h]
  int v62; // [esp+100h] [ebp-64h]
  int v63; // [esp+104h] [ebp-60h]
  int v64; // [esp+108h] [ebp-5Ch]
  __int16 v65; // [esp+10Ch] [ebp-58h]
  int v66; // [esp+110h] [ebp-54h]
  float v67; // [esp+114h] [ebp-50h] BYREF
  float v68; // [esp+118h] [ebp-4Ch]
  float v69; // [esp+11Ch] [ebp-48h]
  float v70; // [esp+120h] [ebp-44h] BYREF
  float v71; // [esp+124h] [ebp-40h]
  float v72; // [esp+128h] [ebp-3Ch]
  int v73; // [esp+12Ch] [ebp-38h]
  float v74; // [esp+130h] [ebp-34h] BYREF
  float v75; // [esp+134h] [ebp-30h]
  float v76; // [esp+138h] [ebp-2Ch]
  float v77; // [esp+13Ch] [ebp-28h] BYREF
  float v78; // [esp+140h] [ebp-24h] BYREF
  int v79; // [esp+144h] [ebp-20h]
  int v80; // [esp+148h] [ebp-1Ch]
  int *v81; // [esp+14Ch] [ebp-18h]
  int i; // [esp+150h] [ebp-14h]
  float v83; // [esp+154h] [ebp-10h]
  int v84; // [esp+158h] [ebp-Ch]
  int v85; // [esp+15Ch] [ebp-8h]
  int v86; // [esp+160h] [ebp-4h]
  int savedregs; // [esp+164h] [ebp+0h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GunshotSplash", 0, "Particle/Effect_Rendering", 0, 4);
  if ( *(_DWORD *)(dword_1042E1AC + 48) )
  {
    v3 = a3 * a2[2];
    v4 = a2[1] * a3;
    v78 = *a2 * a3 + *a1;
    *(float *)&v79 = v4 + a1[1];
    *(float *)&v80 = v3 + a1[2];
    sub_100A65B0(SLOBYTE(v78), v79, v80, (int)&v78, &v77);
    v5 = a3 * 0.125;
    v83 = v5;
    if ( v5 > 4.0 )
      v83 = 4.0;
    if ( sub_100DDA40(384) )
    {
      v6 = sub_1017A770("splash");
      v7 = v6;
      v66 = v6;
      if ( v6 )
      {
        sub_100F2950(v6);
        sub_100F3060(a1);
        *(float *)(v7 + 364) = 800.0;
        *(_DWORD *)(v7 + 376) |= 1u;
        *(float *)(v7 + 380) = 2.0;
        v74 = *a1 + 32.0;
        v75 = a1[1] + 32.0;
        v76 = a1[2] + 32.0;
        v67 = *a1 - 32.0;
        v68 = a1[1] - 32.0;
        v69 = a1[2] - 32.0;
        sub_100EC3F0(&v67, &v74, 1);
        sub_100F0920("effects/splash2");
        v73 = sub_100F0950(v50);
        for ( i = 0; i < 16; ++i )
        {
          v70 = *a1;
          v71 = a1[1];
          v72 = a1[2];
          v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 -8.0,
                 8.0);
          v70 = v8 * v83 + v70;
          v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 -8.0,
                 8.0);
          v71 = v9 * v83 + v71;
          v10 = sub_100F2B60(56, v73, &v70);
          v11 = v10;
          if ( !v10 )
            break;
          *(float *)(v10 + 44) = 0.0;
          *(float *)(v10 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.25,
                                   0.5);
          v85 = sub_10115FB0();
          v67 = (double)v85 * 0.000030518509 * 1.6 - 0.80000001;
          v85 = sub_10115FB0();
          v68 = (double)v85 * 0.000030518509 * 1.6 - 0.80000001;
          v85 = sub_10115FB0();
          v74 = v67 + *a2;
          v75 = a2[1] + v68;
          v12 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v76 = (double)v85 * 0.000030518509 * 1.6 - 0.80000001 + a2[2];
          v51 = 100.0 * v83 * 3.0;
          v49 = 3.0 * (v83 * 50.0);
          v13 = v12(dword_10413198, LODWORD(v49), LODWORD(v51));
          v14 = v74 * v13;
          v15 = v75 * v13;
          v16 = v13 * v76;
          *(float *)(v11 + 24) = v14;
          *(float *)(v11 + 28) = v15;
          *(float *)(v11 + 32) = v16;
          v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  32.0,
                  64.0);
          *(float *)(v11 + 32) = v17 * v83 + *(float *)(v11 + 32);
          *(float *)(v11 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   1.0,
                                   3.0);
          *(float *)(v11 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.025,
                                   0.050000001);
          v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.75,
                  1.25);
          v19 = v78 * v18;
          v20 = 1.0;
          if ( v19 <= 1.0 )
            v20 = v19;
          v85 = (int)(v20 * 255.0);
          *(_BYTE *)(v11 + 36) = v85;
          v21 = *(float *)&v79 * v18;
          if ( v21 > 1.0 )
            v21 = 1.0;
          v85 = (int)(v21 * 255.0);
          *(_BYTE *)(v11 + 37) = v85;
          v22 = v18 * *(float *)&v80;
          if ( v22 > 1.0 )
            v22 = 1.0;
          *(_BYTE *)(v11 + 38) = (int)(v22 * 255.0);
          v85 = (int)(255.0 * v77);
          *(_BYTE *)(v11 + 39) = v85;
        }
        v23 = (int *)sub_100DDA40(268);
        if ( v23 )
        {
          sub_100F2BA0("splish");
          *v23 = (int)&CSplashParticle::`vftable';
          *((_BYTE *)v23 + 264) = 0;
          v24 = v23;
        }
        else
        {
          v24 = 0;
        }
        v25 = 0;
        v81 = 0;
        if ( v24 )
        {
          sub_100F2950(v24);
          v81 = v24;
          v25 = v24;
        }
        sub_100F3060(a1);
        v26 = *v25;
        v25[65] = *((int *)a1 + 2);
        v27 = *(void (__thiscall **)(int *, _DWORD))(v26 + 48);
        *((_BYTE *)v25 + 264) = 1;
        v52 = a3 + a3;
        v27(v25, LODWORD(v52));
        v54[0] = *a1 + 32.0;
        v54[1] = a1[1] + 32.0;
        v54[2] = a1[2] + 32.0;
        v55[0] = *a1 - 32.0;
        v55[1] = a1[1] - 32.0;
        v55[2] = a1[2] - 32.0;
        sub_100EC3F0(v55, v54, 1);
        v85 = 0;
        i = 8;
        while ( 1 )
        {
          v28 = sub_100F2B60(60, v73, a1);
          v29 = v28;
          if ( !v28 )
          {
LABEL_38:
            sub_100A6930((int)&savedregs, a1, v83, (int *)&v78, COERCE_INT(1.5), v77);
            sub_1015BB00(v53);
            *(float *)&v56[7] = 0.0;
            *(float *)&v56[2] = 1.0;
            v56[4] = 0;
            v56[5] = 100;
            v56[8] = 0;
            v57 = 1;
            v58 = 0;
            v59 = -1;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            v63 = 0;
            v64 = 0;
            v65 = -1;
            v56[0] = 2;
            v56[1] = "Physics.WaterSplash";
            v56[3] = 75;
            v56[6] = a1;
            sub_10121280(v53, 0, v56);
            v48 = v60;
            v63 = 0;
            if ( v62 >= 0 )
            {
              if ( v60 )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v60);
                v48 = 0;
                v60 = 0;
              }
              v61 = 0;
            }
            v64 = v48;
            if ( v62 >= 0 )
            {
              if ( v48 )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v48);
                v60 = 0;
              }
              v61 = 0;
            }
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v53);
            sub_100F2FF0(v25);
            sub_100F2FF0(v66);
            break;
          }
          *(float *)(v28 + 44) = 0.0;
          *(float *)(v28 + 40) = 2.0;
          v86 = sub_10115FB0();
          *(float *)(v29 + 24) = (double)v86 * 0.000030518509 * 0.40000001 - 0.2;
          v86 = sub_10115FB0();
          *(float *)(v29 + 28) = (double)v86 * 0.000030518509 * 0.40000001 - 0.2;
          v86 = sub_10115FB0();
          *(float *)(v29 + 32) = (double)v86 * 0.000030518509 * 0.40000001 - 0.2;
          v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  4.0,
                  6.0);
          v31 = a2[2];
          v32 = a2[1] * v30;
          *(float *)(v29 + 24) = v30 * *a2 + *(float *)(v29 + 24);
          *(float *)(v29 + 28) = v32 + *(float *)(v29 + 28);
          *(float *)(v29 + 32) = v30 * v31 + *(float *)(v29 + 32);
          off_103EDFEC();
          v33 = v83 * 50.0 * (double)i;
          *(float *)(v29 + 24) = v33 * *(float *)(v29 + 24);
          *(float *)(v29 + 28) = *(float *)(v29 + 28) * v33;
          *(float *)(v29 + 32) = v33 * *(float *)(v29 + 32);
          v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.75,
                  1.25);
          v35 = v78 * v34;
          v36 = 1.0;
          if ( v35 <= 1.0 )
            v36 = v35;
          v84 = (int)(v36 * 255.0);
          *(_BYTE *)(v29 + 48) = v84;
          v37 = *(float *)&v79 * v34;
          if ( v37 > 1.0 )
            v37 = 1.0;
          v84 = (int)(v37 * 255.0);
          *(_BYTE *)(v29 + 49) = v84;
          v38 = v34 * *(float *)&v80;
          v39 = 1.0;
          if ( v38 <= 1.0 )
            v39 = v38;
          v40 = 1.0;
          v84 = (int)(v39 * 255.0);
          *(_BYTE *)(v29 + 50) = v84;
          v41 = ((double)v85 - 7.0) * -0.14285715;
          v42 = 0.0;
          if ( v41 >= 0.0 )
          {
            v42 = v41;
            v43 = 0.0;
            if ( v41 > 1.0 )
              v42 = 1.0;
          }
          else
          {
            v43 = 0.0;
          }
          v84 = (int)((1.0 - v42 * 0.5) * (v83 * 24.0));
          v44 = v84;
          *(_BYTE *)(v29 + 53) = v84;
          v45 = 2 * v44;
          if ( v45 > 255 )
            LOBYTE(v45) = -1;
          *(_BYTE *)(v29 + 54) = v45;
          if ( v43 <= v41 )
          {
            if ( v41 > 1.0 )
              goto LABEL_37;
          }
          else
          {
            v41 = v43;
          }
          v40 = v41;
LABEL_37:
          *(_BYTE *)(v29 + 52) = 0;
          v84 = (int)((255.0 - v40 * 223.0) * v77);
          *(_BYTE *)(v29 + 51) = v84;
          v84 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
          *(float *)(v29 + 36) = (float)v84;
          v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -4.0,
                  4.0);
          v47 = i;
          *(float *)(v29 + 56) = v46;
          ++v85;
          v25 = v81;
          i = v47 - 1;
          if ( v47 - 1 <= 0 )
            goto LABEL_38;
        }
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
