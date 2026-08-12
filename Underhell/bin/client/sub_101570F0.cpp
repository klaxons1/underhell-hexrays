void __usercall sub_101570F0(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        float *a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  double v9; // st7
  int v10; // esi
  int v11; // edi
  float *v12; // eax
  double v13; // st7
  int v14; // edi
  float *v15; // eax
  double v16; // st7
  char v17; // cl
  char v18; // dl
  float v19; // [esp+78h] [ebp-1Ch]
  float v20; // [esp+7Ch] [ebp-18h]
  float v21; // [esp+80h] [ebp-14h]
  int v22; // [esp+88h] [ebp-Ch]
  int v23; // [esp+88h] [ebp-Ch]
  float *v24; // [esp+8Ch] [ebp-8h] BYREF
  __int16 v25; // [esp+90h] [ebp-4h]
  char v26; // [esp+93h] [ebp-1h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_Blood", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v24, (int)"FX_Blood");
  if ( v24 )
  {
    sub_100F3060((int)v24, a4);
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -1.0,
           1.0,
           a2,
           a3,
           a1);
    v10 = (int)a5;
    v19 = v9 + *a5;
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0)
        + a5[1];
    v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0)
        + a5[2];
    off_103EDFEC();
    v11 = 0;
    v22 = 0;
    while ( 1 )
    {
      v12 = sub_100F2B60((int)v24, v10, 60, dword_1043DF28, a4);
      v10 = (int)v12;
      if ( !v12 )
        break;
      v12[11] = 0.0;
      v12[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.25,
                  0.5);
      v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              2.0,
              8.0)
          * (double)v22;
      *(float *)(v10 + 24) = v19 * v13;
      *(float *)(v10 + 28) = v20 * v13;
      *(float *)(v10 + 32) = v13 * v21;
      *(float *)(v10 + 32) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               -32.0,
                               -16.0)
                           + *(float *)(v10 + 32);
      *(_BYTE *)(v10 + 48) = (int)a6;
      *(_BYTE *)(v10 + 49) = (int)a7;
      *(_BYTE *)(v10 + 50) = (int)a8;
      *(_BYTE *)(v10 + 51) = (int)a9;
      *(_WORD *)(v10 + 52) = 512;
      *(_BYTE *)(v10 + 54) = 8;
      *(float *)(v10 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                      dword_10413198,
                                      0,
                                      360);
      ++v11;
      *(float *)(v10 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               -2.0,
                               2.0);
      v22 = v11;
      if ( v11 >= 2 )
      {
        v14 = 0;
        v23 = 0;
        v26 = (int)a7;
        HIBYTE(v25) = (int)a8;
        do
        {
          v15 = sub_100F2B60((int)v24, v10, 60, dword_1043DF2C, a4);
          v10 = (int)v15;
          if ( !v15 )
            break;
          v15[11] = 0.0;
          v15[10] = 0.5;
          v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  4.0,
                  16.0)
              * (double)v23;
          v17 = v26;
          v18 = HIBYTE(v25);
          *(float *)(v10 + 24) = v19 * v16;
          *(float *)(v10 + 28) = v16 * v20;
          *(float *)(v10 + 32) = v16 * v21;
          *(_BYTE *)(v10 + 50) = v18;
          *(_BYTE *)(v10 + 48) = (int)a6;
          *(_BYTE *)(v10 + 49) = v17;
          *(_DWORD *)(v10 + 51) = 134348928;
          *(float *)(v10 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                          dword_10413198,
                                          0,
                                          360);
          ++v14;
          *(float *)(v10 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   -4.0,
                                   4.0);
          v23 = v14;
        }
        while ( v14 < 2 );
        break;
      }
    }
    if ( v24 )
      sub_100F2FF0((int)v24);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
