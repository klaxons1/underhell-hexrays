void __thiscall sub_10111AB0(_BYTE *this, float *a2)
{
  float v3; // [esp+0h] [ebp-20h]
  float v4; // [esp+8h] [ebp-18h] BYREF
  float v5; // [esp+Ch] [ebp-14h]
  float v6; // [esp+10h] [ebp-10h]
  float v7; // [esp+14h] [ebp-Ch] BYREF
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]

  sub_10111110(this, a2, &v7);
  sub_10424470(this + 8, this + 20, &v7, &v4);
  v3 = (v9 - v6) * (v9 - v6) + (v8 - v5) * (v8 - v5) + (v7 - v4) * (v7 - v4);
  off_10689708(v3);
}
