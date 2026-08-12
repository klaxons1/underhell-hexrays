void __thiscall sub_10388070(int this, float a2)
{
  float v3; // eax
  float v4; // edx
  int *v5; // ecx
  int v6; // eax
  double v7; // st7
  int (__thiscall *v8)(int); // eax
  int v9; // eax
  int v10; // edi
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // eax
  float v15; // edx
  float v16; // eax
  int v17; // ebx
  float *v18; // edi
  float *v19; // eax
  double v20; // st1
  double v21; // st7
  double v22; // rt2
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // st7
  int v27; // ecx
  int v28; // ecx
  double v29; // st7
  double v30; // st6
  double v31; // st7
  double v32; // st5
  double v33; // st7
  double v34; // st5
  double v35; // rt1
  float v36; // [esp+14h] [ebp-5Ch]
  float v37; // [esp+20h] [ebp-50h]
  float v38; // [esp+20h] [ebp-50h]
  float v39; // [esp+24h] [ebp-4Ch]
  float v40; // [esp+24h] [ebp-4Ch]
  float v41; // [esp+2Ch] [ebp-44h] BYREF
  float v42; // [esp+30h] [ebp-40h]
  float v43; // [esp+34h] [ebp-3Ch]
  float v44; // [esp+38h] [ebp-38h]
  float v45; // [esp+3Ch] [ebp-34h]
  float v46; // [esp+40h] [ebp-30h]
  float v47; // [esp+44h] [ebp-2Ch]
  float v48; // [esp+48h] [ebp-28h]
  float v49; // [esp+4Ch] [ebp-24h]
  float v50; // [esp+50h] [ebp-20h] BYREF
  float v51; // [esp+54h] [ebp-1Ch]
  float v52; // [esp+58h] [ebp-18h]
  float v53; // [esp+5Ch] [ebp-14h]
  float v54; // [esp+60h] [ebp-10h]
  float v55; // [esp+64h] [ebp-Ch]
  float v56; // [esp+68h] [ebp-8h]
  float v57; // [esp+6Ch] [ebp-4h]

  sub_101C7080(this);
  v3 = *(float *)(this + 3624);
  v4 = *(float *)(this + 3632);
  v45 = *(float *)(this + 3628);
  v5 = *(int **)(this + 424);
  v44 = v3;
  v6 = *v5;
  v46 = v4;
  (*(void (__thiscall **)(int *))(v6 + 96))(v5);
  if ( *(_BYTE *)(this + 3895) )
    v7 = 2.0;
  else
    v7 = 1.0;
  if ( v7 > *(float *)(this + 3796) && *(float *)(this + 3828) < (double)*(float *)(dword_106B31C8 + 12) )
    *(float *)(this + 3796) = *(float *)(this + 3796) + 0.05;
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
  v57 = 7.0;
  if ( v8(this) )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v10 = v9;
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v11 = *(float *)(this + 584) - *(float *)(v10 + 584);
    v12 = *(float *)(this + 580) - *(float *)(v10 + 580);
    v37 = v12 * v12 + v11 * v11;
    v13 = off_10689708(v37);
    v56 = v13;
    if ( v13 < 200.0 )
      v57 = 2.0;
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( sub_103835D0((void *)this, v14)
      && v56 < 200.0
      && *(float *)(this + 3808) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      v15 = *(float *)(this + 3628);
      v16 = *(float *)(this + 3632);
      v47 = *(float *)(this + 3624);
      v48 = v15;
      v49 = v16;
      off_10689714();
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      v19 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v17 + 504))(v17, &v41);
      v50 = *v19 - *v18;
      v51 = v19[1] - v18[1];
      v52 = v19[2] - v18[2];
      off_10689714();
      v20 = v49 * v52 + v48 * v51 + v50 * v47;
      v56 = v20;
      if ( v20 > 0.75 )
      {
        v53 = v50 - v47;
        v54 = v51 - v48;
        v55 = v52 - v49;
        off_10689714();
        v41 = v56 * *(float *)(this + 3624);
        v42 = *(float *)(this + 3628) * v56;
        v43 = v56 * *(float *)(this + 3632);
        v55 = 0.0;
        sub_10018D40(&v41);
        v21 = v54 * (0.0 * 0.25);
        v22 = 0.0 * 0.25 * v55;
        *(float *)(this + 3740) = v53 * (0.0 * 0.25) + *(float *)(this + 3740);
        *(float *)(this + 3744) = v21 + *(float *)(this + 3744);
        *(float *)(this + 3748) = v22 + *(float *)(this + 3748);
        sub_103824D0(this, &v50);
        sub_10387600(this, 2);
      }
    }
    if ( *(float *)(this + 3812) < (double)*(float *)(dword_106B31C8 + 12) && *(_BYTE *)(this + 3853) )
    {
      *(_BYTE *)(this + 3853) = 0;
      sub_1023C380((_DWORD *)this, (int)"NPC_Manhack.ChargeEnd", 0.0, 0);
    }
  }
  v23 = *(float *)(this + 3744) + v45;
  v24 = *(float *)(this + 3748) + v46;
  *(float *)(this + 3624) = *(float *)(this + 3740) + v44;
  *(float *)(this + 3628) = v23;
  *(float *)(this + 3632) = v24;
  *(float *)(this + 3740) = flt_106F1CA8;
  *(float *)(this + 3744) = flt_106F1CAC;
  *(float *)(this + 3748) = flt_106F1CB0;
  if ( !*(_BYTE *)(this + 3895) || (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    sub_103280A0((float *)this, v57);
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3828) )
  {
    if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.34999999) )
      v25 = 800.0;
    else
      v25 = 500.0;
  }
  else
  {
    v25 = 50.0;
  }
  v39 = v25;
  sub_103285A0((float *)this, 200.0, v39);
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3828) )
  {
    if ( !*(_BYTE *)(this + 447) )
      goto LABEL_40;
    v26 = 0.0;
    if ( *(float *)(this + 3632) > 0.0 )
      v26 = *(float *)(this + 3632);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, this + 580, 0) & 0x30) != 0 )
      v26 = 20.0;
    else
      v26 = 0.0;
  }
  *(float *)(this + 3632) = v26;
LABEL_40:
  sub_10384EC0((float *)this, a2);
  if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.34999999) )
  {
    v27 = *(_DWORD *)(this + 424);
    if ( !v27 || ((*(int (__thiscall **)(int))(*(_DWORD *)v27 + 76))(v27) & 4) == 0 )
    {
      v28 = *(_DWORD *)(this + 424);
      if ( v28 )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v28 + 204))(v28, &v41, 0);
        v29 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 3840)) * 2.857142857142857;
        v30 = 1.0;
        if ( v29 <= 1.0 )
        {
          if ( v29 >= 0.0 )
          {
            v34 = v29;
            v31 = 1.0;
            v35 = v34;
            v32 = 0.0;
            v30 = v35;
          }
          else
          {
            v30 = 0.0;
            v32 = 0.0;
            v31 = 1.0;
          }
        }
        else
        {
          v31 = 1.0;
          v32 = 0.0;
        }
        v40 = v31;
        v38 = v32;
        v36 = v30;
        v33 = sub_102191B0(v36, v38, v40, v38, v40);
        *(float *)(this + 3624) = v41 + (*(float *)(this + 3624) - v41) * v33;
        *(float *)(this + 3628) = v42 + (*(float *)(this + 3628) - v42) * v33;
        *(float *)(this + 3632) = v33 * (*(float *)(this + 3632) - v43) + v43;
      }
    }
  }
  if ( *(float *)(this + 3804) <= (double)*(float *)(dword_106B31C8 + 12) && a2 > 0.0 )
  {
    *(float *)(this + 3636) = *(float *)(this + 3636) * 0.5 + *(float *)(this + 3752) * 0.5;
    *(float *)(this + 3644) = 0.5 * *(float *)(this + 3760) + *(float *)(this + 3644) * 0.5;
  }
  if ( *(_BYTE *)(this + 224) != 2 )
    sub_10385950((float *)this);
}
