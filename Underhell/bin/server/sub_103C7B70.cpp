void __thiscall sub_103C7B70(int this)
{
  float v2[3]; // [esp+8h] [ebp-18h] BYREF
  float v3[3]; // [esp+14h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v3[0] = 8.0;
  v3[1] = 8.0;
  v3[2] = 8.0;
  v2[0] = -8.0;
  v2[1] = -8.0;
  v2[2] = -8.0;
  sub_1025F360((_DWORD *)this, (int)v2, (int)v3);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), 4);
  *(_DWORD *)(this + 252) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  nullsub_4();
}
