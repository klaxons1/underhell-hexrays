void __thiscall sub_10350E50(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  int (__thiscall *v7)(int); // edx
  int v8; // eax
  double v9; // st7
  float *v10; // esi
  float *v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // st6
  bool v15; // cc
  int v16; // eax
  double v17; // st3
  double v18; // st1
  double v19; // st5
  double v20; // st1
  double v21; // st7
  double v22; // rt2
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // rt2
  double v28; // st6
  double v29; // st5
  double v30; // st7
  _BYTE v31[4]; // [esp+14h] [ebp-70h] BYREF
  float v32; // [esp+18h] [ebp-6Ch]
  int v33; // [esp+20h] [ebp-64h] BYREF
  float v34; // [esp+24h] [ebp-60h]
  float v35; // [esp+28h] [ebp-5Ch]
  int v36[6]; // [esp+2Ch] [ebp-58h] BYREF
  int v37[3]; // [esp+44h] [ebp-40h] BYREF
  float v38; // [esp+50h] [ebp-34h] BYREF
  float v39; // [esp+54h] [ebp-30h]
  float v40; // [esp+58h] [ebp-2Ch]
  float v41; // [esp+5Ch] [ebp-28h] BYREF
  float v42; // [esp+60h] [ebp-24h]
  float v43; // [esp+64h] [ebp-20h]
  float v44; // [esp+68h] [ebp-1Ch]
  float v45; // [esp+6Ch] [ebp-18h]
  float v46; // [esp+70h] [ebp-14h]
  int v47; // [esp+74h] [ebp-10h]
  float v48; // [esp+78h] [ebp-Ch]
  float v49; // [esp+7Ch] [ebp-8h]
  char v50; // [esp+83h] [ebp-1h]

  sub_100BF1B0((void *)this, "muzzle", (int)v37, 0, 0, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 288))(v2);
    if ( v3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1088))(v3) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    }
    else
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v5 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 504))(v6, &v33);
    }
    v44 = *v5;
    v45 = v5[1];
    v7 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
    v46 = v5[2];
    v8 = v7(this);
    v50 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8);
  }
  else
  {
    v9 = *(float *)(this + 4180);
    v50 = 0;
    v44 = v9;
    v45 = *(float *)(this + 4184);
    v46 = *(float *)(this + 4188);
  }
  v10 = (float *)(this + 4180);
  v41 = v44 - *(float *)(this + 4180);
  v42 = v45 - *(float *)(this + 4184);
  v43 = v46 - *(float *)(this + 4188);
  off_10689714();
  *(float *)&v36[3] = v44 - *(float *)v37;
  *(float *)&v36[4] = v45 - *(float *)&v37[1];
  *(float *)&v36[5] = v46 - *(float *)&v37[2];
  off_10689714();
  v11 = (float *)(this + 4192);
  v48 = off_10689714();
  sub_10422540(&v41, &v38);
  sub_10422540(this + 4192, v31);
  if ( *(_DWORD *)(dword_106E6A14 + 48) == 3 )
  {
    *(float *)v36 = 2.0;
    *(float *)&v36[1] = 2.0;
    *(float *)&v36[2] = 2.0;
    *(float *)&v33 = -2.0;
    v34 = -2.0;
    v35 = -2.0;
    sub_1011C000((float *)(this + 4180), (float *)&v33, (float *)v36, 0, 0, 255, 1, 4.0);
  }
  v12 = v32;
  sub_10424C10(v32, v39);
  v49 = v12;
  v47 = v50 != 0 ? 6 : 30;
  v13 = (double)v47;
  if ( v13 >= v12 )
  {
    v47 = -(v50 != 0 ? 6 : 30);
    v14 = (double)v47;
    if ( v14 > v12 )
      v49 = v14;
  }
  else
  {
    v49 = v13;
  }
  v15 = *(_DWORD *)(this + 4144) < 5;
  v38 = 0.0;
  v40 = 0.0;
  if ( v15
    && (!(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
     || (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
         (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 264))(v16))) )
  {
    v47 = (unsigned __int16)(int)((v32 - v49) * 182.04445);
    v39 = (double)v47 * 0.0054931641;
    v17 = *(float *)(this + 4188) - v46;
    v18 = *(float *)(this + 4184) - v45;
    v19 = v18 * v18;
    v20 = *v10 - v44;
    v21 = v45;
    if ( v20 * v20 + v19 + v17 * v17 <= 4096.0 )
    {
      v22 = v46;
      *v10 = v44;
      *(float *)(this + 4184) = v21;
      *(float *)(this + 4188) = v22;
      return;
    }
  }
  else
  {
    v39 = v32;
    v48 = 800.0;
  }
  sub_10422220(&v38, &v41);
  v23 = v48 * v43;
  v24 = v42 * v48;
  *v11 = v41 * v48;
  *(float *)(this + 4196) = v24;
  *(float *)(this + 4200) = v23;
  v25 = 0.1;
  if ( *(_DWORD *)(dword_106E6A14 + 48) == 3 )
  {
    v26 = 0.1 * *(float *)(this + 4200);
    v27 = *(float *)(this + 4196) * 0.1;
    *(float *)&v33 = *v11 * 0.1 + *v10;
    v34 = v27 + *(float *)(this + 4184);
    v35 = v26 + *(float *)(this + 4188);
    sub_1011BC50((float *)(this + 4180), (float *)&v33, 255, 0, 0, 1, 4.0);
    v25 = 0.1;
  }
  v28 = *v11 * v25;
  v29 = *(float *)(this + 4196) * v25;
  v30 = v25 * *(float *)(this + 4200);
  *v10 = v28 + *v10;
  *(float *)(this + 4184) = v29 + *(float *)(this + 4184);
  *(float *)(this + 4188) = v30 + *(float *)(this + 4188);
  *(float *)(this + 4188) = v46;
}
