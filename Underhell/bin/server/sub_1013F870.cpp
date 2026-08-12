int __thiscall sub_1013F870(int this)
{
  double v2; // st7
  __int64 v4; // [esp-4h] [ebp-28h]
  float v5; // [esp+0h] [ebp-24h]
  int v6; // [esp+4h] [ebp-20h]
  float v7[3]; // [esp+Ch] [ebp-18h] BYREF
  float v8[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = *(float *)(this + 824) * 0.5 * 0.5;
  v8[0] = v2;
  v8[1] = v2;
  v8[2] = *(float *)(this + 824);
  v7[0] = -v2;
  v7[1] = v7[0];
  v7[2] = 0.0;
  sub_1025F360(this, v7, v8);
  *(float *)&v6 = *(float *)(this + 824) * 0.00390625;
  sub_1013F560((_DWORD *)this, *(_DWORD *)(this + 808), v6);
  HIDWORD(v4) = this;
  LODWORD(v4) = this;
  sub_1010DD80((_DWORD *)(this + 856), v4, 0.0);
  sub_100EC3F0((_DWORD *)this, (int)sub_1013EA30, 0.0, 0);
  *(float *)(this + 816) = 0.0;
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v5, 0);
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 720))(this, 0.1);
}
