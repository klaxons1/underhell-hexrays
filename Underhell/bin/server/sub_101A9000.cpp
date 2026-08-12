char __thiscall sub_101A9000(int this, int a2)
{
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  int v8; // ecx
  int v9; // eax
  float *v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  float *v19; // edi
  double v20; // st6
  double v21; // st5
  double v22; // st7
  int v23; // eax
  float v24; // eax
  float v25; // edx
  long double v26; // st4
  long double v27; // st4
  long double v28; // st6
  long double v29; // st7
  int v30; // edi
  float v31; // eax
  float v32; // ecx
  float *v33; // edi
  double v34; // st7
  double v35; // st6
  double v36; // st5
  float v37; // edi
  int v38; // eax
  int v39; // eax
  float v41; // [esp+14h] [ebp-C0h]
  float v42; // [esp+18h] [ebp-BCh]
  float v43; // [esp+18h] [ebp-BCh]
  char v44[12]; // [esp+28h] [ebp-ACh] BYREF
  float v45[3]; // [esp+34h] [ebp-A0h] BYREF
  float v46[3]; // [esp+40h] [ebp-94h] BYREF
  float v47[3]; // [esp+4Ch] [ebp-88h] BYREF
  int v48[3]; // [esp+58h] [ebp-7Ch] BYREF
  float v49[3]; // [esp+64h] [ebp-70h] BYREF
  int v50[3]; // [esp+70h] [ebp-64h] BYREF
  int v51; // [esp+7Ch] [ebp-58h] BYREF
  float v52; // [esp+80h] [ebp-54h]
  float v53; // [esp+84h] [ebp-50h]
  float v54; // [esp+88h] [ebp-4Ch]
  float v55; // [esp+8Ch] [ebp-48h]
  float v56; // [esp+90h] [ebp-44h]
  int v57; // [esp+94h] [ebp-40h] BYREF
  float v58; // [esp+98h] [ebp-3Ch]
  float v59; // [esp+9Ch] [ebp-38h]
  float v60; // [esp+A0h] [ebp-34h]
  float v61; // [esp+A4h] [ebp-30h]
  float v62; // [esp+A8h] [ebp-2Ch]
  int v63; // [esp+ACh] [ebp-28h] BYREF
  float v64; // [esp+B0h] [ebp-24h]
  float v65; // [esp+B4h] [ebp-20h]
  float v66; // [esp+B8h] [ebp-1Ch]
  int v67; // [esp+BCh] [ebp-18h] BYREF
  float v68; // [esp+C0h] [ebp-14h]
  float v69; // [esp+C4h] [ebp-10h]
  int v70; // [esp+C8h] [ebp-Ch] BYREF
  float v71; // [esp+CCh] [ebp-8h]
  float v72; // [esp+D0h] [ebp-4h]

  if ( !*(_DWORD *)(this + 3644) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3676) = *(float *)(this + 580);
    *(float *)(this + 3680) = *(float *)(this + 584);
    *(float *)(this + 3684) = *(float *)(this + 588);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3688) = *(float *)(this + 580);
    *(float *)(this + 3692) = *(float *)(this + 584);
    *(float *)(this + 3696) = *(float *)(this + 588);
    v3 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
    *(float *)(this + 3664) = *v3;
    *(float *)(this + 3668) = v3[1];
    *(float *)(this + 3672) = v3[2];
    sub_101A82E0(this);
    v4 = (float *)sub_10184390(76);
    if ( v4 )
      v5 = sub_101A84C0(
             v4,
             (float *)(this + 3688),
             (float *)(this + 3676),
             (float *)(this + 3664),
             (float *)(this + 3700));
    else
      v5 = 0;
    *(_DWORD *)(this + 3636) = v5;
    v6 = (float *)sub_10184390(76);
    if ( v6 )
      v7 = sub_101A84C0(
             v6,
             (float *)(this + 3676),
             (float *)(this + 3664),
             (float *)(this + 3700),
             (float *)(this + 3712));
    else
      v7 = 0;
    v8 = *(_DWORD *)(this + 3636);
    *(float *)(this + 3724) = 0.2;
    *(_DWORD *)(this + 3640) = v7;
    *(_DWORD *)(this + 3644) = v8;
    *(_DWORD *)(this + 3648) = v7;
  }
  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v47, v46);
  if ( sub_10422010(v47, v46, *(_DWORD *)(this + 3644) + 56) == 3 && sub_101A8760(this) )
    return 1;
  v9 = *(_DWORD *)(this + 3648);
  if ( v9 )
  {
    if ( sub_10422010(v47, v46, v9 + 56) == 3 && sub_101A8760(this) )
      return 1;
  }
  v10 = *(float **)(this + 3644);
  if ( v10 && *(_DWORD *)(this + 3648) )
  {
    if ( *(float *)(this + 3724) > 1.0 )
      v10 = *(float **)(this + 3648);
    v11 = *(_DWORD *)(this + 3632);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
    v13 = *(_DWORD *)(v12 + 424);
    if ( v13 )
    {
      (*(void (__thiscall **)(int, float *, char *))(*(_DWORD *)v13 + 204))(v13, v45, v44);
      sub_100D7A40(v45);
      v66 = 1.0;
      v14 = dword_106B31C8;
      v15 = sub_100E92C0((_DWORD *)this, 0);
      v16 = (*(float *)(v14 + 12) - v15) * (v66 / v10[1]) + *(float *)(this + 3724);
      if ( v16 <= 2.0 )
      {
        if ( v16 < 0.0 )
          v16 = 0.0;
      }
      else
      {
        v16 = 2.0;
      }
      *(float *)(this + 3724) = v16;
      if ( v16 > 1.0 )
      {
        v10 = *(float **)(this + 3648);
        v16 = v16 - 1.0;
      }
      v42 = v16;
      sub_101A8070(v10, (float *)&v57, v42);
      if ( *(float *)(this + 3724) <= 1.0 )
        v17 = *(float *)(this + 3724);
      else
        v17 = *(float *)(this + 3724) - 1.0;
      v43 = v17;
      sub_101A80B0(v10, (float *)v50, v43);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v60 = *(float *)&v57 - *(float *)(this + 580);
      v61 = v58 - *(float *)(this + 584);
      v62 = v59 - *(float *)(this + 588);
      v66 = off_10689714();
      v18 = off_10689714();
      v19 = (float *)(this + 3652);
      if ( v18 * 0.75 >= v66 )
      {
        *(float *)&v70 = v60 * v18;
        v71 = v61 * v18;
        v72 = v62 * v18;
        v41 = v66 / (v18 * 0.5);
        sub_100E8670((float *)v50, (float *)&v70, v41, (float *)(this + 3652));
      }
      else
      {
        v20 = v60 * v18;
        v21 = v61 * v18;
        v22 = v18 * v62;
        *v19 = v20;
        *(float *)(this + 3656) = v21;
        *(float *)(this + 3660) = v22;
      }
      v23 = sub_1026A890(this + 3632);
      (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v23 + 528))(v23, 0, v49, 0);
      v24 = *v19;
      v25 = *(float *)(this + 3660);
      v55 = *(float *)(this + 3656);
      v54 = v24;
      v56 = v25;
      off_10689714();
      v26 = 1.0 - fabs(v49[2] * v56 + v49[1] * v55 + v49[0] * v54);
      if ( v26 < *(float *)(this + 3732) )
        v26 = *(float *)(this + 3732);
      v27 = v26 * *(float *)(this + 3736);
      v28 = v55 * v27;
      v29 = v56 * v27;
      *v19 = v54 * v27;
      *(float *)(this + 3656) = v28;
      *(float *)(this + 3660) = v29;
      if ( (*(_BYTE *)(dword_106B945C + 48) & 1) != 0 )
      {
        *(float *)&v70 = 15.0;
        v71 = 15.0;
        v72 = 15.0;
        *(float *)&v67 = -15.0;
        v68 = -15.0;
        v69 = -15.0;
        sub_1011BB20(this + 3688, (int)&v67, (int)&v70, 192, 0, 0, 1, 0.1);
        *(float *)&v70 = 20.0;
        v71 = 20.0;
        v72 = 20.0;
        *(float *)&v67 = -20.0;
        v68 = -20.0;
        v69 = -20.0;
        sub_1011BB20(this + 3676, (int)&v67, (int)&v70, 255, 0, 0, 1, 0.1);
        *(float *)&v70 = 20.0;
        v71 = 20.0;
        v72 = 20.0;
        *(float *)&v67 = -20.0;
        v68 = -20.0;
        v69 = -20.0;
        sub_1011BB20(this + 3700, (int)&v67, (int)&v70, 0, 192, 0, 1, 0.1);
        *(float *)&v70 = 20.0;
        v71 = 20.0;
        v72 = 20.0;
        *(float *)&v67 = -20.0;
        v68 = -20.0;
        v69 = -20.0;
        sub_1011BB20(this + 3712, (int)&v67, (int)&v70, 0, 128, 0, 1, 0.1);
        *(float *)&v70 = 10.0;
        v71 = 10.0;
        v72 = 10.0;
        *(float *)&v67 = -10.0;
        v68 = -10.0;
        v69 = -10.0;
        sub_1011BB20((int)&v57, (int)&v67, (int)&v70, 0, 0, 255, 1, 0.1);
        *(float *)&v70 = *(float *)v50 * 40.0 + *(float *)&v57;
        v71 = *(float *)&v50[1] * 40.0 + v58;
        v72 = 40.0 * *(float *)&v50[2] + v59;
        sub_1011BC50((float *)&v57, (float *)&v70, 0, 0, 255, 1, 0.1);
        v30 = *(_DWORD *)(this + 3644);
        *(float *)&v70 = 0.0;
        v71 = 0.0;
        v72 = 1.0;
        sub_1001EFB0((float *)(v30 + 56), (float *)&v70, (float *)&v67);
        v31 = *(float *)(v30 + 36);
        v32 = *(float *)(v30 + 40);
        v70 = *(int *)(v30 + 32);
        *(float *)&v63 = *(float *)&v67 * 100.0 + *(float *)&v70;
        v64 = v68 * 100.0 + v31;
        v65 = 100.0 * v69 + v32;
        *(float *)&v70 = *(float *)&v70 + *(float *)&v67 * -100.0;
        v71 = v31 + v68 * -100.0;
        v72 = v69 * -100.0 + v32;
        sub_1011BC50((float *)&v70, (float *)&v63, 255, 0, 0, 1, 0.1);
        v33 = *(float **)(this + 3648);
        *(float *)&v63 = 0.0;
        v64 = 0.0;
        v65 = 1.0;
        sub_1001EFB0(v33 + 14, (float *)&v63, (float *)&v67);
        v34 = v33[8];
        v35 = v33[9];
        v36 = v33[10];
        v52 = v68 * 100.0;
        *(float *)&v63 = *(float *)&v67 * 100.0 + v34;
        v64 = v52 + v35;
        v65 = 100.0 * v69 + v36;
        *(float *)&v70 = v34 + *(float *)&v67 * -100.0;
        v71 = v35 + v68 * -100.0;
        v72 = -100.0 * v69 + v36;
        sub_1011BC50((float *)&v70, (float *)&v63, 192, 0, 0, 1, 0.1);
      }
      if ( (*(_BYTE *)(dword_106B945C + 48) & 2) != 0 )
      {
        v37 = 0.0;
        v66 = 0.0;
        do
        {
          v38 = *(_DWORD *)(this + 3644);
          *(float *)&v67 = 0.0;
          v68 = 0.0;
          v69 = 0.0;
          v66 = (double)SLODWORD(v66) * 0.1;
          sub_10423440(v38 + 8, v38 + 20, v38 + 32, v38 + 44, v66, (int)&v67);
          v39 = *(_DWORD *)(this + 3644);
          *(float *)&v70 = 0.0;
          v71 = 0.0;
          v72 = 0.0;
          sub_10423620(v39 + 8, v39 + 20, v39 + 32, v39 + 44, v66, (int)&v70);
          off_10689714();
          *(float *)&v63 = 10.0;
          v64 = 10.0;
          v65 = 10.0;
          *(float *)v48 = -10.0;
          *(float *)&v48[1] = -10.0;
          *(float *)&v48[2] = -10.0;
          sub_1011BB20((int)&v67, (int)v48, (int)&v63, 255, 0, 0, 1, 0.1);
          *(float *)&v51 = *(float *)&v70 * 10.0 + *(float *)&v67;
          v52 = v71 * 10.0 + v68;
          v53 = 10.0 * v72 + v69;
          sub_1011BC50((float *)&v67, (float *)&v51, 255, 255, 0, 1, 0.1);
          ++LODWORD(v37);
          v66 = v37;
        }
        while ( SLODWORD(v37) < 10 );
      }
      return 1;
    }
  }
  return 0;
}
