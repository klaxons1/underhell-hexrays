int __thiscall sub_1020E130(int this, int a2, int a3, int a4, char a5, int a6)
{
  bool v7; // zf
  int result; // eax
  int v9; // edi
  bool v10; // c0
  int v11; // ebx
  float *v12; // edx
  int v13; // ecx
  double v14; // st7
  double v15; // st6
  int v16; // eax
  __int16 v17; // di
  int v18; // edi
  double v19; // st7
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  double v25; // st6
  double v26; // st7
  __int16 v27; // ax
  double v28; // st6
  double v29; // st5
  double v30; // st5
  long double v31; // st4
  double v32; // st3
  long double v33; // st5
  long double v34; // st6
  double v35; // st3
  float *v36; // eax
  double v37; // st4
  double v38; // rt1
  double v39; // st5
  double v40; // st6
  double v41; // st7
  double v42; // st5
  double v43; // st6
  float v44; // [esp+Ch] [ebp-A8h]
  float v45; // [esp+10h] [ebp-A4h]
  int v46; // [esp+24h] [ebp-90h]
  float v47; // [esp+24h] [ebp-90h]
  int v48; // [esp+28h] [ebp-8Ch]
  int v49; // [esp+2Ch] [ebp-88h]
  float v50; // [esp+30h] [ebp-84h]
  int v51; // [esp+34h] [ebp-80h] BYREF
  float v52; // [esp+38h] [ebp-7Ch]
  float v53; // [esp+3Ch] [ebp-78h]
  float *v54; // [esp+40h] [ebp-74h]
  float v55; // [esp+44h] [ebp-70h]
  float v56; // [esp+48h] [ebp-6Ch]
  float v57; // [esp+4Ch] [ebp-68h]
  float v58; // [esp+50h] [ebp-64h]
  float v59; // [esp+54h] [ebp-60h]
  float v60; // [esp+58h] [ebp-5Ch]
  float v61; // [esp+5Ch] [ebp-58h]
  float v62; // [esp+60h] [ebp-54h]
  float v63; // [esp+64h] [ebp-50h]
  float *v64; // [esp+68h] [ebp-4Ch]
  float *v65; // [esp+6Ch] [ebp-48h]
  int v66; // [esp+70h] [ebp-44h] BYREF
  float v67; // [esp+74h] [ebp-40h]
  float v68; // [esp+78h] [ebp-3Ch]
  float v69; // [esp+80h] [ebp-34h]
  float v70; // [esp+84h] [ebp-30h]
  int v71; // [esp+88h] [ebp-2Ch] BYREF
  float v72; // [esp+8Ch] [ebp-28h]
  float v73; // [esp+90h] [ebp-24h]
  int v74[6]; // [esp+94h] [ebp-20h] BYREF
  float v75; // [esp+ACh] [ebp-8h]

  v7 = *(_BYTE *)(this + 72) == 0;
  result = *(_DWORD *)(this + 56);
  v74[3] = *(int *)(this + 60);
  v74[4] = *(int *)(this + 52);
  v74[2] = result;
  if ( v7 )
  {
    v48 = *(_DWORD *)(this + 64);
    v9 = v48;
  }
  else
  {
    result = sub_101F89A0((_DWORD *)a2);
    v9 = result;
    v48 = result;
  }
  if ( a4 )
  {
    while ( 1 )
    {
      v10 = *(float *)(this + 48) < (double)*(float *)(a2 + 36);
      v11 = *(_DWORD *)(a2 + 6100);
      v65 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6324)));
      --a4;
      v12 = (float *)(v11 + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6356)));
      v13 = *(_DWORD *)(a2 + 6076) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6332));
      v54 = v12;
      v64 = (float *)v13;
      if ( v10 || v9 <= 0 )
      {
        v20 = *(_DWORD *)(this + 68) + 1;
        if ( v20 >= v9 )
          v20 = v9;
        v21 = *(_DWORD *)(a2 + 6620);
        v22 = ((_WORD)v21 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF;
        *(_DWORD *)(a2 + 6620) = v21 + 1;
        v19 = 1.0;
        v18 = v20 + (int)((double)(v9 - v20 + 1) * flt_103EE7C0[v22]);
      }
      else
      {
        v49 = *(_DWORD *)(this + 68) + 1;
        v46 = v49;
        if ( v49 >= v9 )
          v46 = v9;
        v50 = (float)v48;
        v44 = (float)v46;
        v14 = sub_100260E0(*v12, 0.0, *(float *)(this + 48), v44, v50);
        v15 = (double)v49;
        if ( v15 >= v14 )
          v15 = v14;
        v16 = *(_DWORD *)(a2 + 6620);
        v17 = v16 + *(_DWORD *)(a2 + 6624);
        *(_DWORD *)(a2 + 6620) = v16 + 1;
        v18 = (int)v15 + (int)((double)((int)v14 - (int)v15 + 1) * flt_103EE7C0[v17 & 0xFFF]);
        v45 = v14 / v50;
        v19 = sub_100260E0(*v54, 0.0, *(float *)(this + 48), 0.0, v45);
      }
      v47 = v19;
      v74[0] = *(_DWORD *)(a2 + 68 * v18 + 152);
      v74[1] = v18;
      sub_101F96B0((_DWORD *)a2, (int)v74, *v54, (float *)&v66, (float *)&v71, (float *)&v51);
      v23 = *(_DWORD *)(a2 + 6620);
      v24 = *(_DWORD *)(a2 + 6624);
      v25 = *(float *)&v51 * v47;
      *(_DWORD *)(a2 + 6620) = v23 + 1;
      *(float *)&v51 = v25;
      v52 = v52 * v47;
      v53 = v47 * v53;
      v26 = flt_103EE7C0[((_WORD)v24 + (_WORD)v23) & 0xFFF];
      v27 = v24 + v23 + 1;
      v28 = -*(float *)(this + 44);
      v29 = *(float *)(this + 44);
      *(_DWORD *)(a2 + 6620) = v23 + 2;
      v30 = v29 - v28;
      v31 = flt_103EE7C0[v27 & 0xFFF] * v30 + v28;
      v32 = v30 * flt_103EE7C0[(v27 + 2) & 0xFFF];
      v33 = flt_103EE7C0[(v27 + 1) & 0xFFF] * v30 + v28;
      v34 = v28 + v32;
      if ( *(_BYTE *)(this + 101) )
      {
        v35 = 0.0;
        if ( 0.0 != *(float *)(this + 88) )
        {
          v35 = 0.0;
          v31 = fabs(v31);
        }
        if ( v35 != *(float *)(this + 92) )
          v33 = fabs(v33);
        if ( v35 != *(float *)(this + 96) )
          v34 = fabs(v34);
      }
      v36 = v65;
      v55 = v31 * *(float *)(this + 76);
      v56 = v33 * *(float *)(this + 80);
      v57 = v34 * *(float *)(this + 84);
      v69 = v72 - v67;
      v70 = v73 - v68;
      v58 = *(float *)&v51 - *(float *)&v71;
      v59 = v52 - v72;
      v60 = v53 - v73;
      v75 = v69 * v26;
      v37 = *(float *)&v66 + (*(float *)&v71 - *(float *)&v66) * v26;
      v61 = v58 * v26;
      v62 = v59 * v26;
      v63 = v60 * v26;
      v38 = v75 + v67 + (v72 + v62 - (v75 + v67)) * v26 + v56;
      v39 = v37 + (*(float *)&v71 + v61 - v37) * v26 + v55;
      v40 = v68 + v70 * v26 + v26 * (v73 + v63 - (v68 + v70 * v26)) + v57;
      *v65 = v39;
      v41 = v39;
      v36[4] = v38;
      v42 = v40;
      v43 = v38;
      v36[8] = v42;
      result = (int)v64;
      if ( v64 )
      {
        if ( (a5 & 4) != 0 )
        {
          *v64 = v41;
          *(float *)(result + 16) = v43;
          *(float *)(result + 32) = v42;
        }
      }
      ++a3;
      if ( !a4 )
        break;
      v9 = v48;
    }
  }
  return result;
}
