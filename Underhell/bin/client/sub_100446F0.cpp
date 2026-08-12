void __usercall sub_100446F0(int a1@<ecx>, int a2@<ebx>, float *a3@<esi>)
{
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // esi
  float *v9; // eax
  double i; // st7
  int (__thiscall *v11)(int, int, float *); // edx
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  char v19; // al
  float v20; // [esp+28h] [ebp-54h]
  float v22; // [esp+2Ch] [ebp-50h]
  float v24; // [esp+34h] [ebp-48h]
  float v25; // [esp+38h] [ebp-44h]
  float v26[3]; // [esp+40h] [ebp-3Ch] BYREF
  float v27; // [esp+4Ch] [ebp-30h]
  float v28; // [esp+50h] [ebp-2Ch]
  float v29; // [esp+54h] [ebp-28h]
  float v30; // [esp+58h] [ebp-24h]
  float v31; // [esp+5Ch] [ebp-20h]
  float v32; // [esp+60h] [ebp-1Ch]
  float v33; // [esp+64h] [ebp-18h] BYREF
  float v34; // [esp+68h] [ebp-14h]
  float v35; // [esp+6Ch] [ebp-10h]
  int v36; // [esp+70h] [ebp-Ch]
  float v37; // [esp+74h] [ebp-8h]
  int v38; // [esp+78h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 320) >= 3u )
  {
    if ( *(_BYTE *)(a1 + 4576) )
    {
      *(float *)(a1 + 4580) = 0.03125;
      *(float *)(a1 + 4584) = 0.0;
      v22 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 268))(a1) + 8) + 256.0;
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 268))(a1);
      v5 = *(float *)(v4 + 8);
      v20 = *(float *)(v4 + 8);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 268))(a1);
      sub_10076A50(v6, v20, v22);
      *(float *)(a1 + 4572) = v5;
      *(_BYTE *)(a1 + 4576) = 0;
    }
    if ( *(_DWORD *)(a1 + 4588) )
      goto LABEL_13;
    v7 = sub_100A6650("splish");
    v8 = v7;
    if ( v7 != *(_DWORD *)(a1 + 4588) )
    {
      if ( v7 )
        sub_100F2950(v7);
      if ( *(_DWORD *)(a1 + 4588) )
        sub_100F2FF0();
      *(_DWORD *)(a1 + 4588) = v8;
    }
    if ( v8 )
    {
LABEL_13:
      sub_100392A0((char *)a1, (int)v26, 0, 0);
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 268))(a1);
      v33 = *v9;
      v34 = v9[1];
      v35 = v9[2];
      sub_100F3060(&v33);
      for ( i = *((float *)off_103DC81C + 4); i >= *(float *)(a1 + 4584); i = v37 )
      {
        v37 = i - *(float *)(a1 + 4584);
        *(float *)(a1 + 4584) = *(float *)(a1 + 4580);
        v38 = sub_10115FB0();
        v27 = (double)v38 * 0.000030518509 * 256.0 - 128.0;
        v38 = sub_10115FB0();
        v28 = (double)v38 * 0.000030518509 * 256.0 - 128.0;
        v38 = sub_10115FB0();
        v11 = *(int (__thiscall **)(int, int, float *))(*(_DWORD *)a1 + 268);
        v29 = (double)v38 * 0.000030518509 * 256.0 - 128.0;
        v30 = v26[0] * 128.0;
        v31 = v26[1] * 128.0;
        v32 = 128.0 * v26[2];
        v12 = (float *)v11(a1, a2, a3);
        v13 = v12[1] + v31 + v28;
        v14 = v12[2] + v32 + v29;
        v33 = *v12 + v30 + v27;
        v34 = v13;
        v35 = v14;
        if ( v14 > *(float *)(a1 + 4572) )
          v35 = *(float *)(a1 + 4572) - 8.0;
        a3 = &v33;
        a2 = 1;
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        v16 = sub_100F2B60(60, dword_1043DF00[v15], 0);
        v17 = v16;
        if ( v16 )
        {
          *(float *)(v16 + 44) = 0.0;
          *(float *)(v16 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   2.0,
                                   4.0);
          v38 = sub_10115FB0();
          v24 = (double)v38 * 0.000030518509 * 4.0 - 2.0;
          v38 = sub_10115FB0();
          v25 = (double)v38 * 0.000030518509 * 4.0 - 2.0;
          v18 = sub_10115FB0();
          v38 = v18;
          *(float *)(v17 + 24) = v24;
          *(float *)(v17 + 28) = v25;
          *(float *)(v17 + 32) = (double)v18 * 0.000030518509 * 4.0 - 2.0;
          v38 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 128);
          v36 = (int)(double)v38;
          v19 = v36;
          *(_BYTE *)(v17 + 48) = v36;
          *(_BYTE *)(v17 + 49) = v19;
          *(_BYTE *)(v17 + 50) = v19;
          *(_DWORD *)(v17 + 51) = 16843007;
          v36 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
          *(float *)(v17 + 36) = (float)v36;
          *(float *)(v17 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   -0.5,
                                   0.5);
        }
      }
      *(float *)(a1 + 4584) = *(float *)(a1 + 4584) - i;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 4576) = 1;
  }
}
