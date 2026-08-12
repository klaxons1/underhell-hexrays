void __thiscall sub_103C7A40(int this)
{
  int v2; // edx
  float v3; // [esp+0h] [ebp-28h]
  float v4[3]; // [esp+10h] [ebp-18h] BYREF
  float v5[3]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v5[0] = 1.0;
  v5[1] = 1.0;
  v5[2] = 1.0;
  v4[0] = -1.0;
  v4[1] = -1.0;
  v4[2] = -1.0;
  sub_1025F360((_DWORD *)this, (int)v4, (int)v5);
  sub_100E0970(this, v2, 4, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), 12);
  *(_DWORD *)(this + 252) |= 0x80u;
  *(float *)(this + 552) = 0.0;
  sub_100D8500((_DWORD *)this);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0((int *)this, v3, 0);
  *(float *)(this + 800) = *(float *)(dword_106B31C8 + 12) + 8.0;
  nullsub_4();
}
