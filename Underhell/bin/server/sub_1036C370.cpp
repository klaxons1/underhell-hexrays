int __thiscall sub_1036C370(float *this, float a2, float *a3, float a4)
{
  double v5; // st7
  char v6; // bl
  double v7; // st6
  double v8; // st5
  double v9; // st5
  long double v10; // st4
  long double v11; // st6
  long double v12; // st7
  double v13; // st5
  double v14; // st3
  double v15; // st4
  double v16; // st5
  double v17; // st7
  double v18; // st6
  double v19; // st7
  float v21; // [esp+0h] [ebp-34h]
  char v22[8]; // [esp+10h] [ebp-24h] BYREF
  float v23; // [esp+18h] [ebp-1Ch]
  float v24[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v25; // [esp+28h] [ebp-Ch] BYREF
  float v26; // [esp+2Ch] [ebp-8h]
  float v27; // [esp+30h] [ebp-4h]
  float v28; // [esp+3Ch] [ebp+8h]
  float v29; // [esp+3Ch] [ebp+8h]
  float v30; // [esp+44h] [ebp+10h]

  if ( LOBYTE(a2) )
  {
    sub_104222B0(this + 182, v24, 0, v22);
    v25 = v24[0] * 350.0;
    v26 = v24[1] * 350.0;
    v27 = 350.0 * v23;
  }
  else
  {
    v5 = *(float *)(dword_106B6F0C + 44);
    v28 = *(float *)(dword_106B6F0C + 44);
    if ( v5 <= 1.0 )
    {
      v5 = 1.0;
      v28 = 1.0;
    }
    if ( ((_DWORD)this[63] & 0x800) != 0 )
    {
      sub_100DAE60((int)this);
      v5 = v28;
    }
    v6 = LOBYTE(a4);
    v7 = a3[2] - this[147];
    if ( v7 >= 16.0 )
    {
      v8 = (double)(LOBYTE(a4) != 0 ? 400 : 120);
      if ( v8 < v7 )
        v7 = v8;
    }
    else
    {
      v7 = 16.0;
    }
    v9 = 0.0;
    if ( v7 < 32.0 )
      v9 = 8.0;
    v10 = sqrt(v5 * 2.0 * (v7 + v9));
    v11 = v10 / v5 + sqrt(2.0 * v9 / v5);
    v12 = v10;
    if ( ((_DWORD)this[63] & 0x800) != 0 )
    {
      sub_100DAE60((int)this);
      v29 = v10;
      v12 = v29;
    }
    v13 = a3[1] - this[146];
    v30 = v11;
    v14 = 1.0 / v30;
    v15 = (*a3 - this[145]) * v14;
    v25 = v15;
    v16 = v14 * v13;
    v26 = v16;
    v27 = v12;
    v21 = v12 * v12 + v15 * v15 + v16 * v16;
    v17 = off_10689708(v21);
    if ( v6 )
      v18 = 1000.0;
    else
      v18 = 650.0;
    if ( v18 < v17 )
    {
      v19 = v18 / v17;
      v25 = v25 * v19;
      v26 = v26 * v19;
      v27 = v19 * v27;
    }
  }
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2220))(this);
  return sub_1036C2B0((int)this, &v25);
}
