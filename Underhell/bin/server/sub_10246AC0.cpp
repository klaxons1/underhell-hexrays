void __thiscall sub_10246AC0(float *this, float *a2, float a3)
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

  this[221] = *a2;
  this[222] = a2[1];
  this[223] = a2[2];
  *((_DWORD *)this + 227) = 1;
  if ( *a2 == this[179] && a2[1] == this[180] && a2[2] == this[181] )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 192))(this);
  }
  else
  {
    v4 = *a2 - this[179];
    v10 = v4;
    v5 = a2[1] - this[180];
    v11 = v5;
    v6 = a2[2] - this[181];
    v12 = v6;
    v8 = v6 * v6 + v5 * v5 + v4 * v4;
    v13 = off_10689708(v8) / a3;
    sub_100D8290(this, v13);
    v7 = 1.0 / v13;
    v9[0] = v10 * v7;
    v9[1] = v11 * v7;
    v9[2] = v7 * v12;
    sub_100DD790(this, v9);
  }
}
