void __thiscall sub_10218BB0(float *this, int a2, int a3, int a4)
{
  double v4; // st7
  int v5; // ecx
  bool v6; // cc
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  float *v10; // ebx
  float *v11; // ebp
  int v12; // edx
  float *v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st4
  double v17; // st3
  double v18; // st4
  double v19; // st6
  double v20; // rt1
  double v21; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st2
  double v25; // st1
  double v26; // st0
  double v27; // st4
  double v28; // st0
  double v29; // st7
  double v30; // st7
  double v31; // st6
  int v32; // eax
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st7
  float v37; // [esp+Ch] [ebp-A0h]
  float v38; // [esp+Ch] [ebp-A0h]
  float v39; // [esp+Ch] [ebp-A0h]
  float v40; // [esp+Ch] [ebp-A0h]
  float v41; // [esp+20h] [ebp-8Ch] BYREF
  float v42; // [esp+24h] [ebp-88h]
  float v43; // [esp+28h] [ebp-84h]
  float v44; // [esp+2Ch] [ebp-80h] BYREF
  float v45; // [esp+30h] [ebp-7Ch]
  float v46; // [esp+34h] [ebp-78h]
  float v47; // [esp+38h] [ebp-74h]
  float *v48; // [esp+3Ch] [ebp-70h]
  int v49; // [esp+40h] [ebp-6Ch]
  float v50; // [esp+44h] [ebp-68h]
  float v51; // [esp+48h] [ebp-64h]
  float v52; // [esp+4Ch] [ebp-60h]
  float v53; // [esp+50h] [ebp-5Ch]
  float v54; // [esp+54h] [ebp-58h]
  float v55; // [esp+58h] [ebp-54h]
  float v56; // [esp+5Ch] [ebp-50h]
  float v57; // [esp+60h] [ebp-4Ch]
  float v58; // [esp+64h] [ebp-48h]
  float v59; // [esp+68h] [ebp-44h]
  float v60; // [esp+6Ch] [ebp-40h]
  int v61; // [esp+70h] [ebp-3Ch] BYREF
  float v62; // [esp+74h] [ebp-38h]
  float v63; // [esp+78h] [ebp-34h]
  int v64; // [esp+7Ch] [ebp-30h] BYREF
  float v65; // [esp+80h] [ebp-2Ch]
  float v66; // [esp+84h] [ebp-28h]
  float v67; // [esp+8Ch] [ebp-20h]
  float v68; // [esp+90h] [ebp-1Ch]
  int v69[4]; // [esp+94h] [ebp-18h] BYREF
  float v70; // [esp+A4h] [ebp-8h]

  v4 = 1.0 - this[14];
  v48 = this;
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 40) <= 0;
  v50 = v4;
  v49 = 0;
  if ( !v6 )
  {
    while ( 1 )
    {
      v7 = v5 / 4;
      v8 = v5 / 4 * *(_DWORD *)(a2 + 6324);
      v9 = v5 & 3;
      v10 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v9 + v8));
      v11 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v9 + v7 * *(_DWORD *)(a2 + 6332)));
      sub_101F96B0((_DWORD *)a2, (int)(v48 + 15), *(float *)(a2 + 36), (float *)&v61, (float *)&v64, (float *)v69);
      v12 = *(_DWORD *)a4;
      v13 = v48;
      v47 = *(float *)a4;
      v14 = (double)SLODWORD(v47);
      if ( v14 >= v48[12] || v12 < 0 )
      {
        if ( *((_BYTE *)v48 + 52) )
        {
          *(_DWORD *)a4 = 0;
        }
        else
        {
          *(_DWORD *)(a4 + 8) = -*(_DWORD *)(a4 + 8);
          v31 = v13[12] - 1.0;
          if ( v31 <= v14 )
            v14 = v31;
          v32 = (int)v14;
          *(_DWORD *)a4 = (int)v14;
          if ( (int)v14 <= 1 )
            v32 = 1;
          *(_DWORD *)a4 = v32;
        }
      }
      v15 = (double)*(int *)a4 * *(float *)(a4 + 4);
      v67 = v65 - v62;
      v68 = v66 - v63;
      v52 = *(float *)v69 - *(float *)&v64;
      v53 = *(float *)&v69[1] - v65;
      v54 = *(float *)&v69[2] - v66;
      v70 = v67 * v15;
      v16 = *(float *)&v61 + (*(float *)&v64 - *(float *)&v61) * v15;
      v58 = v52 * v15;
      v59 = v53 * v15;
      v60 = v54 * v15;
      v17 = v16 + (*(float *)&v64 + v58 - v16) * v15;
      v55 = v17;
      v18 = v70 + v62 + (v65 + v59 - (v70 + v62)) * v15;
      v19 = v17;
      v56 = v18;
      v20 = v18;
      v21 = v63 + v68 * v15 + v15 * (v66 + v60 - (v63 + v68 * v15));
      v57 = v21;
      v22 = *v10;
      v41 = *v10;
      v23 = v10[4];
      v42 = v10[4];
      v24 = v10[8];
      v43 = v10[8];
      v25 = *v11;
      v44 = *v11;
      v45 = v11[4];
      v26 = v22;
      v27 = v11[8];
      v28 = v26 - v19;
      v41 = v28;
      v42 = v23 - v20;
      v43 = v24 - v21;
      v44 = v25 - v19;
      v45 = v45 - v20;
      v46 = v27 - v21;
      v37 = (v23 - v20) * (v23 - v20) + (v24 - v21) * (v24 - v21) + v28 * v28;
      v29 = off_103EDFE0(v37);
      if ( v29 >= v48[11] )
      {
        v30 = v48[11];
      }
      else
      {
        v38 = v43 * v43 + v42 * v42 + v41 * v41;
        v30 = off_103EDFE0(v38);
      }
      v51 = v30;
      v39 = v46 * v46 + v45 * v45 + v44 * v44;
      v33 = off_103EDFE0(v39);
      if ( v33 >= v48[11] )
      {
        v34 = v48[11];
      }
      else
      {
        v40 = v46 * v46 + v45 * v45 + v44 * v44;
        v34 = off_103EDFE0(v40);
      }
      v47 = v34;
      off_103EDFF0(&v41);
      v35 = v51 * v50;
      v41 = v41 * v35;
      v42 = v42 * v35;
      v43 = v35 * v43;
      off_103EDFF0(&v44);
      v36 = v47 * v50;
      v41 = v41 + v55;
      v42 = v42 + v56;
      v43 = v43 + v57;
      v44 = v44 * v36 + v55;
      v45 = v36 * v45 + v56;
      v46 = v57 + v36 * v46;
      *v10 = v41;
      v10[4] = v42;
      v10[8] = v43;
      *v11 = v44;
      v11[4] = v45;
      v11[8] = v46;
      *(_DWORD *)a4 += *(_DWORD *)(a4 + 8);
      v6 = ++v49 < *(_DWORD *)(a2 + 40);
      if ( !v6 )
        break;
      v5 = v49;
    }
  }
}
