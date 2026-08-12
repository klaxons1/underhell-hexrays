BOOL __thiscall sub_10070CF0(char *this, float *a2)
{
  float *v3; // eax
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  v3 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 36))(this);
  v6 = *v3 - *a2;
  v7 = v3[1] - a2[1];
  v8 = v3[2] - a2[2];
  sub_100392A0(this, 0, 0, (int)v5);
  return v5[0] * v6 + v5[1] * v7 + v5[2] * v8 > 0.0;
}
