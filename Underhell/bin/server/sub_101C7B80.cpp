void __thiscall sub_101C7B80(int this, float *a2, float *a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  _DWORD *v8; // ebx
  double v9; // st4
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st3
  int v15; // [esp+20h] [ebp-10h] BYREF
  float v16; // [esp+24h] [ebp-Ch]
  float v17; // [esp+28h] [ebp-8h]
  float v18; // [esp+2Ch] [ebp-4h] BYREF
  float v19; // [esp+38h] [ebp+8h]

  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, float *, _DWORD))(*(_DWORD *)dword_106BAFF8 + 16))(
    *((__int16 *)a2 + 32),
    0,
    0,
    &v18,
    0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_101C49D0((float *)(this + 476), a2 + 6, (float *)&v15, 1.0);
  if ( a2[8] > 0.7 )
  {
    v5 = *(float *)&v15;
    *a3 = *(float *)(this + 464) + *(float *)&v15;
    v6 = v16;
    a3[1] = *(float *)(this + 468) + v16;
    v7 = *(float *)(this + 472) + v17;
    a3[2] = v7;
    v8 = (_DWORD *)*((_DWORD *)a2 + 19);
    v19 = a3[1] * a3[1] + *a3 * *a3 + v7 * v7;
    v9 = *(float *)(this + 552);
    if ( 0.0 == v9 )
      v9 = 1.0;
    if ( v9 * *(float *)(dword_106B6F0C + 44) * *(float *)(dword_106B31C8 + 16) > v7 )
    {
      v17 = 0.0;
      *a3 = v5 + *(float *)(this + 464);
      a3[1] = v6 + *(float *)(this + 468);
      v10 = *(float *)(this + 472);
      a3[2] = *(float *)(this + 472);
      v19 = v10 * v10 + a3[1] * a3[1] + *a3 * *a3;
    }
    sub_100DD660(this, (float *)&v15);
    if ( v19 >= 900.0 )
    {
      v11 = *(float *)(this + 464) + *(float *)&v15;
      *(float *)&v15 = v11;
      v12 = *(float *)(this + 468) + v16;
      v16 = v12;
      v13 = *(float *)(this + 472) + v17;
      v17 = v13;
      v14 = (1.0 - a2[11]) * *(float *)(dword_106B31C8 + 16) * v18;
      *(float *)&v15 = v11 * v14;
      v16 = v12 * v14;
      v17 = v14 * v13;
      sub_101C2090(this, (float *)&v15, a2);
    }
    else
    {
      if ( sub_100E9830(v8) )
        sub_101C73D0((unsigned int *)this, (int)v8);
      sub_100DD660(this, &flt_106F1CA8);
      sub_100D7260((float *)this, &flt_106F1CB4);
    }
  }
  else
  {
    sub_100DD660(this, (float *)&v15);
  }
}
