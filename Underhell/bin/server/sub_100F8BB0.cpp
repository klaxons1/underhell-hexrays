int __thiscall sub_100F8BB0(void *this)
{
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  v4[0] = 8.0;
  v4[1] = 4.0;
  v4[2] = 2.0;
  v3[0] = -8.0;
  v3[1] = -4.0;
  v3[2] = -2.0;
  sub_100D69D0(this, (int)v3, (int)v4);
  return sub_10112C00(0);
}
