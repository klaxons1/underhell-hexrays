int __thiscall sub_10022390(float *this, int a2, int a3, int a4, int a5)
{
  int *v6; // ecx
  int v7; // eax
  float *v8; // esi
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // edi
  float *v16; // esi
  int *v17; // eax
  double v18; // st7
  int v19; // ecx
  int v20; // edi
  int v21; // edi
  double v22; // st6
  double v23; // st3
  double v24; // st5
  double v25; // st7
  int v26; // eax
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st7
  int v31; // eax
  float *v32; // esi
  float *v33; // edi
  double v34; // st7
  double v35; // st5
  double v36; // st4
  double v37; // st6
  double v38; // st7
  double v39; // rt1
  double v40; // st4
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int result; // eax
  int v45; // esi
  int v46; // edi
  int v47; // edi
  int v48; // esi
  int v49; // eax
  int v50; // eax
  float v51; // [esp+0h] [ebp-574h]
  float v52; // [esp+0h] [ebp-574h]
  int v53; // [esp+4h] [ebp-570h]
  _BYTE v55[1148]; // [esp+18h] [ebp-55Ch] BYREF
  _BYTE v56[48]; // [esp+494h] [ebp-E0h] BYREF
  _BYTE v57[48]; // [esp+4C4h] [ebp-B0h] BYREF
  _BYTE v58[48]; // [esp+4F4h] [ebp-80h] BYREF
  int v59[4]; // [esp+524h] [ebp-50h] BYREF
  char v60[4]; // [esp+534h] [ebp-40h] BYREF
  _BYTE v61[12]; // [esp+538h] [ebp-3Ch] BYREF
  float v62; // [esp+544h] [ebp-30h]
  float v63[3]; // [esp+548h] [ebp-2Ch] BYREF
  int v64; // [esp+554h] [ebp-20h]
  float v65; // [esp+558h] [ebp-1Ch] BYREF
  float v66; // [esp+55Ch] [ebp-18h]
  float v67; // [esp+560h] [ebp-14h]
  int v68; // [esp+564h] [ebp-10h]
  float v69; // [esp+568h] [ebp-Ch]
  int v70; // [esp+56Ch] [ebp-8h]
  int v71; // [esp+570h] [ebp-4h]
  float *v72; // [esp+588h] [ebp+14h]

  v6 = (int *)*((_DWORD *)this + 1022);
  v7 = *v6;
  v70 = 0;
  if ( *(int *)(v7 + 284) > 0 )
  {
    v71 = 0;
    v8 = (float *)v55;
    do
    {
      v9 = (_DWORD *)*((_DWORD *)this + 1022);
      v10 = *v9 + v71 + *(_DWORD *)(*v9 + 288);
      v11 = *(_DWORD *)(*(_DWORD *)(v10 + 12) + v10 + 56);
      v8[7] = 0.0;
      *(v8 - 1) = NAN;
      if ( (*(_DWORD *)(v9[11] + 4 * v11) & (_DWORD)this[1047]) != 0 )
      {
        sub_10020130((int)v6, (int)(this + 1033), a2, a3, v11, a4, a5);
        sub_101F0930(a4 + 48 * v11, v8 + 3, v8);
      }
      v6 = (int *)*((_DWORD *)this + 1022);
      v12 = *v6;
      v71 += 16;
      v8 += 9;
      ++v70;
    }
    while ( v70 < *(_DWORD *)(v12 + 284) );
  }
  v68 = 0;
  if ( *((int *)this + 1026) > 0 )
  {
    v13 = 0;
    v64 = 0;
    do
    {
      v14 = (_DWORD *)(v13 + *((_DWORD *)this + 1023));
      v70 = 0;
      if ( (int)v14[3] > 0 )
      {
        v71 = 0;
        do
        {
          v15 = v71 + *v14;
          v16 = (float *)(v55 + 36 * *(_DWORD *)(v15 + 8) + 2);
          *v16 = NAN;
          if ( *(_DWORD *)(v15 + 4) == 1 )
          {
            sub_101F0F40(v15 + 44, v15 + 32, v58);
            v26 = *(_DWORD *)(v15 + 12);
            if ( v26 == -1 )
            {
              sub_101EDC00(this + 1033, v58, v56);
            }
            else
            {
              sub_10020130(*((_DWORD *)this + 1022), (int)(this + 1033), a2, a3, v26, a4, a5);
              sub_101EDC00(a4 + 48 * *(_DWORD *)(v15 + 12), v58, v56);
            }
            v27 = *(float *)(v15 + 96) * *(float *)(v15 + 92);
            v69 = v27;
            v62 = 1.0 - v27;
            v16[8] = v27 + (1.0 - v27) * v16[8];
            sub_101F0930(v56, v59, &v65);
            v28 = v69;
            v29 = v66 * v69 + v62 * v16[2];
            v30 = v67 * v69 + v62 * v16[3];
            v16[1] = v65 * v69 + v62 * v16[1];
            v16[2] = v29;
            v16[3] = v30;
            v52 = v28;
            sub_101F0F00((int)(v16 + 4), (int)v59, v52, (int)(v16 + 4));
          }
          else if ( *(_DWORD *)(v15 + 4) == 4 )
          {
            v17 = (int *)*((_DWORD *)this + 1022);
            v18 = *(float *)(v15 + 96) * *(float *)(v15 + 92);
            v19 = *v17;
            v20 = 16 * *(_DWORD *)(v15 + 8);
            v69 = v18;
            v21 = *(_DWORD *)(*(_DWORD *)(v19 + *(_DWORD *)(v19 + 288) + v20 + 12)
                            + v19
                            + *(_DWORD *)(v19 + 288)
                            + v20
                            + 56);
            sub_10020130((int)v17, (int)(this + 1033), a2, a3, v21, a4, a5);
            sub_101F0930(a4 + 48 * v21, v60, v63);
            v22 = v69;
            v23 = 1.0 - v69;
            v24 = v63[1] * v69 + v16[2] * v23;
            v25 = v63[2] * v69 + v23 * v16[3];
            v16[1] = v63[0] * v69 + v16[1] * v23;
            v16[2] = v24;
            v16[3] = v25;
            v51 = v22;
            sub_101F0F00((int)(v16 + 4), (int)v60, v51, (int)(v16 + 4));
          }
          v31 = *((_DWORD *)this + 1023);
          v13 = v64;
          v71 += 132;
          v14 = (_DWORD *)(v64 + v31);
          ++v70;
        }
        while ( v70 < v14[3] );
      }
      v13 += 20;
      ++v68;
      v64 = v13;
    }
    while ( v68 < *((_DWORD *)this + 1026) );
  }
  v70 = 0;
  if ( *((int *)this + 1020) > 0 )
  {
    v32 = this + 61;
    do
    {
      if ( *(v32 - 38) > 0.0 )
      {
        v33 = (float *)(v55 + 36 * *((_DWORD *)v32 - 61) + 2);
        sub_101F1020(v32 - 55, v63);
        sub_101F1750(v63, v32 - 58, v58);
        sub_101F1020(v32 - 34, v61);
        sub_101F1750(v61, v32 - 37, v57);
        sub_101EDC00(v57, v58, v56);
        sub_101F0930(v56, v59, &v65);
        v34 = *(v32 - 38);
        v33[8] = *(v32 - 38);
        v35 = v65 * v34;
        v36 = v66 * v34;
        v37 = v34 * v67;
        v38 = 1.0 - v34;
        v39 = v36 + v33[2] * v38;
        v40 = v38 * v33[3];
        v33[1] = v35 + v38 * v33[1];
        v33[2] = v39;
        v33[3] = v37 + v40;
        sub_101F0F00((int)(v33 + 4), (int)v59, v33[8], (int)(v33 + 4));
      }
      if ( *((_BYTE *)v32 - 44) )
      {
        v41 = *((_DWORD *)v32 - 33);
        v42 = *((_DWORD *)v32 - 32);
        v32[2] = *(v32 - 34);
        v43 = *((_DWORD *)v32 - 31);
        *((_DWORD *)v32 + 3) = v41;
        *((_DWORD *)v32 + 4) = v42;
        *((_BYTE *)v32 - 43) = 1;
        *((_DWORD *)v32 + 5) = v43;
        *(v32 - 1) = *(v32 - 37);
        *v32 = *(v32 - 36);
        v32[1] = *(v32 - 35);
      }
      v32 += 85;
      ++v70;
    }
    while ( v70 < *((_DWORD *)this + 1020) );
  }
  result = **((_DWORD **)this + 1022);
  v70 = 0;
  if ( *(int *)(result + 284) > 0 )
  {
    v71 = 0;
    v72 = (float *)v55;
    do
    {
      v45 = result + v71 + *(_DWORD *)(result + 288);
      if ( v72[7] > 0.0 )
      {
        sub_101EDA00(a4 + 48 * *(_DWORD *)(*(_DWORD *)(v45 + 12) + v45 + 56), 3, &v65);
        if ( sub_100222B0(v45, v72, a4) )
        {
          sub_101EDA00(a4 + 48 * *(_DWORD *)(*(_DWORD *)(v45 + 12) + v45 + 56), 3, v61);
          sub_101F0F40(v72 + 3, v61, a4 + 48 * *(_DWORD *)(*(_DWORD *)(v45 + 12) + v45 + 56));
          v46 = *(_DWORD *)(*(_DWORD *)(v45 + 12) + v45 + 56);
          sub_101F0AB0(a4 + 48 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1022) + 64) + 4 * v46), v57);
          sub_101EDC00(v57, a4 + 48 * v46, v58);
          sub_101F0930(v58, a3 + 16 * v46, a2 + 12 * v46);
          v47 = *(_DWORD *)(*(_DWORD *)(v45 + 12) + v45 + 28);
          sub_101F0AB0(a4 + 48 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1022) + 64) + 4 * v47), v57);
          sub_101EDC00(v57, a4 + 48 * v47, v58);
          sub_101F0930(v58, a3 + 16 * v47, a2 + 12 * v47);
          v48 = *(_DWORD *)(v45 + *(_DWORD *)(v45 + 12));
          sub_101F0AB0(a4 + 48 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1022) + 64) + 4 * v48), v57);
          sub_101EDC00(v57, a4 + 48 * v48, v58);
          sub_101F0930(v58, a3 + 16 * v48, a2 + 12 * v48);
        }
        else
        {
          v49 = *((_DWORD *)v72 - 1);
          if ( v49 != -1 )
          {
            v50 = 85 * v49;
            this[v50 + 67] = this[v50 + 67] * 0.80000001;
            v53 = (int)&this[v50 + 70];
            *(float *)(v53 - 8) = this[v50 + 68] * 0.80000001;
            *(float *)(v53 - 4) = this[v50 + 69] * 0.80000001;
            sub_101EEBE0(v53, 0.80000001, v53);
          }
        }
      }
      result = **((_DWORD **)this + 1022);
      v72 += 9;
      v71 += 16;
      ++v70;
    }
    while ( v70 < *(_DWORD *)(result + 284) );
  }
  return result;
}
