float *__thiscall sub_103D1E70(float *this, float *a2)
{
  float *v3; // eax
  double v4; // st7
  float *v5; // eax
  float *v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // rt1
  double v13; // st4
  double v14; // st6
  float v16[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v17[2]; // [esp+14h] [ebp-10h] BYREF
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  v3 = (float *)sub_10022D70();
  *v3 = this[85] - this[82];
  v3[1] = this[86] - this[83];
  v3[2] = this[87] - this[84];
  v4 = 0.0;
  if ( 0.0 != *v3 )
  {
    v5 = (float *)sub_10022D70();
    *v5 = this[85] - this[82];
    v5[1] = this[86] - this[83];
    v5[2] = this[87] - this[84];
    v4 = this[201] / *v5;
  }
  v19 = v4;
  v6 = (float *)sub_10022D70();
  *v6 = this[85] - this[82];
  v6[1] = this[86] - this[83];
  v6[2] = this[87] - this[84];
  v7 = 0.0;
  if ( 0.0 == v6[1] )
  {
    v9 = 0.0;
  }
  else
  {
    v8 = (float *)sub_10022D70();
    *v8 = this[85] - this[82];
    v8[1] = this[86] - this[83];
    v8[2] = this[87] - this[84];
    v9 = this[201] / v8[1];
    v7 = 0.0;
  }
  v10 = 0.5;
  v11 = v19;
  if ( v19 > 0.5 )
    v11 = 0.5;
  v12 = v11;
  v13 = v9;
  v14 = v12;
  if ( v13 <= 0.5 )
    v10 = v13;
  v17[0] = 1.0 - v14;
  v17[1] = 1.0 - v10;
  v18 = v7;
  v16[2] = v18;
  v16[0] = v14;
  v16[1] = v10;
  return sub_10111860((int)(this + 80), v16, v17, a2);
}
