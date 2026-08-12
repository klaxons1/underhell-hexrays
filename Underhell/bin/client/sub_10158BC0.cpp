void __userpurge sub_10158BC0(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, float a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // rt0
  double v9; // st7
  double v10; // st6
  float v11; // eax
  double v12; // st5
  double v13; // st4
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st3
  double v18; // st7
  float *v19; // eax
  double v20; // st6
  float *v21; // esi
  double v22; // st5
  double v23; // st4
  double v24; // st6
  double v25; // st4
  double v26; // rt0
  char v27; // dl
  float v28; // eax
  bool v29; // cc
  float *v30; // ecx
  double i; // st7
  float *v32; // eax
  double v33; // st7
  double v34; // st6
  char v35; // al
  double v36; // st7
  int v37; // eax
  float v38[20]; // [esp+24h] [ebp-FCh] BYREF
  float v39[3]; // [esp+74h] [ebp-ACh] BYREF
  float v40[19]; // [esp+80h] [ebp-A0h] BYREF
  _DWORD v41[3]; // [esp+CCh] [ebp-54h] BYREF
  float v42[3]; // [esp+D8h] [ebp-48h] BYREF
  float v43; // [esp+E4h] [ebp-3Ch] BYREF
  float v44; // [esp+E8h] [ebp-38h]
  float v45; // [esp+ECh] [ebp-34h]
  float v46; // [esp+F0h] [ebp-30h]
  float v47; // [esp+F4h] [ebp-2Ch]
  float v48; // [esp+F8h] [ebp-28h]
  float v49; // [esp+FCh] [ebp-24h]
  int v50; // [esp+100h] [ebp-20h]
  int v51; // [esp+104h] [ebp-1Ch]
  float v52; // [esp+108h] [ebp-18h]
  int v53; // [esp+10Ch] [ebp-14h]
  float *v54; // [esp+110h] [ebp-10h]
  int v55; // [esp+114h] [ebp-Ch]
  void *v56; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v55 = a2;
  v56 = retaddr;
  if ( *(_DWORD *)(a1 + 236) )
  {
    if ( *(int *)(a1 + 3860) < 128 )
    {
      v46 = a4;
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = v46;
          if ( v46 < (double)*(float *)(a1 + 272) )
          {
            *(float *)(a1 + 272) = *(float *)(a1 + 272) - v5;
            goto LABEL_25;
          }
          v6 = v5 - *(float *)(a1 + 272);
          v52 = 0.0;
          v46 = v6;
          *(float *)(a1 + 272) = *(float *)(a1 + 268);
          if ( *(_DWORD *)(a1 + 3860) )
            break;
          v7 = 1000.0 * *(float *)(a1 + 264);
          v8 = *(float *)(a1 + 260) * 1000.0;
          v42[0] = *(float *)(a1 + 256) * 1000.0 + *(float *)(a1 + 244);
          v42[1] = v8 + *(float *)(a1 + 248);
          v42[2] = v7 + *(float *)(a1 + 252);
          sub_1000E430(v38, (float *)(a1 + 244), v42);
          sub_1012D400(v41, 0, 0);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
            dword_104131A0,
            v38,
            16395,
            v41,
            v39);
          if ( *(_DWORD *)(dword_10439134 + 48) )
            sub_10130AC0(v39, v40, 255, 0, 0, 1, 5.0);
          v9 = 1.0;
          if ( v40[8] < 1.0 )
          {
            v10 = flt_103E8EF8 - 1.0;
            LODWORD(v11) = a1 + 28 * *(_DWORD *)(a1 + 3860) + 276;
            v12 = v40[3] * v10;
            v52 = v11;
            v13 = v40[4] * v10;
            v14 = v10 * v40[5];
            v15 = v12 + v40[0];
            v16 = v13 + v40[1];
            v17 = v40[2];
            *(_BYTE *)(LODWORD(v11) + 24) = 0;
            *(float *)LODWORD(v11) = v15;
            *(float *)(LODWORD(v11) + 4) = v16;
            *(float *)(LODWORD(v11) + 8) = v14 + v17;
            goto LABEL_22;
          }
        }
        *(float *)&v50 = 0.0;
        if ( dword_103E8FD4 > 0 )
        {
          do
          {
            v51 = a1 + 28 * (sub_10115FB0() % *(_DWORD *)(a1 + 3860)) + 276;
            a3 = sub_10115FB0() % 8;
            v53 = a3;
            if ( ((unsigned __int8)(1 << a3) & *(_BYTE *)(v51 + 24)) == 0 )
            {
              v18 = flt_103E8EF4;
              v19 = (float *)((char *)&unk_103E8F38 + 12 * a3);
              v20 = flt_103E8EF4 * *v19;
              v54 = 0;
              v21 = (float *)&unk_103E8F40;
              v22 = v19[1] * flt_103E8EF4;
              v23 = v20 + *(float *)v51;
              v24 = v19[2] * flt_103E8EF4;
              v47 = v23;
              v48 = v22 + *(float *)(v51 + 4);
              v49 = v24 + *(float *)(v51 + 8);
              while ( 1 )
              {
                v25 = *v21;
                v26 = *(v21 - 1) * v18;
                v43 = *(v21 - 2) * v18 + v47;
                v44 = v26 + v48;
                v45 = v18 * v25 + v49;
                if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, &v43, 0) & 1) != 0 )
                  v54 = (float *)((char *)v54 + 1);
                v21 += 3;
                if ( (int)v21 >= (int)&off_103E8FA0 )
                  break;
                v18 = flt_103E8EF4;
              }
              v27 = v53;
              a3 = v51;
              *(_BYTE *)(v51 + 24) |= 1 << v53;
              if ( v54 && v54 != (float *)8 )
              {
                a3 = a1 + 28 * *(_DWORD *)(a1 + 3860) + 276;
                *(float *)a3 = v47;
                *(float *)(a3 + 4) = v48;
                *(float *)(a3 + 8) = v49;
                v52 = *(float *)&a3;
                *(_BYTE *)(a3 + 24) = 1 << (7 - v27);
              }
            }
            ++v50;
          }
          while ( v50 < dword_103E8FD4 );
          v9 = 1.0;
LABEL_22:
          v28 = v52;
          if ( v52 != 0.0 )
          {
            *(float *)(LODWORD(v52) + 20) = 0.0;
            *(float *)(LODWORD(v28) + 16) = 0.0;
            *(float *)(LODWORD(v28) + 12) = v9;
            ++*(_DWORD *)(a1 + 3860);
          }
        }
      }
    }
LABEL_25:
    v29 = *(_DWORD *)(a1 + 3860) <= 0;
    v51 = 0;
    if ( !v29 )
    {
      v30 = (float *)(a1 + 292);
      v54 = (float *)(a1 + 292);
      do
      {
        for ( i = a4; i >= *v30; i = *(float *)&v50 )
        {
          *(float *)&v50 = i - *v30;
          *v30 = *(v30 - 1);
          *(float *)&a3 = COERCE_FLOAT(sub_100F06D0(a1 + 4, a3, 60, *(_DWORD *)(a1 + 240)));
          if ( *(float *)&a3 != 0.0 )
          {
            v32 = v54;
            *(float *)(a3 + 24) = *(v54 - 4);
            *(float *)(a3 + 28) = *(v32 - 3);
            *(float *)(a3 + 32) = *(v32 - 2);
            v52 = flt_103E8FD0 * 0.5;
            v53 = sub_10115FB0();
            v43 = (double)v53 * 0.000030518509 * v52;
            v53 = sub_10115FB0();
            v44 = (double)v53 * 0.000030518509 * v52;
            v53 = sub_10115FB0();
            v33 = (double)v53 * 0.000030518509 * v52 + flt_103E8FD0 * flt_103E8F04;
            v34 = flt_103E8F00 * flt_103E8FD0 + v44;
            *(float *)(a3 + 36) = flt_103E8EFC * flt_103E8FD0 + v43;
            *(float *)(a3 + 40) = v34;
            *(float *)(a3 + 44) = v33;
            v35 = sub_10115FB0();
            *(float *)(a3 + 48) = 0.0;
            *(_BYTE *)(a3 + 56) = v35 & 1;
          }
          v30 = v54;
        }
        v36 = *v30 - i;
        v37 = v51 + 1;
        v30 += 7;
        *(v30 - 7) = v36;
        v51 = v37;
        v54 = v30;
      }
      while ( v37 < *(_DWORD *)(a1 + 3860) );
    }
  }
}
