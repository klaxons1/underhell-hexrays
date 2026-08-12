void __usercall sub_1031AAB0(int a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  long double v4; // st7
  long double v5; // st5
  long double v6; // st4
  long double v7; // st6
  long double v8; // st4
  double v9; // st6
  double v10; // st7
  double v11; // st7
  bool v12; // zf
  double v13; // st7
  float v14; // [esp+0h] [ebp-48h]
  float v15; // [esp+10h] [ebp-38h]
  int v16[3]; // [esp+18h] [ebp-30h] BYREF
  int v17[2]; // [esp+24h] [ebp-24h] BYREF
  float v18; // [esp+2Ch] [ebp-1Ch]
  float v19; // [esp+30h] [ebp-18h]
  float v20; // [esp+34h] [ebp-14h] BYREF
  float v21; // [esp+38h] [ebp-10h]
  float v22; // [esp+3Ch] [ebp-Ch]
  float v23; // [esp+40h] [ebp-8h]
  float v24; // [esp+44h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
    sub_101C73D0((unsigned int *)a1, 0);
  v21 = sub_100B6760(a1);
  v3 = sub_103179B0(a1, v21);
  v19 = v3;
  if ( *(_BYTE *)(a1 + 3695) && !*(_BYTE *)(a1 + 3692) )
  {
    v4 = fabs(v3);
    v5 = v4 + 100.0;
    v22 = v5;
    v6 = v4 + 200.0;
    v23 = v6;
    if ( 0.0 != v21 )
    {
      v7 = v21 - 100.0;
      if ( v6 <= v7 )
      {
        v9 = v21;
      }
      else
      {
        v8 = v7;
        v9 = v21;
        v23 = v8;
      }
      if ( v5 > v9 - 200.0 )
        v22 = v9 - 200.0;
    }
  }
  else
  {
    v22 = 0.0;
    v23 = 0.0;
  }
  sub_103138C0((int *)a1, &v20, &v24);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v15 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
      + *(float *)(a1 + 476) * *(float *)(a1 + 476)
      + *(float *)(a1 + 484) * *(float *)(a1 + 484);
  v10 = off_10689708(v15);
  v11 = v10 + v24;
  if ( v20 <= v11 )
    v11 = v20;
  v14 = v11;
  sub_102B3500((float *)a1, v14, 1.0, v19, (float *)v17, COERCE_FLOAT(1));
  v12 = *(_DWORD *)(a1 + 4120) == 4;
  v13 = 0.0;
  v24 = 0.0;
  if ( v12 )
  {
    if ( v21 >= (double)*(float *)(a1 + 4224) )
    {
      if ( *(float *)(a1 + 4224) >= 0.0 )
        v13 = *(float *)(a1 + 4224);
      v24 = v13;
      v18 = v13 + v18;
    }
    else
    {
      v24 = v21;
      v18 = v21 + v18;
    }
  }
  sub_10318150(a1, (float *)v17);
  sub_1031A520(a1, a2, (float *)v17, v24, v22, v23, (float *)v16);
  sub_10317B90(a1, (float *)v16, (float *)(a1 + 3796));
}
