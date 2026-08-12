void __thiscall sub_1016D240(int *this, int a2, int a3)
{
  float *v4; // eax
  float *v5; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  char v10; // al
  unsigned __int8 v11; // al
  int v12; // edi
  float *v13; // esi
  double v14; // st7
  int v15; // eax
  float *v16; // eax
  float *v17; // esi
  double v18; // st7
  char v19; // al
  int v20; // eax
  _BYTE v21[12]; // [esp+88h] [ebp-5Ch] BYREF
  float v22[3]; // [esp+94h] [ebp-50h] BYREF
  float v23[3]; // [esp+A0h] [ebp-44h] BYREF
  float v24; // [esp+ACh] [ebp-38h] BYREF
  float v25; // [esp+B0h] [ebp-34h]
  float v26; // [esp+B4h] [ebp-30h]
  float v27; // [esp+B8h] [ebp-2Ch] BYREF
  float v28; // [esp+BCh] [ebp-28h]
  float v29; // [esp+C0h] [ebp-24h]
  float v30; // [esp+C4h] [ebp-20h] BYREF
  float v31; // [esp+C8h] [ebp-1Ch]
  float v32; // [esp+CCh] [ebp-18h]
  int v33; // [esp+D0h] [ebp-14h]
  int *v34; // [esp+D4h] [ebp-10h]
  float v35; // [esp+D8h] [ebp-Ch]
  int v36; // [esp+DCh] [ebp-8h]
  float *v37; // [esp+E0h] [ebp-4h] BYREF
  int v38; // [esp+F0h] [ebp+Ch]

  v34 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Pistol_Player", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v37, (int)"MuzzleFlash_Pistol_Player");
  sub_100F2A30(v37, 1u);
  sub_1016B9E0(this);
  sub_10175EC0(a2, a3, &v27, v21);
  v23[0] = v27 + 4.0;
  v23[1] = v28 + 4.0;
  v23[2] = v29 + 4.0;
  v22[0] = v27 - 4.0;
  v22[1] = v28 - 4.0;
  v22[2] = v29 - 4.0;
  sub_100EC3F0((int)(v37 + 2), v22, v23, 1);
  sub_101EE040(v21, &v30, 0, 0);
  v24 = v30 * 8.0 + v27;
  v25 = v31 * 8.0 + v28;
  v26 = 8.0 * v32 + v29;
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3) )
  {
LABEL_4:
    v35 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            1.0,
            1.25);
    v12 = 7;
    v36 = 1;
    v38 = 7;
    do
    {
      v13 = v37;
      v14 = (double)v36 * 4.0 * v35;
      v24 = v30 * v14 + v27;
      v25 = v31 * v14 + v28;
      v26 = v14 * v32 + v29;
      v15 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
      v16 = sub_100F2B60((int)v13, (int)v13, 60, v34[v15 + 39], &v24);
      v17 = v16;
      if ( !v16 )
        break;
      v16[11] = 0.0;
      v16[10] = 0.0099999998;
      v16[6] = 0.0;
      v16[7] = 0.0;
      v16[8] = 0.0;
      *((_WORD *)v16 + 24) = -1;
      *((_BYTE *)v16 + 50) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                               dword_10413198,
                               0,
                               55)
                           - 56;
      *(_WORD *)((char *)v17 + 51) = -1;
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              6.0,
              8.0);
      v33 = (int)(v18 * (double)v38 * 0.16666667 * v35);
      v19 = v33;
      *((_BYTE *)v17 + 53) = v33;
      *((_BYTE *)v17 + 54) = v19;
      v20 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      ++v36;
      v38 = --v12;
      v17[9] = (float)v20;
      v17[14] = 0.0;
    }
    while ( v12 > 2 );
    goto LABEL_7;
  }
  v4 = sub_100F2B60((int)v37, (int)this, 60, dword_1043DF20[0], &v24);
  v5 = v4;
  if ( v4 )
  {
    v4[11] = 0.0;
    v4[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.25,
               0.5);
    v5[6] = 0.0;
    v5[7] = 0.0;
    v5[8] = 0.0;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           48.0,
           64.0);
    v7 = v30 * v6;
    v8 = v31 * v6;
    v9 = v6 * v32;
    v5[6] = v7;
    v5[7] = v8;
    v5[8] = v9;
    v5[8] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              4.0,
              16.0)
          + v5[8];
    v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 200, 255);
    *((_BYTE *)v5 + 48) = v10;
    *((_BYTE *)v5 + 49) = v10;
    *((_BYTE *)v5 + 50) = v10;
    *((_BYTE *)v5 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                            dword_10413198,
                            64,
                            128);
    *((_BYTE *)v5 + 52) = 0;
    v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2, 4);
    *((_BYTE *)v5 + 53) = v11;
    LODWORD(v35) = (int)((double)v11 * 4.0);
    *((_BYTE *)v5 + 54) = LOBYTE(v35);
    v5[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v5[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               -0.1,
               0.1);
    goto LABEL_4;
  }
LABEL_7:
  if ( v37 )
    sub_100F2FF0((int)v37);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
