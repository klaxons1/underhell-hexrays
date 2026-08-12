int __thiscall sub_10177700(int this)
{
  int v2; // edx
  int (__thiscall *v3)(int); // edx
  int v4; // eax
  float *v5; // eax
  float v7; // [esp+14h] [ebp-1Ch]
  int v8[3]; // [esp+24h] [ebp-Ch] BYREF

  *(_DWORD *)(this + 196) = 0;
  sub_100EAB80((_DWORD *)this, 32);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 592))(this);
  sub_100E0970(this, v2, 0, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 356);
  v8[0] = 0;
  v4 = v3(dword_106B3CDC);
  sub_1025F370(this, v4, (char)v8);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 360))(dword_106B3CDC);
  sub_100E0EA0(this, v5);
  sub_102615C0(this, 33570827, 0);
  sub_100D7330((void *)this);
  sub_100EC3F0((_DWORD *)this, (int)sub_10177490, 0.0, 0);
  v7 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 352))(dword_106B3CDC, this, 0)
     + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v7, (int)v8);
  return this;
}
