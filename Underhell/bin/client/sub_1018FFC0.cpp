void __userpurge sub_1018FFC0(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, float a4)
{
  int v5; // esi
  float *v6; // eax
  double v7; // st7
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  float *v11; // eax
  float *v12; // esi
  int v13; // eax
  unsigned __int8 v14; // al
  double v15; // st7
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  float *v18; // esi
  float *v19; // eax
  int v20; // eax
  double X; // st7
  int v22; // ebx
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double (__thiscall *v26)(int); // eax
  double v27; // st7
  double v28; // st7
  int (__thiscall *v29)(int); // eax
  float *v30; // eax
  int v31; // esi
  int v32; // eax
  float *v33; // eax
  float *v34; // esi
  char v35; // al
  double v36; // st7
  float *X_4; // [esp+24h] [ebp-54h]
  float v40[3]; // [esp+34h] [ebp-44h] BYREF
  float v41[3]; // [esp+40h] [ebp-38h] BYREF
  float v42[3]; // [esp+4Ch] [ebp-2Ch] BYREF
  float v43; // [esp+58h] [ebp-20h] BYREF
  float v44; // [esp+5Ch] [ebp-1Ch]
  float v45; // [esp+60h] [ebp-18h]
  int v46; // [esp+64h] [ebp-14h]
  int v47; // [esp+68h] [ebp-10h]
  int v48; // [esp+6Ch] [ebp-Ch]
  float v49; // [esp+70h] [ebp-8h]
  int v50; // [esp+74h] [ebp-4h]

  if ( (unsigned __int8)sub_10190E10() && a4 > 0.0 )
  {
    v5 = *(_DWORD *)(a1 + 1212);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    sub_100F3060(v5, v6);
    v7 = *(float *)(a1 + 1192) * 4.0;
    v8 = 1;
    v50 = 1;
    v49 = v7 * a4;
    while ( 1 )
    {
      v9 = *(_DWORD *)(a1 + 1212);
      X_4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
      v10 = sub_100F29B0(v9, a1, v9, "effects/strider_muzzle");
      v11 = sub_100F2B60(v9, v9, 60, v10, X_4);
      v12 = v11;
      if ( !v11 )
        break;
      v11[6] = flt_10459240;
      *(_QWORD *)(v11 + 7) = qword_10459244;
      v11[10] = 0.1;
      v11[11] = 0.0;
      v13 = sub_100EB330(0, 360);
      v48 = v13;
      v12[12] = NAN;
      v12[9] = (float)v13;
      *((_BYTE *)v12 + 52) = 0;
      v12[14] = 0.0;
      if ( v8 - 1 >= 2 )
      {
        v15 = (double)v50 * v49;
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 20) )
        {
          v17 = (int)v15;
          *((_BYTE *)v12 + 53) = v17;
          v48 = (int)((double)v17 + (double)v17);
          *((_BYTE *)v12 + 54) = v48;
        }
        else
        {
          v16 = (int)v15;
          *((_BYTE *)v12 + 53) = v16;
          v48 = (int)((double)v16 * 4.0);
          *((_BYTE *)v12 + 54) = v48;
          v12[10] = 0.25;
        }
      }
      else
      {
        v14 = (int)((double)v50 * v49);
        *((_BYTE *)v12 + 53) = v14;
        v48 = (int)((double)v14 + (double)v14);
        *((_BYTE *)v12 + 54) = v48;
      }
      v50 = ++v8;
      if ( v8 - 1 >= 2 )
      {
        if ( (*(_BYTE *)(a1 + 1208) & 1) == 0 )
        {
          v18 = *(float **)(a1 + 1216);
          v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
          sub_100F0D40(v18, v19);
          v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 40))(a1);
          sub_101EE040(v20, v42, v41, v40);
          X = a4 * 4.0;
          *(float *)&v48 = X;
          v22 = 0;
          v46 = (int)floor(X);
          if ( v46 > 0 )
          {
            v49 = a4 * 64.0;
            do
            {
              v23 = ((double (__thiscall *)(int, int, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      v48,
                      LODWORD(v49),
                      a3,
                      a2);
              v43 = v42[0] * v23;
              v44 = v42[1] * v23;
              v45 = v42[2] * v23;
              if ( v49 == *(float *)&v48 )
              {
                if ( v23 < v49 )
                  v24 = 6.0;
                else
                  v24 = 1.0;
              }
              else
              {
                v25 = (v23 - *(float *)&v48) / (v49 - *(float *)&v48);
                if ( v25 >= 0.0 )
                {
                  if ( v25 > 1.0 )
                    v25 = 1.0;
                }
                else
                {
                  v25 = 0.0;
                }
                v24 = 6.0 - v25 * 5.0;
              }
              v26 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
              *(float *)&v50 = 4.0 * v24;
              *(float *)&v47 = v24 * -4.0;
              a2 = v50;
              a3 = v47;
              v27 = v26(dword_10413198);
              v43 = v41[0] * v27 + v43;
              v44 = v41[1] * v27 + v44;
              v45 = v27 * v41[2] + v45;
              v28 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      v47,
                      v50);
              v29 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 36);
              v43 = v40[0] * v28 + v43;
              v44 = v40[1] * v28 + v44;
              v45 = v28 * v40[2] + v45;
              v30 = (float *)v29(a1);
              v31 = *(_DWORD *)(a1 + 1216);
              v43 = *v30 + v43;
              v44 = v30[1] + v44;
              v45 = v30[2] + v45;
              v32 = sub_100F29B0(v31, a1, v31, "effects/strider_muzzle");
              v33 = sub_100F2B60(v31, v31, 60, v32, &v43);
              v34 = v33;
              if ( !v33 )
                break;
              v33[6] = 0.0;
              v33[7] = 0.0;
              v33[8] = 8.0;
              v33[10] = 0.5;
              v33[11] = 0.0;
              v33[9] = (float)sub_100EB330(0, 360);
              v34[14] = 0.0;
              v47 = (int)(a4 * 255.0);
              v35 = v47;
              *((_BYTE *)v34 + 48) = v47;
              *((_BYTE *)v34 + 49) = v35;
              *((_BYTE *)v34 + 50) = v35;
              *((_BYTE *)v34 + 51) = v35;
              *((_BYTE *)v34 + 52) = 0;
              v36 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      1.0,
                      2.0);
              ++v22;
              *((_BYTE *)v34 + 54) = 0;
              v47 = (int)v36;
              *((_BYTE *)v34 + 53) = (int)v36;
            }
            while ( v22 < v46 );
          }
        }
        return;
      }
    }
  }
}
