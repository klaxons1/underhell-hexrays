int __thiscall sub_104089E0(int this)
{
  int v2; // edx
  _DWORD *v3; // edi
  float v5; // [esp+4h] [ebp-2Ch]
  float v6[3]; // [esp+18h] [ebp-18h] BYREF
  float v7[3]; // [esp+24h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/w_missile_launch.mdl");
  v7[0] = 4.0;
  v7[1] = 4.0;
  v7[2] = 4.0;
  v6[0] = -4.0;
  v6[1] = -4.0;
  v6[2] = -4.0;
  sub_1025F360((_DWORD *)this, (int)v6, (int)v7);
  *(_DWORD *)(this + 196) = sub_10406390;
  sub_100E0970(this, v2, 5, 1);
  sub_100EC3F0((_DWORD *)this, (int)sub_10407CF0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.30000001;
  sub_100EC4A0((int *)this, v5, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 500))(this, 200.0);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  v3 = (_DWORD *)(this + 216);
  if ( *(_DWORD *)(this + 216) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *v3 = 100;
  }
  if ( *(_DWORD *)(this + 220) != *v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = *v3;
  }
  *(float *)(this + 2124) = 0.0;
  *(_DWORD *)(this + 1680) = -1;
  return sub_100EA940((int *)this, 0x2000000);
}
