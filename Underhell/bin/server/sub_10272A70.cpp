int __thiscall sub_10272A70(int this, float *a2, float *a3)
{
  int v4; // edx
  float v6[3]; // [esp+10h] [ebp-18h] BYREF
  float v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/w_bullet.mdl");
  sub_1025F360((_DWORD *)this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  sub_100E0970(this, v4, 4, 0);
  *(float *)(this + 552) = 0.0;
  sub_100E0D20(this, a2);
  v7[0] = *a3 * 1500.0;
  v7[1] = a3[1] * 1500.0;
  v7[2] = 1500.0 * a3[2];
  sub_100DD660(this, v7);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_10422540(this + 476, v6);
  sub_100E0EA0(this, v6);
  sub_100EBE30(this, 1);
  *(_DWORD *)(this + 196) = sub_10272970;
  sub_100EC3F0((_DWORD *)this, (int)sub_10272980, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
