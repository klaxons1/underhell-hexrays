void __thiscall sub_102087C0(float *this, float *a2, float a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  float v8; // [esp+0h] [ebp-20h]
  float v9[3]; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-Ch]
  float v11; // [esp+18h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp-4h]
  float v13; // [esp+28h] [ebp+8h]

  this[498] = *a2;
  this[499] = a2[1];
  this[500] = a2[2];
  if ( *a2 == this[182] && a2[1] == this[183] && a2[2] == this[184] )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 192))(this);
  }
  else
  {
    v4 = *a2 - this[182];
    v10 = v4;
    v5 = a2[1] - this[183];
    v11 = v5;
    v6 = a2[2] - this[184];
    v12 = v6;
    v8 = v4 * v4 + v5 * v5 + v6 * v6;
    v13 = off_10689708(v8) / a3;
    sub_100D8290(this, v13);
    v7 = 1.0 / v13;
    v9[0] = v10 * v7;
    v9[1] = v11 * v7;
    v9[2] = v7 * v12;
    sub_100D7260(this, v9);
  }
}
