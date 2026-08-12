void __thiscall sub_10272980(int *this)
{
  float v2; // [esp+0h] [ebp-24h]
  float v3[3]; // [esp+Ch] [ebp-18h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0(this, v2, 0);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10422220(this + 176, v4);
  v3[0] = v4[0] * 1500.0;
  v3[1] = v4[1] * 1500.0;
  v3[2] = 1500.0 * v4[2];
  sub_100DD660((int)this, v3);
}
