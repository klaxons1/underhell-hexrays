char __thiscall sub_102FFD50(void *this, float *a2, float *a3, float *a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  float *v8; // eax
  float v10; // [esp+0h] [ebp-20h]
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp-4h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  sub_102FF9F0(
    (int)&savedregs,
    (int)this,
    (int)a3,
    &v11,
    (int)this,
    a2,
    *a3,
    a3[1],
    a3[2],
    *(float *)(dword_106E2BFC + 44),
    120.0);
  v5 = v11;
  if ( v11 == flt_106F1CA8 )
  {
    v6 = v12;
    if ( v12 == flt_106F1CAC )
    {
      v7 = v13;
      if ( v13 == flt_106F1CB0 )
      {
        v10 = *(float *)(dword_106E2BFC + 44) * 1.5;
        v8 = sub_102FF9F0((int)&savedregs, (int)this, (int)a3, &v11, (int)this, a2, *a3, a3[1], a3[2], v10, 120.0);
        v5 = *v8;
        v6 = v8[1];
        v7 = v8[2];
        if ( v5 == flt_106F1CA8 && v6 == flt_106F1CAC && v7 == flt_106F1CB0 )
          return 0;
      }
    }
    else
    {
      v7 = v13;
    }
  }
  else
  {
    v7 = v13;
    v6 = v12;
  }
  if ( a4 )
  {
    *a4 = v5;
    a4[1] = v6;
    a4[2] = v7;
  }
  return 1;
}
