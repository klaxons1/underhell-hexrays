void __thiscall sub_1020A210(int this, _DWORD *a2, int a3, int a4, char a5, int a6)
{
  int v6; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  float *v11; // ebp
  double v12; // st7
  int v13; // ecx
  __int16 v14; // ax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st5
  double v19; // st4
  double v20; // st6
  double v21; // rtt
  double v22; // st5
  double v23; // rt0
  double v24; // st5
  double v25; // st6
  double v26; // rt1
  double v27; // st5
  double v28; // st7
  double v29; // st6
  int v30; // eax
  float v32; // [esp+24h] [ebp-60h]
  float v33; // [esp+28h] [ebp-5Ch]
  float v34; // [esp+2Ch] [ebp-58h]
  float v35; // [esp+30h] [ebp-54h]
  float v36; // [esp+34h] [ebp-50h]
  float v37; // [esp+38h] [ebp-4Ch]
  float v38; // [esp+3Ch] [ebp-48h]
  float v39; // [esp+40h] [ebp-44h]
  float v40; // [esp+44h] [ebp-40h]
  int v41; // [esp+48h] [ebp-3Ch] BYREF
  float v42; // [esp+4Ch] [ebp-38h]
  float v43; // [esp+50h] [ebp-34h]
  int v44; // [esp+54h] [ebp-30h] BYREF
  float v45; // [esp+58h] [ebp-2Ch]
  float v46; // [esp+5Ch] [ebp-28h]
  int v47[4]; // [esp+60h] [ebp-24h] BYREF
  float v48; // [esp+70h] [ebp-14h]
  float v49; // [esp+74h] [ebp-10h]
  float v50; // [esp+7Ch] [ebp-8h]
  float *v51; // [esp+98h] [ebp+14h]

  if ( a4 )
  {
    v6 = a3;
    do
    {
      v8 = v6 / 4;
      v9 = v6 / 4 * a2[1581];
      v10 = v6 & 3;
      v11 = (float *)(a2[1517] + 4 * (v10 + v9));
      v51 = (float *)(a2[1519] + 4 * (v10 + v8 * a2[1583]));
      --a4;
      sub_101F96B0(
        a2,
        this + 56,
        *(float *)(a2[1525] + 4 * (v10 + v8 * a2[1589])),
        (float *)&v41,
        (float *)&v44,
        (float *)v47);
      v12 = (double)*(int *)a6;
      if ( v12 >= *(float *)(this + 48) || *(int *)a6 < 0 )
      {
        if ( *(_BYTE *)(this + 52) )
        {
          *(_DWORD *)a6 = 0;
        }
        else
        {
          *(_DWORD *)(a6 + 8) = -*(_DWORD *)(a6 + 8);
          v29 = *(float *)(this + 48) - 1.0;
          if ( v29 <= v12 )
            v12 = v29;
          v30 = (int)v12;
          *(_DWORD *)a6 = (int)v12;
          if ( (int)v12 <= 1 )
            v30 = 1;
          *(_DWORD *)a6 = v30;
        }
      }
      v13 = a2[1655];
      v14 = v13 + a2[1656];
      v15 = (double)*(int *)a6 * *(float *)(a6 + 4);
      v16 = -*(float *)(this + 44);
      v17 = *(float *)(this + 44);
      a2[1655] = v13 + 1;
      v18 = v17 - v16;
      v38 = flt_103EE7C0[v14 & 0xFFF] * v18 + v16;
      v39 = flt_103EE7C0[(v14 + 1) & 0xFFF] * v18 + v16;
      v40 = v16 + v18 * flt_103EE7C0[(v14 + 2) & 0xFFF];
      v48 = v45 - v42;
      v49 = v46 - v43;
      v32 = *(float *)v47 - *(float *)&v44;
      v33 = *(float *)&v47[1] - v45;
      v34 = *(float *)&v47[2] - v46;
      v50 = v48 * v15;
      v19 = *(float *)&v41 + (*(float *)&v44 - *(float *)&v41) * v15;
      v35 = v32 * v15;
      v36 = v33 * v15;
      v37 = v34 * v15;
      v20 = v50 + v42 + (v45 + v36 - (v50 + v42)) * v15 + v39;
      v21 = v43 + v49 * v15 + v15 * (v46 + v37 - (v43 + v49 * v15)) + v40;
      v22 = v19 + (*(float *)&v44 + v35 - v19) * v15 + v38;
      *v11 = v22;
      v23 = v22;
      v24 = v20;
      v25 = v23;
      v11[4] = v24;
      v26 = v24;
      v27 = v21;
      v28 = v26;
      v11[8] = v21;
      if ( v51 )
      {
        if ( (a5 & 4) != 0 )
        {
          *v51 = v25;
          v51[4] = v28;
          v51[8] = v27;
        }
      }
      *(_DWORD *)a6 += *(_DWORD *)(a6 + 8);
      v6 = ++a3;
    }
    while ( a4 );
  }
}
