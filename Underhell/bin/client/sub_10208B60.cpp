void __thiscall sub_10208B60(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  float *v12; // edi
  float *v13; // ebx
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  double v18; // st5
  double v19; // rt1
  double v20; // st5
  double v21; // rt2
  double v22; // rtt
  double v23; // st5
  double v24; // rt0
  double v25; // st5
  double v26; // rt1
  double v27; // st5
  double v28; // rt2
  double v29; // st5
  double v30; // rtt
  double v31; // st5
  double v32; // rt0
  double v33; // st5
  double v34; // st7
  double v35; // st7
  double v36; // st5
  double v37; // rt2
  double v38; // st5
  double v39; // rtt
  double v40; // st5
  double v41; // rt0
  double v42; // st5
  double v43; // rt1
  double v44; // st5
  double v45; // st6
  int v46; // eax
  double v47; // st5
  int v48; // ecx
  double v49; // st6
  double v50; // st7
  double v51; // st4
  double v52; // st6
  double v53; // st5
  double v54; // st7
  __int16 v55; // [esp+0h] [ebp-4Ch]
  float v56; // [esp+4h] [ebp-48h]
  float v57; // [esp+4h] [ebp-48h]
  bool v58; // [esp+1Bh] [ebp-31h]
  float v59; // [esp+1Ch] [ebp-30h]
  float v60; // [esp+20h] [ebp-2Ch]
  float v61; // [esp+24h] [ebp-28h]
  float v62; // [esp+28h] [ebp-24h]
  float v63; // [esp+2Ch] [ebp-20h]
  float v64; // [esp+30h] [ebp-1Ch]
  float v65; // [esp+34h] [ebp-18h] BYREF
  float v66; // [esp+38h] [ebp-14h]
  float v67; // [esp+3Ch] [ebp-10h]
  int v68; // [esp+40h] [ebp-Ch] BYREF
  float v69; // [esp+44h] [ebp-8h]
  float v70; // [esp+48h] [ebp-4h]
  float *v71; // [esp+50h] [ebp+4h]

  v58 = *(float *)(this + 56) > 0.0;
  if ( a4 )
  {
    v7 = a3;
    do
    {
      v9 = v7 / 4;
      v10 = v7 / 4 * *(_DWORD *)(a2 + 6324);
      v11 = v7 & 3;
      v12 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v11 + v10));
      v59 = *v12;
      v60 = v12[4];
      v61 = v12[8];
      v71 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6332)));
      --a4;
      v13 = (float *)(*(_DWORD *)(a2 + 6072) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6328)));
      sub_101F8ED0(
        a2,
        *(_DWORD *)(this + 60),
        *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6356))),
        (float *)&v68);
      v14 = 0.0;
      v65 = 0.0;
      v15 = 0.0;
      v66 = 0.0;
      v67 = 0.0;
      v16 = 0.0;
      if ( *(float *)(this + 52) > 0.0 )
      {
        v55 = (*(_DWORD *)(a2 + 6620))++;
        sub_101F8760((_DWORD *)a2, v55, &v65);
        v17 = *(float *)(this + 52);
        v14 = v65 * v17;
        v65 = v14;
        v18 = v66 * v17;
        v66 = v18;
        v19 = v18;
        v20 = v17 * v67;
        v67 = v20;
        v21 = v20;
        v15 = v19;
        v16 = v21;
      }
      v22 = v15;
      v23 = v14 + *(float *)&v68;
      *(float *)&v68 = v23;
      v24 = v23;
      v25 = v22 + v69;
      v69 = v25;
      v26 = v25;
      v27 = v16 + v70;
      v70 = v27;
      v28 = v27;
      v29 = v24 - v59;
      v62 = v29;
      v30 = v29;
      v31 = v26 - v60;
      v63 = v31;
      v32 = v31;
      v33 = v28 - v61;
      v64 = v33;
      v56 = v30 * v30 + v32 * v32 + v33 * v33;
      v34 = off_103EDFE0(v56);
      if ( v58 )
      {
        v35 = *(float *)(this + 56) / (v34 + 0.00000011920929);
        v36 = v62 * v35 + v59;
        v59 = v36;
        v37 = v36;
        v38 = v63 * v35 + v60;
        v60 = v38;
        v39 = v38;
        v40 = v35 * v64 + v61;
        v61 = v40;
        v41 = v70 - v40;
        v42 = *(float *)&v68 - v37;
        v62 = v42;
        v43 = v42;
        v44 = v69 - v39;
        v63 = v44;
        v64 = v41;
        v57 = v43 * v43 + v44 * v44 + v41 * v41;
        v34 = off_103EDFE0(v57);
      }
      v45 = *(float *)(this + 44);
      v46 = *(_DWORD *)(a2 + 6620);
      v47 = *(float *)(this + 48) - v45;
      v48 = ((_WORD)v46 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF;
      *(_DWORD *)(a2 + 6620) = v46 + 1;
      v49 = v45 + v47 * flt_103EE7C0[v48];
      *v13 = v34 / (v49 + 0.00000011920929);
      v50 = v49 / v34;
      v51 = *(float *)(a2 + 48);
      v52 = v62 * v50 * v51;
      v53 = v63 * v50 * v51;
      v54 = v50 * v64 * v51;
      if ( v58 )
      {
        *v12 = v59;
        v12[1] = v60;
        v12[2] = v61;
      }
      v7 = a3 + 1;
      *v71 = *v12 - v52;
      ++a3;
      v71[4] = v12[4] - v53;
      v71[8] = v12[8] - v54;
    }
    while ( a4 );
  }
}
