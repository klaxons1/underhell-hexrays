void __usercall sub_10195E40(int a1@<ecx>, int a2@<edi>)
{
  float *v3; // esi
  int (__thiscall *v4)(int); // edx
  float *v5; // eax
  int v6; // edx
  double v7; // st7
  int (__thiscall *v8)(int); // eax
  float *v9; // eax
  double v10; // st7
  int v11; // edx
  float *v12; // eax
  int v13; // edx
  float *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  double v18; // st7
  int v19; // ecx
  float *v20; // edi
  int v21; // edi
  float v22; // [esp+28h] [ebp-90h]
  _BYTE v23[44]; // [esp+38h] [ebp-80h] BYREF
  float v24; // [esp+64h] [ebp-54h]
  char v25; // [esp+6Fh] [ebp-49h]
  float v26; // [esp+8Ch] [ebp-2Ch] BYREF
  float v27; // [esp+90h] [ebp-28h]
  float v28; // [esp+94h] [ebp-24h]
  float v29; // [esp+98h] [ebp-20h] BYREF
  float v30; // [esp+9Ch] [ebp-1Ch]
  float v31; // [esp+A0h] [ebp-18h]
  float v32; // [esp+A4h] [ebp-14h]
  float v33; // [esp+A8h] [ebp-10h]
  float v34; // [esp+ACh] [ebp-Ch]
  int v35; // [esp+B0h] [ebp-8h]
  int v36; // [esp+B4h] [ebp-4h]
  int savedregs; // [esp+B8h] [ebp+0h] BYREF

  if ( *(_BYTE *)(a1 + 1180) )
  {
    v3 = (float *)(a1 - 12);
    sub_10038150(a1 - 12);
    v4 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 36);
    v29 = v3[61] * 0.30000001;
    v30 = v3[62] * 0.30000001;
    v31 = 0.30000001 * v3[63];
    v5 = (float *)v4(a1 - 12);
    v6 = *(_DWORD *)v3;
    v26 = *v5 + v29;
    v27 = v5[1] + v30;
    v7 = v5[2] + v31;
    v8 = *(int (__thiscall **)(int))(v6 + 36);
    v28 = v7;
    v9 = (float *)v8(a1 - 12);
    sub_1000FCE0((int)&savedregs, (int)v3, v9, &v26, 1174421507, 0, 0, (int)v23);
    if ( 1.0 != v24 || v25 )
    {
      *(_BYTE *)(a1 + 1180) = 0;
    }
    else
    {
      v35 = sub_100F29B0(*(_DWORD *)(a1 + 1184), a2, (int)v3, "sprites/plasmaember");
      v36 = 12;
      do
      {
        if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 2) )
        {
          v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -28.0,
                  28.0);
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -28.0,
                  28.0);
          v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -28.0,
                  28.0);
          v11 = *(_DWORD *)v3;
          v32 = v10;
          v12 = (float *)(*(int (__thiscall **)(int))(v11 + 36))(a1 - 12);
          v29 = *v12;
          v30 = v12[1];
          v13 = *(_DWORD *)v3;
          v31 = v12[2];
          v14 = (float *)(*(int (__thiscall **)(int))(v13 + 40))(a1 - 12);
          v15 = *(_DWORD *)v3;
          v26 = *v14;
          v16 = (*(int (__thiscall **)(int))(v15 + 40))(a1 - 12);
          v17 = *(_DWORD *)v3;
          v27 = *(float *)(v16 + 4);
          v28 = *(float *)((*(int (__thiscall **)(int))(v17 + 40))(a1 - 12) + 8);
          v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -60.0,
                  120.0);
          v19 = *(_DWORD *)(a1 + 1184);
          v29 = v26 * v18 + v29;
          v30 = v27 * v18 + v30;
          v31 = v18 * v28 + v31;
          v20 = sub_100F2B60(v19, (int)v3, 60, v35, &v29);
          v20[11] = 0.0;
          v20[10] = 0.5;
          sub_10038150(a1 - 12);
          v20[6] = v3[61];
          v20[7] = v3[62];
          v20[8] = v3[63];
          v20[6] = v20[6] + v34;
          v20[7] = v20[7] + v33;
          v20[8] = v20[8] + v32;
          v21 = *(_DWORD *)(a1 + 1184);
          if ( a1 == 12 )
            *(_DWORD *)(v21 + 260) = -1;
          else
            *(_DWORD *)(v21 + 260) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(a1 - 12);
        }
        --v36;
      }
      while ( v36 );
      v22 = *((float *)off_103DC81C + 3) + 0.05;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 408))(a1 - 12, LODWORD(v22));
    }
  }
}
