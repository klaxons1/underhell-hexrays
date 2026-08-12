void __thiscall sub_10371D30(int this, float *a2, float *a3, int *a4, float a5, int a6, int a7)
{
  double v8; // st7
  float *v9; // eax
  int v10; // eax
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  double v16; // st7
  double v17; // st5
  double v18; // st7
  int v19; // edx
  double v20; // st5
  double v21; // st6
  double v22; // st7
  double v23; // st6
  double v24; // st5
  bool v25; // zf
  double v26; // st7
  double v27; // st5
  double v28; // st6
  double v29; // st3
  double v30; // st4
  double v31; // st7
  double v32; // st5
  float v33; // edx
  int (__thiscall *v34)(int, _BYTE *); // edx
  float *v35; // eax
  double v36; // st6
  float *v37; // eax
  double v38; // rt2
  double v39; // st6
  float v40; // [esp+Ch] [ebp-48h]
  _BYTE v41[12]; // [esp+18h] [ebp-3Ch] BYREF
  float v42[3]; // [esp+24h] [ebp-30h] BYREF
  float v43; // [esp+30h] [ebp-24h] BYREF
  float v44; // [esp+34h] [ebp-20h]
  float v45; // [esp+38h] [ebp-1Ch]
  float v46; // [esp+3Ch] [ebp-18h] BYREF
  float v47; // [esp+40h] [ebp-14h]
  float v48; // [esp+44h] [ebp-10h]
  float v49; // [esp+48h] [ebp-Ch]
  float v50; // [esp+4Ch] [ebp-8h]
  float v51; // [esp+50h] [ebp-4h]
  float v52; // [esp+68h] [ebp+14h]
  float v53; // [esp+68h] [ebp+14h]

  sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.FlechetteShoot", 0.0, 0);
  if ( (*(int (__thiscall **)(int *))(*a4 + 220))(a4) == 3 )
  {
    if ( (a4[63] & 0x800) != 0 )
      sub_100DAE60((int)a4);
    v49 = *((float *)a4 + 145);
    v50 = *((float *)a4 + 146);
    v8 = *((float *)a4 + 147);
  }
  else
  {
    v9 = (float *)(*(int (__thiscall **)(int *, float *, float *, int))(*a4 + 520))(a4, v42, a3, 1);
    v49 = *v9;
    v50 = v9[1];
    v8 = v9[2];
  }
  v51 = v8;
  v46 = v49;
  v10 = *(_DWORD *)(this + 252) >> 11;
  v47 = v50;
  v48 = v51;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(this);
  if ( (a4[63] & 0x800) != 0 )
    sub_100DAE60((int)a4);
  v11 = *((float *)a4 + 146) - *(float *)(this + 584);
  v12 = v11 * v11;
  v13 = *((float *)a4 + 145) - *(float *)(this + 580);
  v14 = v12;
  v15 = *((float *)a4 + 147) - *(float *)(this + 588);
  v40 = v13 * v13 + v14 + v15 * v15;
  v16 = off_10689708(v40);
  if ( LOBYTE(a5) )
  {
    v36 = *(float *)(dword_106E8724 + 44);
    if ( 0.0 == v36 )
      v36 = 2500.0;
    v53 = v16 / (v36 * 1.5);
    v37 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*a4 + 536))(a4, v41);
    v22 = *v37 * v53 + v49;
    v23 = v37[1] * v53 + v50;
    v24 = v53 * v37[2] + v51;
  }
  else if ( a6 >= 3 || v16 <= 200.0 )
  {
    if ( sub_10023D10((_DWORD *)this, 10) )
    {
      v23 = v47;
      v24 = v48;
      v22 = v46;
    }
    else
    {
      if ( (a4[63] & 0x800) != 0 )
        sub_100DAE60((int)a4);
      v22 = v49 - *((float *)a4 + 145) + *(float *)(this + 4252);
      v23 = v50 - *((float *)a4 + 146) + *(float *)(this + 4256);
      v24 = v51 - *((float *)a4 + 147) + *(float *)(this + 4260);
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, float *, float *, _DWORD))(*a4 + 528))(a4, &v43, &v46, 0);
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v42, 0, 0);
    v17 = v42[0] * v43 + v42[1] * v44 + v42[2] * v45;
    if ( v17 >= -0.80000001 )
    {
      if ( v17 <= 0.80000001 )
      {
        v28 = (double)(3 - a6) * 36.0;
        v49 = v43 * v28;
        v32 = v44 * v28;
        v31 = v45;
      }
      else
      {
        v25 = *(_BYTE *)(this + 4290) == 0;
        v49 = v46;
        v50 = v47;
        v51 = v48;
        if ( v25 )
        {
          v26 = v49;
          v27 = v50;
          v28 = v51;
        }
        else
        {
          v26 = v46 * -1.0;
          v27 = v50 * -1.0;
          v28 = -1.0 * v51;
        }
        v29 = (double)(3 - a6) * 36.0;
        v30 = v26 * v29;
        v31 = v29;
        v49 = v30;
        v32 = v27 * v29;
      }
      v33 = *(float *)a4;
      v50 = v32;
      v34 = *(int (__thiscall **)(int, _BYTE *))(LODWORD(v33) + 504);
      v51 = v31 * v28;
      v35 = (float *)v34((int)a4, v41);
      v22 = *v35 + v49;
      v23 = v35[1] + v50;
      v24 = v35[2] + v51;
    }
    else
    {
      v18 = (double)a6 * 0.1 + 0.7;
      v52 = v18;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      {
        sub_100DAE60(this);
        v18 = v52;
      }
      if ( (a4[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)a4);
        v18 = v52;
      }
      v19 = *(_DWORD *)(this + 252) >> 11;
      v20 = *((float *)a4 + 146) - *(float *)(this + 584);
      v21 = *((float *)a4 + 147) - *(float *)(this + 588);
      v49 = (*((float *)a4 + 145) - *(float *)(this + 580)) * v18;
      v50 = v20 * v18;
      v51 = v18 * v21;
      if ( (v19 & 1) != 0 )
        sub_100DAE60(this);
      v22 = *(float *)(this + 580) + v49;
      v23 = *(float *)(this + 584) + v50;
      v24 = *(float *)(this + 588) + v51;
    }
  }
  v38 = v23 - a3[1];
  v39 = v24 - a3[2];
  *a2 = v22 - *a3;
  a2[1] = v38;
  a2[2] = v39;
  off_10689714();
}
