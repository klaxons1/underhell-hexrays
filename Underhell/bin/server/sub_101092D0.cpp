int __thiscall sub_101092D0(int this)
{
  int v2; // edi
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // rt1
  long double v9; // st7
  int v10; // ecx
  long double v11; // st6
  long double v12; // st7
  long double v13; // st6
  long double v14; // st5
  long double v15; // st7
  long double v16; // st5
  long double v17; // st4
  double v18; // st6
  long double v19; // st7
  double v20; // st7
  double v21; // st4
  double v22; // rt2
  long double v24; // st6
  char v25; // [esp+0h] [ebp-30h]
  float v26; // [esp+0h] [ebp-30h]
  float v27; // [esp+8h] [ebp-28h]
  float v28; // [esp+8h] [ebp-28h]
  float v29[3]; // [esp+14h] [ebp-1Ch] BYREF
  float v30; // [esp+20h] [ebp-10h] BYREF
  float v31; // [esp+24h] [ebp-Ch]
  float v32; // [esp+28h] [ebp-8h]
  float v33; // [esp+2Ch] [ebp-4h]

  v2 = this + 728;
  v3 = sub_10108630(this, this + 728);
  if ( v3 >= *(float *)(this + 1272) && *(_DWORD *)(this + 1284) == 1
    || v3 <= *(float *)(this + 1272) && *(_DWORD *)(this + 1284) == -1 )
  {
    sub_100D7260((float *)this, &flt_106F1CB4);
    v20 = *(float *)(this + 804) * *(float *)(this + 1272);
    v21 = *(float *)(this + 848);
    v22 = *(float *)(this + 844) * v20;
    v30 = v20 * *(float *)(this + 840) + *(float *)(this + 1248);
    v31 = v22 + *(float *)(this + 1252);
    v32 = v20 * v21 + *(float *)(this + 1256);
    sub_100E11A0(this, &v30);
    sub_100EC4A0((int *)this, -1.0, 0);
    sub_100D8290((float *)this, -1.0);
    if ( !*(_BYTE *)(this + 1280) || *(float *)(this + 1272) == *(float *)(this + 1124) )
    {
      return sub_10108200((float *)this);
    }
    else
    {
      v26 = *(float *)(this + 1272);
      sub_10108AE0((int *)(this + 1124), SLOBYTE(v26), this, this);
      return sub_10108200((float *)this);
    }
  }
  else
  {
    v4 = *(float *)(this + 804) * *(float *)(this + 1272);
    v25 = *(_DWORD *)(this + 248);
    v5 = v4 * *(float *)(this + 840);
    v6 = v4;
    v7 = v4 * *(float *)(this + 844);
    v8 = v6 * *(float *)(this + 848);
    v29[0] = v5 + *(float *)(this + 1248);
    v29[1] = v7 + *(float *)(this + 1252);
    v29[2] = v8 + *(float *)(this + 1256);
    v9 = fabs(sub_10246760(v25, v29, v2));
    v10 = dword_106B31C8;
    v11 = v9 / *(float *)(this + 108);
    if ( v11 >= *(float *)(dword_106B31C8 + 28) )
    {
      v19 = v11;
    }
    else
    {
      v33 = *(float *)(dword_106B31C8 + 28);
      v12 = v9 / *(float *)(dword_106B31C8 + 28);
      v13 = v12 * *(float *)(this + 840);
      v14 = v12;
      v15 = v12 * *(float *)(this + 844);
      v16 = v14 * *(float *)(this + 848);
      v17 = v13 * (double)*(int *)(this + 1284);
      v18 = (double)*(int *)(this + 1284);
      v30 = v17;
      v31 = v15 * v18;
      v32 = v16 * v18;
      sub_100D7260((float *)this, &v30);
      v10 = dword_106B31C8;
      v19 = v33;
    }
    v24 = *(float *)(v10 + 28) * 6.0;
    if ( v24 >= v19 )
    {
      if ( v19 < *(float *)(v10 + 28) )
        v19 = *(float *)(v10 + 28);
      v28 = v19;
      return sub_100D8290((float *)this, v28);
    }
    else
    {
      v27 = v24;
      return sub_100D8290((float *)this, v27);
    }
  }
}
