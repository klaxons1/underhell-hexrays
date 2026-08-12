void __thiscall sub_1020E590(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // ebx
  int v9; // ebp
  double v10; // st6
  float *v11; // ecx
  int v12; // edx
  double v13; // st7
  double v14; // st7
  double v15; // st7
  float *v16; // ebx
  bool v17; // zf
  double v18; // st7
  double v19; // st6
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st5
  double v24; // st1
  double v25; // st7
  double v26; // rt2
  double v27; // st1
  double v28; // st4
  double v29; // st6
  double v30; // st7
  double v31; // st5
  double v32; // st4
  double v33; // st3
  double v34; // st7
  double v35; // rt1
  double v36; // st3
  double v37; // st7
  double v38; // st5
  double v39; // st6
  float v40; // [esp+4h] [ebp-88h]
  float v41; // [esp+8h] [ebp-84h]
  float v42; // [esp+Ch] [ebp-80h]
  float v43; // [esp+10h] [ebp-7Ch]
  float *v44; // [esp+24h] [ebp-68h]
  float *v45; // [esp+28h] [ebp-64h]
  float v46; // [esp+2Ch] [ebp-60h] BYREF
  __int64 v47; // [esp+30h] [ebp-5Ch]
  float v48; // [esp+38h] [ebp-54h]
  __int64 v49; // [esp+3Ch] [ebp-50h]
  float v50; // [esp+44h] [ebp-48h] BYREF
  __int64 v51; // [esp+48h] [ebp-44h]
  int v52[3]; // [esp+50h] [ebp-3Ch] BYREF
  int v53[12]; // [esp+5Ch] [ebp-30h] BYREF
  float *v54; // [esp+90h] [ebp+4h]

  for ( ; a4; ++a3 )
  {
    --a4;
    v8 = a3 / 4;
    v9 = a3 & 3;
    v45 = (float *)(*(_DWORD *)(a2 + 6100) + 4 * (v9 + a3 / 4 * *(_DWORD *)(a2 + 6356)));
    v10 = *v45;
    if ( v10 >= *(float *)(this + 84) && v10 < *(float *)(this + 88)
      || -1.0 == *(float *)(this + 84)
      || -1.0 == *(float *)(this + 88) )
    {
      v11 = (float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6068)
                    + 4 * (v9 + v8 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6324)));
      v12 = *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6068)
          + 4 * (v9 + v8 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6324));
      v43 = *(float *)(this + 72);
      v13 = *(float *)(this + 60);
      v46 = flt_10459240;
      v42 = v13;
      v54 = (float *)v12;
      v41 = *(float *)(this + 56);
      v14 = *(float *)(this + 52);
      v47 = qword_10459244;
      v40 = v14;
      v44 = v11;
      v46 = sub_100260E0(*v11, v40, v41, v42, v43);
      *(float *)&v47 = sub_100260E0(
                         *v44,
                         *(float *)(this + 52),
                         *(float *)(this + 56),
                         *(float *)(this + 64),
                         *(float *)(this + 76));
      v15 = sub_100260E0(
              *v44,
              *(float *)(this + 52),
              *(float *)(this + 56),
              *(float *)(this + 68),
              *(float *)(this + 80));
      *((float *)&v47 + 1) = v15;
      if ( *(_DWORD *)(this + 48) )
      {
        if ( *(_BYTE *)(this + 92) )
        {
          v38 = v54[4];
          v39 = v54[8];
          v46 = *v54 * v46;
          *(float *)&v47 = v38 * *(float *)&v47;
          *((float *)&v47 + 1) = v15 * v39;
        }
        *v54 = v46;
        v54[4] = *(float *)&v47;
        v54[8] = *((float *)&v47 + 1);
      }
      else
      {
        v16 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v9 + v8 * *(_DWORD *)(a2 + 6332)));
        if ( *(_BYTE *)(this + 100) )
        {
          sub_101F8FA0((char *)a2, *(_DWORD *)(this + 96), *v45, (float *)v53);
          v50 = flt_10459240;
          v51 = qword_10459244;
          sub_101ED860(&v46, (float *)v53, &v50);
          v46 = v50;
          v17 = *(_BYTE *)(this + 92) == 0;
          *(float *)&v47 = *(float *)&v51;
          *((float *)&v47 + 1) = *((float *)&v51 + 1);
          if ( v17 )
          {
            v37 = v50;
          }
          else
          {
            v32 = v54[8];
            v33 = v50 * *v54;
            v34 = v54[4];
            v46 = v33;
            v35 = v33;
            v36 = v34;
            v37 = v35;
            *(float *)&v47 = *(float *)&v51 * v36;
            *((float *)&v47 + 1) = *((float *)&v51 + 1) * v32;
          }
          *v54 = v37;
          v54[4] = *(float *)&v47;
          v54[8] = *((float *)&v47 + 1);
          *v16 = v46;
          v16[4] = *(float *)&v47;
          v16[8] = *((float *)&v47 + 1);
        }
        else
        {
          sub_101F8ED0(a2, *(_DWORD *)(this + 96), *v45, (float *)v52);
          v17 = *(_BYTE *)(this + 92) == 0;
          v18 = *(float *)v52 + v46;
          v46 = v18;
          v48 = v46;
          v19 = *(float *)&v52[1] + *(float *)&v47;
          *(float *)&v47 = v19;
          *((float *)&v47 + 1) = *(float *)&v52[2] + *((float *)&v47 + 1);
          v49 = v47;
          if ( v17 )
          {
            v28 = v18;
            v30 = *(float *)&v49;
            v29 = v48;
            v31 = *((float *)&v49 + 1);
          }
          else
          {
            v20 = v54[4];
            v21 = v54[8];
            v22 = *v16;
            v23 = v16[8];
            v24 = v18 * *v54;
            v25 = v16[4];
            v46 = v24;
            v26 = v24;
            v27 = v20;
            v28 = v26;
            *(float *)&v47 = v19 * v27;
            *((float *)&v47 + 1) = v21 * *((float *)&v47 + 1);
            v29 = v22 * v48;
            v30 = v25 * *(float *)&v49;
            v31 = v23 * *((float *)&v49 + 1);
          }
          *v54 = v28;
          v54[4] = *(float *)&v47;
          v54[8] = *((float *)&v47 + 1);
          *v16 = v29;
          v16[4] = v30;
          v16[8] = v31;
        }
      }
    }
  }
}
