void __cdecl sub_1017BA60(float *a1, float *a2)
{
  double v2; // st7
  double v4; // st6
  double v5; // rt0
  int v6; // esi
  float **v7; // eax
  float *v8; // ebx
  double v9; // st7
  float *v10; // esi
  int v11; // eax
  float v12; // [esp+3Ch] [ebp-48h]
  float v13; // [esp+44h] [ebp-40h]
  int v14; // [esp+60h] [ebp-24h] BYREF
  float v15; // [esp+64h] [ebp-20h]
  float v16; // [esp+68h] [ebp-1Ch]
  float v17; // [esp+6Ch] [ebp-18h] BYREF
  float v18; // [esp+70h] [ebp-14h]
  float v19; // [esp+74h] [ebp-10h]
  int v20; // [esp+78h] [ebp-Ch]
  float *v21; // [esp+7Ch] [ebp-8h] BYREF
  int v22; // [esp+80h] [ebp-4h]
  int v23; // [esp+8Ch] [ebp+8h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_EnergySplash", 0, "Particle/Effect_Rendering", 0, 4);
  v2 = *a2;
  v14 = 3;
  v4 = 2.0 * a2[2];
  v5 = a2[1] * 2.0;
  v17 = v2 * 2.0 + *a1;
  v18 = v5 + a1[1];
  v19 = v4 + a1[2];
  *(float *)&v14 = 1.0;
  v15 = 1.0;
  v16 = 1.0;
  v13 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  sub_1008DCF0(
    a1,
    a2,
    64.0,
    0.0,
    0.75,
    1.0,
    0.0,
    0.40000001,
    v13,
    0.0,
    (float *)0x168,
    0.0,
    (int)&v14,
    COERCE_INT(0.25));
  *(float *)&v14 = 1.0;
  v15 = 1.0;
  v16 = 1.0;
  v12 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  sub_1008DCF0(
    a1,
    a2,
    16.0,
    32.0,
    0.75,
    1.0,
    0.0,
    0.40000001,
    v12,
    0.0,
    (float *)0x168,
    0.0,
    (int)&v14,
    COERCE_INT(0.5));
  v6 = 0;
  v23 = 0;
  v7 = sub_100F32D0(&v21, (int)"C_EntityDissolve");
  v8 = *v7;
  if ( *v7 )
  {
    sub_100F2950(*v7);
    v23 = (int)v8;
    v6 = (int)v8;
  }
  if ( v21 )
    sub_100F2FF0((int)v21);
  sub_100F3060(v6, a1);
  if ( !dword_10445298 )
    dword_10445298 = sub_100F29B0(v6, (int)a1, v6, "effects/spark");
  v22 = 0;
  while ( 1 )
  {
    v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -8.0,
            8.0);
    v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -8.0,
            8.0);
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.0,
           4.0);
    v17 = *a1 + v17;
    v18 = a1[1] + v18;
    v19 = v9 + a1[2];
    v10 = sub_100F2B60(v6, v6, 60, dword_10445298, &v17);
    if ( !v10 )
      break;
    sub_100EB300(-4.0, 4.0);
    sub_100EB300(-4.0, 4.0);
    *(float *)&v20 = -4.0;
    sub_100EB300(16.0, 64.0);
    v10[6] = -4.0;
    v10[7] = *(float *)&v20;
    v10[8] = 16.0;
    v20 = (int)((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 2.0,
                 4.0);
    *((_BYTE *)v10 + 53) = v20;
    v10[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.40000001,
                0.60000002);
    v10[11] = 0.0;
    v10[9] = (float)sub_100EB330(0, 360);
    sub_100EB300(-4.0, 4.0);
    v11 = v22;
    v10[14] = -4.0;
    *((_BYTE *)v10 + 48) = -1;
    *((_BYTE *)v10 + 49) = -1;
    *((_BYTE *)v10 + 50) = -1;
    *((_BYTE *)v10 + 51) = -1;
    *((_BYTE *)v10 + 52) = 0;
    *((_BYTE *)v10 + 54) = 0;
    v22 = v11 + 1;
    if ( v11 + 1 >= 8 )
      break;
    v6 = v23;
  }
  if ( v23 )
    sub_100F2FF0(v23);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
