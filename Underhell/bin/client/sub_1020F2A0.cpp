void __thiscall sub_1020F2A0(int this, int a2, int a3, int a4, int a5, int a6)
{
  float v7; // edx
  float v8; // ecx
  int v9; // eax
  float v10; // edx
  float v11; // ecx
  int v12; // ebp
  double v13; // st6
  float *v14; // edi
  double v15; // st7
  double v16; // st5
  double v17; // st6
  double v18; // st4
  double v19; // st3
  double v20; // st5
  double v21; // st5
  double v22; // st6
  double v23; // rt2
  float *v24; // eax
  double v25; // st4
  double v26; // st3
  double v27; // st2
  double v28; // st1
  double v29; // st5
  double v30; // st6
  double v31; // st7
  double v32; // st3
  double v33; // st4
  double v34; // st2
  double v35; // st1
  double v36; // st7
  double v37; // st6
  double v38; // st7
  double v39; // st4
  double v40; // st4
  double v41; // st3
  double v42; // st2
  double v43; // st4
  double v44; // st3
  double v45; // st2
  double v46; // st1
  double v47; // rtt
  double v48; // st3
  float v49; // [esp+28h] [ebp-78h] BYREF
  __int64 v50; // [esp+2Ch] [ebp-74h]
  float v51; // [esp+34h] [ebp-6Ch] BYREF
  float v52; // [esp+38h] [ebp-68h]
  float v53; // [esp+3Ch] [ebp-64h]
  float v54; // [esp+40h] [ebp-60h] BYREF
  float v55; // [esp+44h] [ebp-5Ch]
  float v56; // [esp+48h] [ebp-58h]
  int v57[3]; // [esp+4Ch] [ebp-54h] BYREF
  float v58; // [esp+58h] [ebp-48h]
  float v59; // [esp+60h] [ebp-40h]
  float v60; // [esp+68h] [ebp-38h]
  int v61[12]; // [esp+70h] [ebp-30h] BYREF

  sub_101F8ED0(a2, *(_DWORD *)(this + 44), *(float *)(a2 + 36), (float *)v57);
  v7 = *(float *)(this + 80);
  v8 = *(float *)(this + 88);
  v55 = *(float *)(this + 84);
  v52 = *(float *)(this + 96);
  v9 = *(_DWORD *)(this + 116);
  v54 = v7;
  v10 = *(float *)(this + 92);
  v56 = v8;
  v11 = *(float *)(this + 100);
  v51 = v10;
  v53 = v11;
  if ( v9 != -1 )
  {
    sub_101F8FA0((char *)a2, v9, *(float *)(a2 + 36), (float *)v61);
    v49 = flt_10459240;
    v50 = qword_10459244;
    sub_101ED920(&v54, (float *)v61, &v49);
    v54 = v49;
    v55 = *(float *)&v50;
    v56 = *((float *)&v50 + 1);
    sub_101ED920(&v51, (float *)v61, &v49);
    v51 = v49;
    v52 = *(float *)&v50;
    v53 = *((float *)&v50 + 1);
  }
  for ( ; a4; ++a3 )
  {
    --a4;
    v12 = a3 / 4;
    v13 = *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6356)));
    if ( (v13 < *(float *)(this + 104) || v13 >= *(float *)(this + 108))
      && -1.0 != *(float *)(this + 104)
      && -1.0 != *(float *)(this + 108) )
    {
      continue;
    }
    v14 = (float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6068)
                  + 4 * ((a3 & 3) + v12 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6324)));
    v49 = sub_100260E0(*(float *)v57, *(float *)(this + 56), *(float *)(this + 68), v54, v51);
    *(float *)&v50 = sub_100260E0(*(float *)&v57[1], *(float *)(this + 60), *(float *)(this + 72), v55, v52);
    v15 = sub_100260E0(*(float *)&v57[2], *(float *)(this + 64), *(float *)(this + 76), v56, v53);
    if ( *(_BYTE *)(this + 112) )
    {
      v16 = *v14 * v49;
      v17 = v14[4] * *(float *)&v50;
      v15 = v15 * v14[8];
    }
    else
    {
      v17 = *(float *)&v50;
      v16 = v49;
    }
    if ( *(_DWORD *)(this + 48) == 6 )
    {
      v18 = 1.0;
      if ( v16 >= 1.0 )
      {
        v20 = 0.0;
        v19 = 1.0;
      }
      else
      {
        v19 = 0.0;
        if ( v16 >= 0.0 )
          v19 = v16;
        v20 = 0.0;
      }
      *v14 = v19;
      if ( v17 >= 1.0 )
      {
        v22 = v20;
        v21 = 1.0;
      }
      else
      {
        v18 = v20;
        v21 = 1.0;
        if ( v18 <= v17 )
        {
          v23 = v18;
          v18 = v17;
          v22 = v23;
        }
        else
        {
          v22 = v18;
        }
      }
      v14[4] = v18;
      if ( v21 <= v15 )
      {
        v15 = v21;
LABEL_27:
        v14[8] = v15;
        continue;
      }
      if ( v22 <= v15 )
        goto LABEL_27;
      v14[8] = v22;
    }
    else
    {
      v24 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * ((a3 & 3) + v12 * *(_DWORD *)(a2 + 6332)));
      if ( !*(_BYTE *)(this + 114) )
      {
        v40 = v16;
        v41 = v17;
        v42 = v15;
        if ( *(_BYTE *)(this + 113) )
        {
          v43 = *v14;
          v44 = v14[4];
          v45 = v14[8];
          v46 = *v24;
          v60 = v24[4];
          v16 = v16 + v43;
          v17 = v17 + v44;
          v15 = v15 + v45;
          v40 = v46 + v16;
          v42 = v24[8] + v15;
          v41 = v60 + v17;
        }
        *v14 = v16;
        v47 = v41;
        v48 = v17;
        v37 = v47;
        v14[4] = v48;
        v14[8] = v15;
        v38 = v42;
        *v24 = v40;
        goto LABEL_35;
      }
      if ( *(_BYTE *)(this + 113) )
      {
        v25 = *v14;
        v26 = v14[4];
        v27 = v14[8];
        v28 = *v24;
        v60 = v24[4];
        v29 = v16 + v25;
        v30 = v17 + v26;
        v31 = v15 + v27;
        v32 = v28 + v29;
        v33 = v60 + v30;
        v34 = v24[8] + v31;
        v35 = *(float *)(a2 + 44);
        v58 = v35 * v29;
        v59 = v35 * v31;
        v36 = v31 + v59;
        *v14 = v29 + v58;
        v14[4] = v30 + v35 * v30;
        v14[8] = v36;
        *v24 = v32;
        v37 = v33;
        v38 = v34;
LABEL_35:
        v24[4] = v37;
        v24[8] = v38;
        continue;
      }
      v39 = *(float *)(a2 + 44);
      *v14 = v16 * v39;
      v14[4] = v17 * v39;
      v14[8] = v15 * v39;
    }
  }
}
