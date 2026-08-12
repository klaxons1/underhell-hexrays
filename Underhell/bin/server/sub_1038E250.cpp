double __thiscall sub_1038E250(int this, float a2, float a3, float a4, float a5, float *a6)
{
  float *v8; // eax
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st5
  float v14; // [esp+4h] [ebp-30h]
  float v15; // [esp+4h] [ebp-30h]
  float v16; // [esp+8h] [ebp-2Ch]
  float v17; // [esp+8h] [ebp-2Ch]
  float v18; // [esp+Ch] [ebp-28h]
  int v19; // [esp+1Ch] [ebp-18h] BYREF
  float v20; // [esp+20h] [ebp-14h]
  float v21; // [esp+24h] [ebp-10h]
  int v22; // [esp+28h] [ebp-Ch] BYREF
  float v23; // [esp+2Ch] [ebp-8h] BYREF
  float v24; // [esp+30h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 4300)
    || sub_1004AE70((_DWORD *)this, 0, 1)
    || a2 < 1000.0
    || a2 < 1250.0 && a3 < 150.0 )
  {
    return 0.0;
  }
  sub_1038C750((_DWORD *)this, a5, 0.0, 0.0, (float *)&v19, (float *)&v22);
  v8 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 968))(this, &v22);
  *(float *)&v19 = *(float *)&v19 - *v8;
  v20 = v20 - v8[1];
  v21 = 0.0;
  off_10689714();
  v23 = *a6 * -1.0;
  v24 = -1.0 * a6[1];
  sub_10018C80(&v23);
  if ( v23 * *(float *)&v19 + v24 * v20 <= 0.2 )
    return 0.0;
  if ( sub_10389850((void *)this) )
  {
    v9 = 1500.0;
    if ( a2 <= 2500.0 )
    {
      if ( a2 >= 1500.0 )
        v9 = a2;
      v10 = 1500.0;
    }
    else
    {
      v10 = 1500.0;
      v9 = 2500.0;
    }
    v16 = v10;
    v14 = v9;
    v11 = sub_1001F0E0(v14, v16, 2500.0, 0.70700002, 0.30000001);
  }
  else
  {
    v11 = (float)0.866;
  }
  v12 = a4;
  if ( a4 <= v11 )
  {
    v13 = -1.0;
    if ( v12 < -1.0 )
      v12 = -1.0;
  }
  else
  {
    v12 = v11;
    v13 = -1.0;
  }
  v18 = v11;
  v17 = v13;
  v15 = v12;
  return sub_1001F0E0(v15, v17, v18, 0.5, 1.0);
}
