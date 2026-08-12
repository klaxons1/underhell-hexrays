char __usercall sub_10190470@<al>(int a1@<ecx>, float a2@<ebx>, float a3@<esi>)
{
  float *v4; // eax
  int v5; // esi
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  float *v11; // esi
  double v12; // st6
  double v13; // st7
  int v14; // eax
  int v15; // ecx
  void (__thiscall *v16)(int, _DWORD); // edx
  int v17; // ebx
  int v18; // esi
  int v19; // eax
  float *v20; // esi
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  int v26; // eax
  unsigned __int8 v27; // al
  double v28; // st7
  int v29; // eax
  double v30; // st7
  float *v31; // esi
  float *v32; // eax
  int v33; // ebx
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st7
  double v38; // st7
  double (*v39)(void); // edx
  double v40; // st7
  double v41; // st7
  int (__thiscall *v42)(int); // edx
  float *v43; // eax
  int v44; // esi
  int v45; // eax
  float *v46; // esi
  float v48; // [esp+1Ch] [ebp-50h]
  float v49; // [esp+1Ch] [ebp-50h]
  float v50; // [esp+20h] [ebp-4Ch]
  float *v51; // [esp+20h] [ebp-4Ch]
  float v52; // [esp+20h] [ebp-4Ch]
  float v53; // [esp+20h] [ebp-4Ch]
  float *v54; // [esp+24h] [ebp-48h]
  float v57[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v58[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v59; // [esp+48h] [ebp-24h] BYREF
  float v60; // [esp+4Ch] [ebp-20h]
  float v61; // [esp+50h] [ebp-1Ch]
  float v62; // [esp+54h] [ebp-18h] BYREF
  float v63; // [esp+58h] [ebp-14h]
  float v64; // [esp+5Ch] [ebp-10h]
  int v65; // [esp+60h] [ebp-Ch]
  float v66; // [esp+64h] [ebp-8h]
  int v67; // [esp+68h] [ebp-4h]

  LOBYTE(v4) = sub_10190E10();
  if ( (_BYTE)v4 )
  {
    v5 = *(_DWORD *)(a1 + 1212);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    sub_100F3060(v5, v6);
    v7 = *(_DWORD *)a1;
    v66 = *(float *)(a1 + 1192) * 8.0;
    v8 = (*(int (__thiscall **)(int))(v7 + 40))(a1);
    sub_101EE040(v8, &v59, v58, v57);
    v9 = *(_DWORD *)(a1 + 1212);
    v54 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v10 = sub_100F29B0(v9, a1, v9, "effects/strider_muzzle");
    v4 = sub_100F2B60(v9, v9, 60, v10, v54);
    v11 = v4;
    if ( v4 )
    {
      v12 = 32.0 * v61;
      v13 = v60 * 32.0;
      v4[6] = v59 * 32.0;
      v4[7] = v13;
      v4[8] = v12;
      v4[10] = 0.2;
      v4[11] = 0.0;
      v14 = sub_100EB330(0, 360);
      v67 = v14;
      v11[12] = -1.1801041e-38;
      *((_BYTE *)v11 + 52) = 0;
      v11[9] = (float)v14;
      v11[14] = 0.0;
      LOBYTE(v14) = (int)(v66 * 2.0);
      *((_BYTE *)v11 + 53) = v14;
      v65 = (int)(2.0 * (double)(unsigned __int8)v14);
      LOBYTE(v14) = v65;
      *((_BYTE *)v11 + 54) = v65;
      v15 = *(_DWORD *)(a1 + 1212);
      v16 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 48);
      v65 = (unsigned __int8)v14;
      v50 = (float)(unsigned __int8)v14;
      v16(v15, LODWORD(v50));
      v17 = 1;
      v67 = 1;
      while ( 1 )
      {
        v18 = *(_DWORD *)(a1 + 1212);
        v51 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
        v19 = sub_100F29B0(v18, a1, v18, "effects/combinemuzzle2");
        v4 = sub_100F2B60(v18, v18, 60, v19, v51);
        v20 = v4;
        if ( !v4 )
          break;
        v21 = (double)v67;
        *(float *)&v67 = v21;
        v22 = v21 * 32.0;
        v23 = v59 * v22;
        v24 = v60 * v22;
        v25 = v22 * v61;
        v4[6] = v23;
        v4[7] = v24;
        v4[8] = v25;
        v4[10] = 0.2;
        v4[11] = 0.0;
        v26 = sub_100EB330(0, 360);
        v65 = v26;
        strcpy((char *)v20 + 48, "dddd");
        v20[9] = (float)v26;
        v20[14] = 0.0;
        if ( v17 - 1 >= 1 )
        {
          v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 20);
          v30 = *(float *)&v67 * v66;
          *((_BYTE *)v20 + 54) = 0;
          if ( v29 )
          {
            LOBYTE(v4) = BYTE2(v67);
            v65 = (int)v30;
            *((_BYTE *)v20 + 53) = (int)v30;
          }
          else
          {
            v65 = (int)v30;
            LOBYTE(v4) = (int)v30;
            *((_BYTE *)v20 + 53) = (_BYTE)v4;
            v20[10] = 0.25;
          }
        }
        else
        {
          v27 = (int)(*(float *)&v67 * v66);
          *((_BYTE *)v20 + 53) = v27;
          v28 = (double)v27 + (double)v27;
          LOBYTE(v4) = BYTE2(v67);
          v65 = (int)v28;
          *((_BYTE *)v20 + 54) = (int)v28;
        }
        v67 = ++v17;
        if ( v17 - 1 >= 2 )
        {
          if ( (*(_BYTE *)(a1 + 1208) & 1) == 0 )
          {
            v31 = *(float **)(a1 + 1216);
            v32 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
            sub_100F0D40(v31, v32);
            v33 = 0;
            do
            {
              v52 = *(float *)(a1 + 1192) * 64.0;
              v48 = *(float *)(a1 + 1192) * 4.0;
              v34 = ((double (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      LODWORD(v48),
                      LODWORD(v52),
                      LODWORD(a2),
                      LODWORD(a3));
              v62 = v59 * v34;
              v63 = v60 * v34;
              v64 = v61 * v34;
              v35 = *(float *)(a1 + 1192) * 4.0;
              v36 = *(float *)(a1 + 1192) * 64.0;
              if ( v36 == v35 )
              {
                if ( v36 > v34 )
                  v37 = 6.0;
                else
                  v37 = 1.0;
              }
              else
              {
                v38 = (v34 - v35) / (v36 - v35);
                if ( v38 >= 0.0 )
                {
                  if ( v38 > 1.0 )
                    v38 = 1.0;
                }
                else
                {
                  v38 = 0.0;
                }
                v37 = 6.0 - v38 * 5.0;
              }
              v39 = *(double (**)(void))(*(_DWORD *)dword_10413198 + 4);
              *(float *)&v65 = v37 + v37;
              v66 = v37 * -2.0;
              a3 = (v37 + v37) * *(float *)(a1 + 1192);
              a2 = v37 * -2.0 * *(float *)(a1 + 1192);
              v40 = v39();
              v62 = v58[0] * v40 + v62;
              v63 = v58[1] * v40 + v63;
              v64 = v40 * v58[2] + v64;
              v53 = *(float *)&v65 * *(float *)(a1 + 1192);
              v49 = v66 * *(float *)(a1 + 1192);
              v41 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      LODWORD(v49),
                      LODWORD(v53));
              v42 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 36);
              v62 = v57[0] * v41 + v62;
              v63 = v57[1] * v41 + v63;
              v64 = v41 * v57[2] + v64;
              v43 = (float *)v42(a1);
              v44 = *(_DWORD *)(a1 + 1216);
              v62 = v62 + *v43;
              v63 = v43[1] + v63;
              v64 = v43[2] + v64;
              v45 = sub_100F29B0(v44, a1, v44, "effects/combinemuzzle2_dark");
              v4 = sub_100F2B60(v44, v44, 60, v45, &v62);
              v46 = v4;
              if ( !v4 )
                break;
              v4[6] = 0.0;
              v4[7] = 0.0;
              v4[8] = 2.0;
              v4[10] = 0.5;
              v4[11] = 0.0;
              v4 = (float *)sub_100EB330(0, 360);
              v65 = (int)v4;
              ++v33;
              v46[12] = NAN;
              v46[9] = (float)(int)v4;
              *((_WORD *)v46 + 26) = 256;
              *((_BYTE *)v46 + 54) = 0;
              v46[14] = 0.0;
            }
            while ( v33 < 4 );
          }
          return (char)v4;
        }
      }
    }
  }
  return (char)v4;
}
