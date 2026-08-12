void __thiscall sub_1020C5D0(int this, int a2, int a3, int a4, char a5, int a6)
{
  double v7; // st7
  int v8; // ebp
  float *v9; // ebx
  double v10; // st7
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  bool v15; // zf
  double v16; // st3
  double v17; // st7
  long double v18; // st6
  long double v19; // st5
  double v20; // st4
  long double v21; // st7
  int v22; // eax
  int v23; // edx
  long double v24; // st7
  long double v25; // st7
  long double v26; // rt1
  double v27; // st3
  int v28; // eax
  int v29; // edx
  double v30; // st2
  int v31; // ecx
  double v32; // st3
  float *v33; // eax
  int v34; // ebx
  long double v35; // rt2
  long double v36; // st6
  long double v37; // st7
  double v38; // st3
  double v39; // st2
  double v40; // st3
  float *v41; // ecx
  long double v42; // rt0
  long double v43; // st5
  long double v44; // st7
  double v45; // st3
  double v46; // st2
  double v47; // st3
  long double v48; // rt2
  long double v49; // st6
  long double v50; // st7
  double v51; // st3
  long double v52; // st5
  float v53; // [esp+18h] [ebp-74h]
  int i; // [esp+18h] [ebp-74h]
  float *v55; // [esp+1Ch] [ebp-70h]
  float *v56; // [esp+24h] [ebp-68h]
  float v57; // [esp+24h] [ebp-68h]
  float v58; // [esp+24h] [ebp-68h]
  float *v59; // [esp+28h] [ebp-64h]
  float v60; // [esp+28h] [ebp-64h]
  float v61; // [esp+2Ch] [ebp-60h] BYREF
  float v62; // [esp+30h] [ebp-5Ch]
  float v63; // [esp+34h] [ebp-58h]
  float v64; // [esp+38h] [ebp-54h] BYREF
  __int64 v65; // [esp+3Ch] [ebp-50h]
  float v66; // [esp+44h] [ebp-48h]
  float v67; // [esp+48h] [ebp-44h]
  float v68; // [esp+4Ch] [ebp-40h]
  int v69[3]; // [esp+50h] [ebp-3Ch] BYREF
  int v70[12]; // [esp+5Ch] [ebp-30h] BYREF

  if ( a4 )
  {
    v7 = 0.0;
    do
    {
      v59 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6324)));
      --a4;
      v8 = *(_DWORD *)(this + 76);
      v9 = (float *)(*(_DWORD *)(a2 + 6100) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6356)));
      v56 = v9;
      v55 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6332)));
      if ( *(_BYTE *)(this + 94) )
      {
        v53 = 1.0;
        if ( v7 != *(float *)(this + 96) )
        {
          if ( *(float *)(this + 96) <= (double)*(float *)(a2 + 36) )
            v10 = *(float *)(this + 96);
          else
            v10 = *(float *)(a2 + 36);
          v53 = v10 / *(float *)(this + 96);
        }
        v11 = sub_101F89A0((_DWORD *)a2);
        v12 = *(_DWORD *)(a2 + 6620);
        v13 = *(_DWORD *)(this + 76);
        *(_DWORD *)(a2 + 6620) = v12 + 1;
        v8 = v13
           + (int)((double)((int)floor((double)v11 * v53) - v13 + 1)
                 * flt_103EE7C0[((_WORD)v12 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF]);
        v9 = v56;
      }
      for ( i = 0; i < 10; ++i )
      {
        v14 = *(_DWORD *)(a2 + 6620);
        *(_DWORD *)(a2 + 6620) = v14 + 1;
        v57 = sub_101F8760((_DWORD *)a2, v14, &v61);
        if ( *(_BYTE *)(this + 93) )
        {
          if ( 0.0 != *(float *)(this + 64) )
            v61 = fabs(v61);
          if ( 0.0 != *(float *)(this + 68) )
            v62 = fabs(v62);
          if ( 0.0 != *(float *)(this + 72) )
            v63 = fabs(v63);
        }
        v61 = *(float *)(this + 52) * v61;
        v62 = v62 * *(float *)(this + 56);
        v63 = v63 * *(float *)(this + 60);
        off_103EDFEC(&v61);
        v15 = *(_BYTE *)(this + 95) == 0;
        v66 = v61;
        v67 = v62;
        v68 = v63;
        v16 = (*(float *)(this + 48) - *(float *)(this + 44)) * v57 + *(float *)(this + 44);
        v61 = v61 * v16;
        v62 = v62 * v16;
        v63 = v16 * v63;
        if ( v15 || !*(_BYTE *)(this + 92) )
        {
          sub_101F8ED0(a2, v8, *v9, (float *)v69);
          v61 = *(float *)v69 + v61;
          v62 = *(float *)&v69[1] + v62;
          v17 = *(float *)&v69[2] + v63;
        }
        else
        {
          sub_101F8FA0((char *)a2, v8, *v9, (float *)v70);
          v64 = flt_10459240;
          v65 = qword_10459244;
          sub_101ED860(&v61, (float *)v70, &v64);
          v61 = v64;
          v62 = *(float *)&v65;
          v17 = *((float *)&v65 + 1);
        }
        v15 = *(_DWORD *)(this + 124) == 0;
        v63 = v17;
        if ( v15 )
          break;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD, float *))(**((_DWORD **)off_103EE614 + 60) + 28))(
               *((_DWORD *)off_103EE614 + 60),
               a2,
               *(_DWORD *)(a2 + 68 * v8 + 148),
               &v61) )
        {
          break;
        }
      }
      *v59 = v61;
      v59[4] = v62;
      v59[8] = v63;
      if ( v55 && (a5 & 4) != 0 )
      {
        v18 = 0.0;
        v19 = 0.0;
        v20 = 0.0;
        v21 = 0.0;
        if ( *(float *)(this + 84) > 0.0 )
        {
          v22 = *(_DWORD *)(a2 + 6620);
          v23 = ((_WORD)v22 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF;
          v58 = *(float *)(this + 80);
          v60 = *(float *)(this + 84);
          v24 = *(float *)(this + 88);
          *(_DWORD *)(a2 + 6620) = v22 + 1;
          v25 = v58 + (v60 - v58) * pow(flt_103EE7C0[v23], v24);
          v18 = -(v66 * v25);
          v26 = -(v67 * v25);
          v21 = -(v25 * v68);
          v20 = 0.0;
          v19 = v26;
        }
        v27 = *(float *)(this + 100);
        v28 = *(_DWORD *)(a2 + 6620);
        v29 = *(_DWORD *)(a2 + 6624);
        v30 = *(float *)(this + 112) - v27;
        v31 = v28 + 1;
        *(_DWORD *)(a2 + 6620) = v28 + 1;
        v32 = v27 + v30 * flt_103EE7C0[((_WORD)v29 + (_WORD)v28) & 0xFFF];
        v33 = (float *)(a2 + 68 * v8);
        v34 = v31 + 1;
        v35 = v18 - v33[28] * v32;
        v36 = v19 - v33[29] * v32;
        v37 = v21 - v32 * v33[30];
        v38 = *(float *)(this + 104);
        v39 = *(float *)(this + 116);
        *(_DWORD *)(a2 + 6620) = v31 + 1;
        v40 = v38 + (v39 - v38) * flt_103EE7C0[((_WORD)v29 + (_WORD)v31) & 0xFFF];
        v41 = (float *)(a2 + 68 * (v8 + 2));
        v42 = v35 - *v41 * v40;
        v43 = v36 - v41[1] * v40;
        v44 = v37 - v40 * v41[2];
        v45 = *(float *)(this + 108);
        v46 = *(float *)(this + 120);
        *(_DWORD *)(a2 + 6620) = v34 + 1;
        v47 = v45 + (v46 - v45) * flt_103EE7C0[((_WORD)v34 + (_WORD)v29) & 0xFFF];
        v48 = v42 - v33[31] * v47;
        v49 = v43 - v33[32] * v47;
        v50 = v44 - v47 * v33[33];
        v51 = *(float *)(a2 + 48);
        v61 = v48 * v51 + v61;
        v62 = v49 * v51 + v62;
        v52 = v50 * v51;
        v7 = v20;
        v63 = v52 + v63;
        *v55 = v61;
        v55[4] = v62;
        v55[8] = v63;
      }
      else
      {
        v7 = 0.0;
      }
      ++a3;
    }
    while ( a4 );
  }
}
