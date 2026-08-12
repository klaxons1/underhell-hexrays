char __thiscall sub_100296E0(_DWORD *this, int a2, float *a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  int v7; // eax
  int v8; // eax
  double v9; // st7
  double v10; // st5
  double v11; // st4
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  _BYTE v16[108]; // [esp+18h] [ebp-BCh] BYREF
  _BYTE v17[12]; // [esp+84h] [ebp-50h] BYREF
  int v18[14]; // [esp+90h] [ebp-44h] BYREF
  int v19; // [esp+C8h] [ebp-Ch] BYREF
  float v20; // [esp+CCh] [ebp-8h]
  float v21; // [esp+D0h] [ebp-4h]

  memset(v18, 0, sizeof(v18));
  *(float *)&v19 = flt_10689730;
  v20 = flt_10689734;
  v21 = flt_10689738;
  if ( (unsigned __int8)sub_1007EA60(a2, 16395, 0, 1) && (unsigned __int8)sub_1007A470(a2, 16395) )
  {
    v4 = *(float *)a2;
    v19 = *(int *)a2;
    v5 = *(float *)(a2 + 4);
    v20 = *(float *)(a2 + 4);
    v6 = *(float *)(a2 + 8);
    v21 = *(float *)(a2 + 8);
  }
  else
  {
    v5 = v20;
    v6 = v21;
    v4 = *(float *)&v19;
  }
  if ( v4 != flt_10689730 )
    goto LABEL_16;
  if ( v5 == flt_10689734 && v6 == flt_10689738 )
  {
    v7 = sub_1008D680(a2);
    if ( v7 == -1
      || (v8 = sub_10084FD0(v17, this[419], v7),
          sub_1007C550(0, v8, a2, 16395, 0, 0.0, 0, (int)v18),
          v9 = sub_100737B0(this[419]),
          v10 = *(float *)&v18[2] - *(float *)(a2 + 4),
          v11 = *(float *)&v18[1] - *(float *)a2,
          v11 * v11 + v10 * v10 >= v9 * 3.0 * (v9 * 3.0))
      || !(unsigned __int8)sub_1007A470(&v18[1], 16395) )
    {
      v5 = v20;
      v6 = v21;
      v4 = *(float *)&v19;
    }
    else
    {
      v4 = *(float *)&v18[1];
      v19 = v18[1];
      v5 = *(float *)&v18[2];
      v20 = *(float *)&v18[2];
      v6 = *(float *)&v18[3];
      v21 = *(float *)&v18[3];
    }
  }
  if ( v4 != flt_10689730 || v5 != flt_10689734 || v6 != flt_10689738 )
  {
LABEL_16:
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v12 = sub_10261B20();
    else
      v12 = 0;
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = sub_1008E9F0((int)(this + 145), (int)&v19, v12, 60.0, -1, 1);
    v14 = v13;
    if ( v13 )
    {
      sub_1008DB10(v13);
      sub_100A6450(v16);
      sub_100A61F0(v14, 0);
      sub_100A61E0(v16);
      v5 = v20;
      v6 = v21;
      v4 = *(float *)&v19;
    }
    else
    {
      v4 = flt_10689730;
      *(float *)&v19 = flt_10689730;
      v5 = flt_10689734;
      v20 = flt_10689734;
      v6 = flt_10689738;
      v21 = flt_10689738;
    }
  }
  if ( v4 == flt_10689730 )
  {
    if ( v5 == flt_10689734 && v6 == flt_10689738 )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1007C550(0, (int)(this + 145), a2, 16395, 0, 0.0, 0, (int)v18);
      v4 = *(float *)&v18[1];
      v5 = *(float *)&v18[2];
      v6 = *(float *)&v18[3];
    }
    if ( v4 == flt_10689730 && v5 == flt_10689734 && v6 == flt_10689738 )
      return 0;
  }
  if ( a3 )
  {
    *a3 = v4;
    a3[1] = v5;
    a3[2] = v6;
  }
  return 1;
}
