void __thiscall sub_1014CFB0(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  bool v5; // zf
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // eax
  double v10; // rt0
  double v11; // st5
  double v12; // st6
  int v13; // edi
  double v14; // rt1
  double v15; // st6
  int v16; // ebx
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  double v20; // st6
  int v21; // edi
  double v22; // st5
  double v23; // st3
  double v24; // st2
  double v25; // st1
  double v26; // st2
  double v27; // st4
  double v28; // st7
  double v29; // st3
  double v30; // st2
  double v31; // st1
  double v32; // st0
  double v33; // st5
  double v34; // st1
  double v35; // st2
  double v36; // st0
  double v37; // rt0
  _BYTE v38[12]; // [esp+Ch] [ebp-6Ch] BYREF
  int v39[3]; // [esp+18h] [ebp-60h] BYREF
  int v40[3]; // [esp+24h] [ebp-54h] BYREF
  float v41[3]; // [esp+30h] [ebp-48h] BYREF
  float v42[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  float v43; // [esp+48h] [ebp-30h]
  float v44; // [esp+4Ch] [ebp-2Ch]
  float v45; // [esp+50h] [ebp-28h]
  float v46; // [esp+54h] [ebp-24h] BYREF
  float v47; // [esp+58h] [ebp-20h]
  float v48; // [esp+5Ch] [ebp-1Ch]
  float v49; // [esp+60h] [ebp-18h]
  float v50; // [esp+64h] [ebp-14h]
  float v51; // [esp+68h] [ebp-10h]
  int v52; // [esp+6Ch] [ebp-Ch]
  int v53; // [esp+70h] [ebp-8h]
  int v54; // [esp+74h] [ebp-4h]
  int v55; // [esp+80h] [ebp+8h]
  int v56; // [esp+80h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 == 3 || v3 == 15 )
  {
    v43 = *(float *)(a2 + 8);
    v44 = *(float *)(a2 + 12);
    v4 = *(float *)(a2 + 16);
  }
  else
  {
    v43 = flt_106F1CA8;
    v44 = flt_106F1CAC;
    v4 = flt_106F1CB0;
  }
  v5 = *(_BYTE *)(this + 1016) == 0;
  v45 = v4;
  if ( v5 )
  {
    sub_1014C960((char *)this, 0, &flt_106F1CA8);
    v4 = v45;
  }
  v55 = *(_DWORD *)(this + 976);
  v54 = *(_DWORD *)(this + 980);
  v6 = (double)v55 * v43;
  v51 = v6;
  v7 = (double)v54 * v44;
  v50 = v7;
  v8 = v4 / *(float *)(this + 984);
  v9 = (int)(v6 - v8);
  v10 = v7;
  v11 = v6 + v8;
  v12 = v10;
  v52 = v9;
  v13 = (int)v11 + 1;
  v53 = v13;
  if ( v9 < 0 )
    v52 = 0;
  if ( v13 > v55 )
  {
    v53 = v55;
    v13 = v55;
  }
  v14 = v12;
  v15 = v4 / *(float *)(this + 988);
  v56 = (int)(v14 - v15);
  v16 = (int)(v14 + v15) + 1;
  if ( v56 < 0 )
    v56 = 0;
  if ( v16 > v54 )
    v16 = v54;
  v46 = *(float *)(this + 992) * -1.0;
  v47 = *(float *)(this + 996) * -1.0;
  v48 = -1.0 * *(float *)(this + 1000);
  sub_10422540(&v46, v38);
  sub_104222B0(v38, 0, v41, v42);
  v17 = v51 * *(float *)(this + 984);
  v18 = v52;
  v54 = v52;
  v47 = v17;
  v48 = *(float *)(this + 988) * v50;
  if ( v52 < v13 )
  {
    v19 = 0.5;
    v20 = 500.0;
    do
    {
      v21 = v56;
      v52 = v56;
      if ( v56 < v16 )
      {
        v22 = (double)v54;
        v49 = v22;
        v50 = v22 + v19;
        v51 = v45 * v45;
        do
        {
          v23 = (double)v52;
          v24 = (v23 + v19) * *(float *)(this + 984) - v48;
          v25 = v50 * *(float *)(this + 984) - v47;
          if ( v25 * v25 + v24 * v24 <= v51 )
          {
            v26 = *(float *)(this + 988);
            v27 = v23 * v42[0] * v26;
            v28 = v23 * v42[1] * v26;
            v29 = v23 * v42[2] * v26;
            v30 = v22 * v41[0];
            v31 = v22;
            v32 = *(float *)(this + 984);
            v33 = v22 * v41[1] * v32;
            v34 = v31 * v41[2] * v32;
            v35 = v30 * v32 + *(float *)(this + 1004);
            v36 = *(float *)(this + 1008);
            v37 = v34 + *(float *)(this + 1012);
            *(float *)v40 = v27 + v35;
            *(float *)&v40[1] = v28 + v33 + v36;
            *(float *)&v40[2] = v37 + v29;
            *(float *)v39 = *(float *)(this + 992) * v20;
            *(float *)&v39[1] = *(float *)(this + 996) * v20;
            *(float *)&v39[2] = v20 * *(float *)(this + 1000);
            sub_1014C280(this, v18, v21, (float *)v39, (int)v40);
            v18 = v54;
            v19 = 0.5;
            v22 = v49;
            v20 = 500.0;
          }
          v52 = ++v21;
        }
        while ( v21 < v16 );
      }
      v54 = ++v18;
    }
    while ( v18 < v53 );
  }
}
