void __cdecl sub_10156AA0(int a1, int a2)
{
  int v2; // esi
  double v3; // st7
  bool v4; // zf
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  float *v9; // eax
  float *v10; // esi
  double v11; // st7
  double (__thiscall *v12)(int, _DWORD, _DWORD); // eax
  double v13; // st7
  double (__thiscall *v14)(int, _DWORD, _DWORD); // eax
  double v15; // st7
  int (__thiscall *v16)(int, int, int); // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  int i; // edi
  float *v22; // eax
  double v23; // st7
  double (__thiscall *v24)(int, _DWORD, _DWORD); // eax
  double v25; // st7
  double (__thiscall *v26)(int, _DWORD, _DWORD); // eax
  double v27; // st7
  int (__thiscall *v28)(int, int, int); // eax
  unsigned __int8 v29; // al
  double v30; // st7
  double v31; // st6
  double v32; // st5
  double v33; // st7
  double v34; // st7
  double v35; // st5
  double v36; // st6
  double v37; // st4
  int v38[8]; // [esp+C8h] [ebp-7Ch] BYREF
  float v39[3]; // [esp+E8h] [ebp-5Ch] BYREF
  float v40; // [esp+F4h] [ebp-50h] BYREF
  float v41; // [esp+F8h] [ebp-4Ch]
  float v42; // [esp+FCh] [ebp-48h]
  float v43[3]; // [esp+100h] [ebp-44h] BYREF
  float v44; // [esp+10Ch] [ebp-38h] BYREF
  float v45; // [esp+110h] [ebp-34h]
  float v46; // [esp+114h] [ebp-30h]
  float v47; // [esp+118h] [ebp-2Ch] BYREF
  float v48; // [esp+11Ch] [ebp-28h]
  float v49; // [esp+120h] [ebp-24h]
  float v50; // [esp+124h] [ebp-20h] BYREF
  float v51; // [esp+128h] [ebp-1Ch]
  float v52; // [esp+12Ch] [ebp-18h]
  int v53; // [esp+130h] [ebp-14h]
  int v54; // [esp+134h] [ebp-10h]
  float *v55; // [esp+138h] [ebp-Ch] BYREF
  int v56; // [esp+13Ch] [ebp-8h] BYREF
  int v57; // [esp+140h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_AntlionImpact", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100EB150(&v56, (int)"FX_DebrisFlecks");
  if ( v56 )
  {
    v2 = a2 + 12;
    v3 = *(float *)a2 - *(float *)(a2 + 12);
    v54 = a2 + 12;
    v50 = v3;
    v51 = *(float *)(a2 + 4) - *(float *)(a2 + 16);
    v52 = *(float *)(a2 + 8) - *(float *)(a2 + 20);
    off_103EDFEC();
    v4 = *(_DWORD *)(a2 + 76) == 0;
    v47 = v50 * 2.0 + *(float *)(a2 + 12);
    v48 = v51 * 2.0 + *(float *)(a2 + 16);
    v49 = 2.0 * v52 + *(float *)(a2 + 20);
    if ( !v4 )
    {
      sub_100F3060(v56, &v47);
      v44 = v47 + 32.0;
      v45 = v48 + 32.0;
      v46 = v49 + 32.0;
      v40 = v47 - 32.0;
      v41 = v48 - 32.0;
      v42 = v49 - 32.0;
      sub_100EC3F0(v56 + 8, &v40, &v44, 1);
      (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v56 + 260) + 16))(
        v56 + 260,
        &v47,
        &v50,
        1.0,
        8.0,
        256.0,
        800.0,
        0.30000001);
      v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 8, 16);
      v6 = 0;
      if ( v5 > 0 )
      {
        do
        {
          v7 = v56;
          v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
          v9 = sub_100F2B60(v7, v7, 64, dword_1043DF08[v8], &v47);
          v10 = v9;
          if ( !v9 )
            break;
          v9[13] = 3.0;
          v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -1.0,
                  1.0);
          v12 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v44 = v11 + v50;
          v13 = v12(dword_10413198, -1.0, 1.0);
          v14 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v45 = v13 + v51;
          v15 = v14(dword_10413198, -1.0, 1.0);
          v16 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
          v46 = v15 + v52;
          *((_BYTE *)v10 + 59) = v16(dword_10413198, 1, 6);
          v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  64.0,
                  256.0);
          v18 = v44 * v17;
          v19 = v45 * v17;
          v20 = v17 * v46;
          v10[6] = v18;
          v10[7] = v19;
          v10[8] = v20;
          v57 = sub_10115FB0();
          v10[9] = (double)v57 * 0.000030518509 * 360.0;
          v57 = sub_10115FB0();
          v10[10] = (double)v57 * 0.000030518509 * 360.0;
          v57 = sub_10115FB0();
          v10[11] = (double)v57 * 0.000030518509 * 360.0;
          ++v6;
          v10[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -800.0,
                      800.0);
          *((_WORD *)v10 + 28) = -1;
          *((_BYTE *)v10 + 58) = -1;
          *((_WORD *)v10 + 30) = -32640;
          *((_BYTE *)v10 + 62) = 0x80;
        }
        while ( v6 < v5 );
        v2 = v54;
      }
      sub_100F32D0(&v55, (int)"FX_DebrisFlecks");
      if ( v55 )
      {
        v43[0] = v50 * 4.0 + *(float *)v2;
        v43[1] = v51 * 4.0 + *(float *)(v2 + 4);
        v43[2] = 4.0 * v52 + *(float *)(v2 + 8);
        sub_100F3060((int)v55, v43);
        v40 = v47 + 32.0;
        v41 = v48 + 32.0;
        v42 = v49 + 32.0;
        v39[0] = v47 - 32.0;
        v39[1] = v48 - 32.0;
        v39[2] = v49 - 32.0;
        sub_100EC3F0((int)(v55 + 2), v39, &v40, 1);
        for ( i = 0; i < 4; ++i )
        {
          v22 = sub_100F2B60((int)v55, v2, 60, dword_1043DF20[0], v43);
          v2 = (int)v22;
          if ( !v22 )
            break;
          v22[11] = 0.0;
          v22[10] = 1.0;
          v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -0.80000001,
                  0.80000001);
          v24 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v44 = v23 + v50;
          v25 = v24(dword_10413198, -0.80000001, 0.80000001);
          v26 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v45 = v25 + v51;
          v27 = v26(dword_10413198, -0.80000001, 0.80000001);
          v28 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
          v46 = v27 + v52;
          v29 = v28(dword_10413198, 8, 16);
          v57 = v29;
          *(_BYTE *)(v2 + 53) = v29;
          v53 = (int)((double)v57 * 4.0);
          *(_BYTE *)(v2 + 54) = v53;
          v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  4.0,
                  64.0);
          v31 = v44 * v30;
          v32 = v45 * v30;
          v33 = v30 * v46;
          *(float *)(v2 + 24) = v31;
          *(float *)(v2 + 28) = v32;
          *(float *)(v2 + 32) = v33;
          *(_BYTE *)(v2 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                  dword_10413198,
                                  32,
                                  64);
          *(_BYTE *)(v2 + 52) = 0;
          *(float *)(v2 + 36) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                  dword_10413198,
                                  0.0,
                                  6.2831855);
          *(float *)(v2 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                  dword_10413198,
                                  -0.5,
                                  0.5);
          v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.5,
                  1.0);
          v35 = 1.0;
          if ( v34 <= 1.0 )
            v35 = v34;
          v36 = 1.0;
          v53 = (int)(v35 * 255.0);
          *(_BYTE *)(v2 + 48) = v53;
          v37 = v34 * 0.89999998;
          if ( v34 * 0.89999998 > 1.0 )
            v37 = 1.0;
          v53 = (int)(v37 * 255.0);
          *(_BYTE *)(v2 + 49) = v53;
          if ( v34 * 0.75 <= 1.0 )
            v36 = v34 * 0.75;
          v53 = (int)(255.0 * v36);
          *(_BYTE *)(v2 + 50) = v53;
        }
        sub_1015BB00(v38);
        sub_101213E0((int)v38, 0, (int)"FX_AntlionImpact.ShellImpact", v54, 0.0, 0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v38);
        if ( v55 )
          sub_100F2FF0((int)v55);
      }
    }
    if ( v56 )
      sub_100F2FF0(v56);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
