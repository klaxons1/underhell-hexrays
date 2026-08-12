void __thiscall sub_1018D8D0(float *this, float *a2)
{
  double v2; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st0
  double v10; // st2
  double v11; // st6
  double v12; // st5
  double v13; // rt1
  double v14; // st5
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+10h] [ebp-4h]

  v2 = *((float *)off_103DC81C + 4) * 200.0;
  v16 = v2;
  v4 = this[852] + this[855];
  v15 = v4;
  v5 = this[853] + this[856];
  v6 = v4;
  v7 = this[854] + this[857];
  v8 = v6 - this[846];
  v9 = v5 - this[847];
  v10 = v7 - this[848];
  if ( v8 * v8 + v9 * v9 + v10 * v10 <= v2 * v2 )
  {
    *a2 = v15;
    a2[1] = v5;
    a2[2] = v7;
  }
  else
  {
    *a2 = v8;
    a2[1] = v5 - this[847];
    a2[2] = v7 - this[848];
    off_103EDFEC();
    v11 = *a2 * v16;
    *a2 = v11;
    v12 = a2[1] * v16;
    a2[1] = v12;
    v13 = v12;
    v14 = v16 * a2[2];
    a2[2] = v14;
    *a2 = v11 + this[846];
    a2[1] = v13 + this[847];
    a2[2] = v14 + this[848];
  }
}
