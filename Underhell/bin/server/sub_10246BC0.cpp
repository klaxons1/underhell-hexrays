void __thiscall sub_10246BC0(float *this, float *a2, float a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st7
  float v9; // [esp+0h] [ebp-24h]
  float v10[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  int v15; // [esp+2Ch] [ebp+8h]

  this[224] = *a2;
  this[225] = a2[1];
  this[226] = a2[2];
  *((_DWORD *)this + 227) = 2;
  if ( *a2 == this[182] && a2[1] == this[183] && a2[2] == this[184] )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 192))(this);
  }
  else
  {
    v4 = *a2 - this[182];
    v11 = v4;
    v5 = a2[1] - this[183];
    v12 = v5;
    v6 = a2[2] - this[184];
    v13 = v6;
    v14 = v4 * v4 + v5 * v5 + v6 * v6;
    v7 = off_10689708(v14) / a3;
    *(float *)&v15 = v7;
    if ( v7 < 0.0099999998 )
    {
      *(float *)&v15 = 0.0099999998;
      off_10689708(v14);
      v7 = (float)0.0099999998;
    }
    v9 = v7;
    sub_100D8290(this, v9);
    v8 = 1.0 / *(float *)&v15;
    v10[0] = v11 * v8;
    v10[1] = v12 * v8;
    v10[2] = v8 * v13;
    sub_100D7260(this, v10);
  }
}
