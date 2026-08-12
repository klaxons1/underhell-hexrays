int __thiscall sub_10126FE0(int *this)
{
  int v2; // edx
  float v4; // [esp+4h] [ebp-24h]
  float v5[3]; // [esp+10h] [ebp-18h] BYREF
  float v6[3]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v2, 5, 0);
  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, "models/can.mdl");
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 0.0;
  v5[0] = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  sub_1025F360(this, v5, v6);
  sub_100EC3F0(this, (int)sub_101263E0, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.5;
  return sub_100EC4A0(this, v4, 0);
}
