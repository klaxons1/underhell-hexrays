void __thiscall sub_10109630(int this, int a2)
{
  double v2; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st4
  double v9; // rt0
  long double v10; // st7
  int v11; // ecx
  long double v12; // st6
  long double v13; // st7
  long double v14; // st6
  long double v15; // st5
  long double v16; // st7
  long double v17; // st4
  double v18; // st6
  long double v19; // st7
  long double v20; // st6
  char v21; // [esp-4h] [ebp-2Ch]
  float v22; // [esp+4h] [ebp-24h]
  float v23; // [esp+4h] [ebp-24h]
  float v24[3]; // [esp+10h] [ebp-18h] BYREF
  float v25; // [esp+1Ch] [ebp-Ch] BYREF
  float v26; // [esp+20h] [ebp-8h]
  float v27; // [esp+24h] [ebp-4h]
  float v28; // [esp+30h] [ebp+8h]

  v2 = 0.0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    if ( *(float *)(a2 + 8) <= 1.0 )
    {
      if ( *(float *)(a2 + 8) >= 0.0 )
        v2 = *(float *)(a2 + 8);
    }
    else
    {
      v2 = 1.0;
    }
  }
  *(float *)(this + 1272) = v2;
  v4 = sub_10108630(this, this + 728);
  if ( v4 >= *(float *)(this + 1272) )
  {
    if ( v4 <= *(float *)(this + 1272) )
    {
      sub_100D7260((float *)this, &flt_106F1CB4);
      return;
    }
    v6 = -*(float *)(this + 108);
    v25 = *(float *)(this + 840) * v6;
    v26 = *(float *)(this + 844) * v6;
    v27 = v6 * *(float *)(this + 848);
    sub_100D7260((float *)this, &v25);
    *(_DWORD *)(this + 1284) = -1;
  }
  else
  {
    v5 = *(float *)(this + 108);
    v25 = *(float *)(this + 840) * v5;
    v26 = *(float *)(this + 844) * v5;
    v27 = v5 * *(float *)(this + 848);
    sub_100D7260((float *)this, &v25);
    *(_DWORD *)(this + 1284) = 1;
  }
  *(_DWORD *)(this + 4) = sub_101092D0;
  sub_100EC3F0((_DWORD *)this, (int)sub_10108BA0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v7 = *(float *)(this + 804) * *(float *)(this + 1272);
  v21 = *(_DWORD *)(this + 248);
  v8 = *(float *)(this + 848);
  v9 = *(float *)(this + 844) * v7;
  v24[0] = *(float *)(this + 840) * v7 + *(float *)(this + 1248);
  v24[1] = v9 + *(float *)(this + 1252);
  v24[2] = v7 * v8 + *(float *)(this + 1256);
  v10 = fabs(sub_10246760(v21, v24, this + 728));
  v11 = dword_106B31C8;
  v12 = v10 / *(float *)(this + 108);
  if ( v12 >= *(float *)(dword_106B31C8 + 28) )
  {
    v19 = v12;
  }
  else
  {
    v28 = *(float *)(dword_106B31C8 + 28);
    v13 = v10 / v28;
    v14 = *(float *)(this + 840) * v13;
    v15 = *(float *)(this + 844) * v13;
    v16 = v13 * *(float *)(this + 848);
    v17 = v14 * (double)*(int *)(this + 1284);
    v18 = (double)*(int *)(this + 1284);
    v25 = v17;
    v26 = v15 * v18;
    v27 = v16 * v18;
    sub_100D7260((float *)this, &v25);
    v11 = dword_106B31C8;
    v19 = v28;
  }
  v20 = *(float *)(v11 + 28) * 6.0;
  if ( v20 >= v19 )
  {
    if ( v19 < *(float *)(v11 + 28) )
      v19 = *(float *)(v11 + 28);
    v23 = v19;
    sub_100D8290((float *)this, v23);
  }
  else
  {
    v22 = v20;
    sub_100D8290((float *)this, v22);
  }
}
