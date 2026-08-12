void __thiscall sub_10162730(float *this)
{
  float *v2; // ecx
  float *v3; // ecx
  float *v4; // eax
  float *v5; // eax
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  float v9; // edx
  float v10; // ecx
  float v11; // eax
  float v12; // edx
  int (__thiscall *v13)(float *); // eax
  float *v14; // eax
  int v15; // ebx
  double v16; // st7
  float *v17; // esi
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  int v25; // eax
  double v26; // st6
  double v27; // st5
  double v28; // st5
  double v29; // rt2
  double v30; // st6
  double v31; // st7
  double v32; // st6
  double v33; // st7
  double v34; // rt1
  double v35; // st6
  double v36; // st6
  double v37; // st6
  double v38; // st7
  double v39; // st6
  double v40; // st5
  double v41; // st7
  double v42; // rt2
  _BYTE v43[12]; // [esp+4h] [ebp-58h] BYREF
  float v44; // [esp+10h] [ebp-4Ch] BYREF
  float v45; // [esp+14h] [ebp-48h]
  float v46; // [esp+18h] [ebp-44h]
  float v47[3]; // [esp+1Ch] [ebp-40h] BYREF
  float v48; // [esp+28h] [ebp-34h]
  float v49; // [esp+2Ch] [ebp-30h]
  float v50; // [esp+30h] [ebp-2Ch]
  float v51; // [esp+34h] [ebp-28h] BYREF
  float v52; // [esp+38h] [ebp-24h]
  float v53; // [esp+3Ch] [ebp-20h]
  float v54; // [esp+40h] [ebp-1Ch]
  float v55; // [esp+44h] [ebp-18h]
  float v56; // [esp+48h] [ebp-14h]
  float v57; // [esp+4Ch] [ebp-10h] BYREF
  float v58; // [esp+50h] [ebp-Ch]
  float v59; // [esp+54h] [ebp-8h]
  int v60; // [esp+58h] [ebp-4h]

  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  if ( fabs(this[368] - *v2) > 0.1
    || fabs(this[369] - v2[1]) > 0.1
    || fabs(this[370] - v2[2]) > 0.1
    || (v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this), fabs(this[371] - *v3) > 0.1)
    || fabs(this[372] - v3[1]) > 0.1
    || fabs(this[373] - v3[2]) > 0.1 )
  {
    v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    this[368] = *v4;
    this[369] = v4[1];
    this[370] = v4[2];
    v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
    this[371] = *v5;
    this[372] = v5[1];
    this[373] = v5[2];
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
    sub_101EE040(v6, &v57, &v51, v43);
    if ( *((_BYTE *)this + 1460) )
    {
      v54 = v57;
      v55 = v58;
      v56 = v59;
      v57 = -v51;
      v58 = -v52;
      v59 = -v53;
      v51 = v54;
      v52 = v55;
      v53 = v56;
    }
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    v8 = this[374] * this[358];
    v9 = v7[1];
    v10 = *v7;
    v11 = v7[2];
    v55 = v9;
    v12 = *this;
    v54 = v10;
    v48 = v57 * v8;
    v56 = v11;
    v13 = *(int (__thiscall **)(float *))(LODWORD(v12) + 36);
    v49 = v58 * v8;
    v50 = v8 * v59;
    v14 = (float *)v13(this);
    v15 = 0;
    v16 = *v14 + v48;
    v60 = 0;
    v17 = this + 377;
    v18 = v14[1] + v49;
    v19 = v16;
    v20 = v14[2] + v50;
    v48 = v19 - v54;
    v49 = v18 - v55;
    v50 = v20 - v56;
    do
    {
      v21 = (double)v60 * 0.25;
      v47[0] = v48 * v21 + v54;
      v47[1] = v49 * v21 + v55;
      v47[2] = v21 * v50 + v56;
      (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)dword_1041315C + 4))(
        dword_1041315C,
        &v44,
        v47,
        0);
      v22 = v44;
      *(v17 - 2) = v44;
      v23 = v45;
      *(v17 - 1) = v45;
      v24 = v46;
      *v17 = v46;
      v25 = *((unsigned __int8 *)this + 88);
      if ( ((_BYTE)this[366] & 1) != 0 )
      {
        v60 = *((unsigned __int8 *)this + 88);
        *(v17 - 2) = v22 + (double)v25 * 0.0039215689;
        v60 = *((unsigned __int8 *)this + 89);
        *(v17 - 1) = v23 + (double)v60 * 0.0039215689;
        v60 = *((unsigned __int8 *)this + 90);
        *v17 = 0.0039215689 * (double)v60 + v24;
        if ( *(v17 - 2) <= 1.0 )
        {
          if ( *(v17 - 2) >= 0.0 )
            v28 = *(v17 - 2);
          else
            v28 = 0.0;
          v29 = v28;
          v27 = 0.0;
          v26 = v29;
        }
        else
        {
          v26 = 1.0;
          v27 = 0.0;
        }
        *(v17 - 2) = v26;
        v30 = 1.0;
        v31 = v27;
        if ( *(v17 - 1) <= 1.0 )
        {
          v32 = v27;
          if ( v27 <= *(v17 - 1) )
            v27 = *(v17 - 1);
          v31 = v32;
          v30 = 1.0;
        }
        else
        {
          v27 = 1.0;
        }
        *(v17 - 1) = v27;
        if ( v30 >= *v17 )
        {
          v34 = v30;
          v35 = v31;
          v33 = v34;
          if ( v35 <= *v17 )
            v35 = *v17;
          *v17 = v35;
        }
        else
        {
          v33 = v30;
          *v17 = v30;
        }
      }
      else
      {
        v60 = *((unsigned __int8 *)this + 88);
        *(v17 - 2) = v22 * ((double)v25 * 0.0039215689);
        v60 = *((unsigned __int8 *)this + 89);
        *(v17 - 1) = v23 * ((double)v60 * 0.0039215689);
        v60 = *((unsigned __int8 *)this + 90);
        *v17 = 0.0039215689 * (double)v60 * v24;
        v33 = 1.0;
      }
      if ( *v17 >= (double)*(v17 - 1) )
        v36 = *v17;
      else
        v36 = *(v17 - 1);
      if ( v36 >= *(v17 - 2) )
      {
        if ( *v17 >= (double)*(v17 - 1) )
          v37 = *v17;
        else
          v37 = *(v17 - 1);
      }
      else
      {
        v37 = *(v17 - 2);
      }
      if ( v37 > v33 )
      {
        v38 = v33 / v37;
        v39 = v38 * *(v17 - 2);
        v40 = v38;
        v41 = *(v17 - 1) * v38;
        v42 = v40 * *v17;
        *(v17 - 2) = v39;
        *(v17 - 1) = v41;
        *v17 = v42;
      }
      ++v15;
      v17 += 3;
      v60 = v15;
    }
    while ( v15 < 5 );
  }
}
