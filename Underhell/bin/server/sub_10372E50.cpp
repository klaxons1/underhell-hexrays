char __thiscall sub_10372E50(void *this, float *a2, float *a3, int a4, char a5)
{
  double v7; // st6
  double v8; // st5
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  int v12; // eax
  double v13; // st7
  int v14; // eax
  char *v15; // eax
  double v16; // st7
  int v17; // eax
  char *v18; // eax
  float *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  long double v24; // st7
  int v25; // [esp+8h] [ebp-84h]
  int v26[14]; // [esp+18h] [ebp-74h] BYREF
  float v27; // [esp+50h] [ebp-3Ch]
  int v28[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v29; // [esp+68h] [ebp-24h]
  float v30; // [esp+6Ch] [ebp-20h]
  float v31; // [esp+70h] [ebp-1Ch]
  int v32; // [esp+74h] [ebp-18h] BYREF
  float v33; // [esp+78h] [ebp-14h]
  float v34; // [esp+7Ch] [ebp-10h]
  int v35; // [esp+80h] [ebp-Ch] BYREF
  long double v36; // [esp+84h] [ebp-8h]
  _DWORD *v37; // [esp+A0h] [ebp+14h]
  float v38; // [esp+A0h] [ebp+14h]

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
    return 0;
  if ( !a5 && !*(_DWORD *)(dword_106E8F4C + 48) )
  {
    v7 = a2[1] - a3[1];
    v8 = *a2 - *a3;
    v9 = v8 * v8 + v7 * v7;
    if ( v9 < 65536.0 || v9 > 1048576.0 )
      return 0;
  }
  v29 = *a3 - *a2;
  v30 = a3[1] - a2[1];
  v31 = a3[2] - a2[2];
  off_10689714();
  v10 = (float *)sub_10022D70();
  *v10 = *((float *)this + 85) - *((float *)this + 82);
  v10[1] = *((float *)this + 86) - *((float *)this + 83);
  v10[2] = *((float *)this + 87) - *((float *)this + 84);
  v11 = *v10 * 0.5;
  *(float *)&v32 = *a3 - v29 * v11;
  v33 = a3[1] - v30 * v11;
  v34 = a3[2] - v11 * v31;
  memset(v26, 0, sizeof(v26));
  v37 = (_DWORD *)*((_DWORD *)this + 650);
  v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  sub_1007C550(v37, 0, a2, (float *)&v32, 147467, v12, 100.0, 0, (float *)v26);
  if ( *(_DWORD *)(dword_106E94A4 + 48) == 1 )
  {
    *(float *)&v35 = *(float *)&v32 - *a2;
    *(float *)&v36 = v33 - a2[1];
    *((float *)&v36 + 1) = v34 - a2[2];
    v13 = off_10689714();
    v14 = *((_DWORD *)this + 419);
    v27 = v13;
    v15 = sub_10073730(v14);
    *(float *)v28 = *(float *)v15 + v27;
    v28[1] = *((int *)v15 + 1);
    v16 = *((float *)v15 + 2);
    v17 = *((_DWORD *)this + 419);
    *(float *)&v28[2] = v16;
    v18 = sub_10073710(v17);
    sub_1011BB60((int)a2, (int)v18, (int)v28, (int)&v35, 0, 255, 0, 8, 1.0);
  }
  if ( v26[0] >= 0 )
  {
    v25 = *((_DWORD *)this + 419);
    v36 = fabs(a3[2] - *(float *)&v26[3]);
    v24 = sub_100737D0(v25) * 0.7;
    return v24 >= v36;
  }
  v19 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
  if ( fabs(v19[1] - *(float *)&v26[2]) + fabs(*v19 - *(float *)&v26[1]) + fabs(v19[2] - *(float *)&v26[3]) < 256.0
    || !v26[7] )
  {
    return 0;
  }
  v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  if ( v20 && (v21 = *(_DWORD *)(v20 + 12)) != 0 )
    v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 20))(v21);
  else
    v22 = 0;
  v23 = v26[7];
  if ( v26[7] != v22 )
    return *(_BYTE *)(v23 + 225) || *(_BYTE *)(v23 + 306) == 6;
  v38 = fabs(*(float *)&v26[3] - v34);
  if ( ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 1724))(this) < v38 )
    return 0;
  if ( fabs(*(float *)&v26[2] - v33) + fabs(*(float *)&v26[1] - *(float *)&v32) + fabs(*(float *)&v26[3] - v34) < 64.0 )
    return 1;
  v23 = v26[7];
  return *(_BYTE *)(v23 + 225) || *(_BYTE *)(v23 + 306) == 6;
}
