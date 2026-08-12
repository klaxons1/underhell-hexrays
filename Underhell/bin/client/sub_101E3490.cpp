double __thiscall sub_101E3490(int this, int a2, float a3)
{
  unsigned __int8 (__thiscall *v4)(int); // edx
  double result; // st7
  int v6; // ecx
  float *v7; // edi
  float *v8; // ebp
  int v9; // ebx
  int v10; // esi
  char *v11; // ebp
  int v12; // eax
  int v13; // esi
  double (__thiscall ***v14)(_DWORD); // esi
  float *v15; // ebx
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st3
  double v24; // st5
  double v25; // st3
  double v26; // st4
  double v27; // st6
  double v28; // st5
  int v29; // edi
  int v30; // ebx
  double v31; // st6
  char v32; // [esp+1Bh] [ebp-69h] BYREF
  char *v33; // [esp+1Ch] [ebp-68h]
  int v34; // [esp+20h] [ebp-64h]
  int v35; // [esp+24h] [ebp-60h] BYREF
  int v36; // [esp+28h] [ebp-5Ch] BYREF
  int v37; // [esp+2Ch] [ebp-58h] BYREF
  int v38[3]; // [esp+30h] [ebp-54h] BYREF
  int v39; // [esp+3Ch] [ebp-48h] BYREF
  float v40; // [esp+40h] [ebp-44h]
  float v41; // [esp+44h] [ebp-40h]
  int v42; // [esp+48h] [ebp-3Ch] BYREF
  float v43; // [esp+4Ch] [ebp-38h]
  float v44; // [esp+50h] [ebp-34h]
  int v45[3]; // [esp+54h] [ebp-30h] BYREF
  int v46[3]; // [esp+60h] [ebp-24h] BYREF
  int v47[3]; // [esp+6Ch] [ebp-18h] BYREF
  int v48[3]; // [esp+78h] [ebp-Ch] BYREF

  v4 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4);
  v33 = (char *)this;
  if ( !v4(a2) )
    return 0.0;
  v34 = *(_DWORD *)(this + 12);
  v6 = v34;
  if ( v34 < 1 )
    return 1.0;
  v7 = 0;
  v8 = 0;
  v9 = v34 / 2;
  if ( v34 / 2 <= 1 )
    v9 = 1;
  v10 = v9;
  if ( v9 <= -2 )
    return 1.0;
  while ( v10 < v6 + 1 )
  {
    v11 = v33;
    v7 = sub_101E2D40(v33, (double (__thiscall ***)(_DWORD))a2, v10, &v32);
    v8 = sub_101E2D40(v11, (double (__thiscall ***)(_DWORD))a2, v10 + 1, &v32);
    v9 /= 2;
    if ( v9 <= 1 )
      v9 = 1;
    if ( a3 >= (double)v7[1] )
    {
      if ( a3 <= (double)v8[1] )
        goto LABEL_18;
      v10 += v9;
    }
    else
    {
      v10 -= v9;
    }
    if ( v10 <= -2 )
    {
LABEL_18:
      v6 = v34;
      break;
    }
    v6 = v34;
  }
  if ( !v7 )
    return 1.0;
  v12 = v10 - 1;
  v13 = v10 + 2;
  v34 = v13;
  if ( v12 < -1 )
    v12 = -1;
  if ( v13 >= v6 )
    v34 = v6;
  v14 = (double (__thiscall ***)(_DWORD))a2;
  v15 = sub_101E2D40(v33, (double (__thiscall ***)(_DWORD))a2, v12, &a2);
  v16 = sub_101E2D40(v33, v14, v34, (_BYTE *)&a2 + 1);
  v17 = v8[1] - v7[1];
  v18 = *v15;
  v45[0] = *((int *)v15 + 1);
  *(float *)&v45[1] = v18;
  *(float *)&v45[2] = 0.0;
  v19 = *v7;
  v20 = v7[1];
  v42 = *((int *)v7 + 1);
  v43 = v19;
  v21 = v20;
  v44 = 0.0;
  v22 = *v8;
  v23 = v8[1];
  v39 = *((int *)v8 + 1);
  v40 = v22;
  v24 = v23;
  v41 = 0.0;
  v25 = *v16;
  v38[0] = *((int *)v16 + 1);
  *(float *)&v38[1] = v25;
  *(float *)&v38[2] = 0.0;
  if ( (_BYTE)a2 )
  {
    v26 = v21;
    v27 = 0.0;
    *(float *)v45 = v26;
  }
  else
  {
    v27 = 0.0;
  }
  if ( BYTE1(a2) )
    *(float *)v38 = v24;
  *(float *)&a2 = v27;
  if ( v27 < v17 )
  {
    v28 = (a3 - v7[1]) / v17;
    *(float *)&a2 = v28;
    if ( v28 <= 1.0 )
    {
      if ( v27 > v28 )
        *(float *)&a2 = v27;
    }
    else
    {
      *(float *)&a2 = 1.0;
    }
  }
  v29 = *((unsigned __int16 *)v7 + 4) >> 1;
  v30 = *((unsigned __int16 *)v8 + 4) >> 1;
  if ( !v29 )
    LOWORD(v29) = ((int (__thiscall *)(double (__thiscall ***)(_DWORD)))(*v14)[2])(v14);
  if ( !v30 )
    LOWORD(v30) = ((int (__thiscall *)(double (__thiscall ***)(_DWORD)))(*v14)[2])(v14);
  sub_100D9FD0(v29, &v36, &v37);
  sub_100D9FD0(v30, &v35, &v36);
  if ( v37 == 15 )
  {
    result = v43;
  }
  else if ( v35 == 15 )
  {
    result = v40;
  }
  else
  {
    if ( v37 == v35 )
    {
      sub_100DA070(v35, (int)v45, (float *)&v42, (float *)&v39, (int)v38, *(float *)&a2, (float *)v46);
    }
    else
    {
      sub_100DA070(v37, (int)v45, (float *)&v42, (float *)&v39, (int)v38, *(float *)&a2, (float *)v48);
      sub_100DA070(v35, (int)v45, (float *)&v42, (float *)&v39, (int)v38, *(float *)&a2, (float *)v47);
      sub_1000E380((float *)v48, (float *)v47, *(float *)&a2, (float *)v46);
    }
    result = *(float *)&v46[1];
  }
  v31 = 1.0;
  if ( result > 1.0 )
    return v31;
  v31 = 0.0;
  if ( result < 0.0 )
    return v31;
  return result;
}
