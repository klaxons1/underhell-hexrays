int __thiscall sub_10406EC0(int *this)
{
  float v3; // [esp+0h] [ebp-24h]
  float v4[3]; // [esp+Ch] [ebp-18h] BYREF
  float v5[3]; // [esp+18h] [ebp-Ch] BYREF

  sub_1023C380(this, (int)"Missile.Accelerate", 0.0, 0);
  sub_10422220(this + 182, v5);
  v4[0] = v5[0] * 1500.0;
  v4[1] = v5[1] * 1500.0;
  v4[2] = 1500.0 * v5[2];
  sub_100DD660((int)this, v4);
  sub_100EC3F0(this, (int)sub_104063C0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v3, 0);
}
