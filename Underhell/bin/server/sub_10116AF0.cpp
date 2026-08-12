int __thiscall sub_10116AF0(int this)
{
  const char *v2; // eax
  int result; // eax
  float v4; // [esp+8h] [ebp-14h]
  _BYTE v5[4]; // [esp+18h] [ebp-4h] BYREF

  sub_102586B0();
  *(_DWORD *)(this + 252) |= 0x880u;
  sub_100D8500((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 1);
  sub_101129A0((unsigned __int16 *)(this + 320), 12);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100EC3F0((_DWORD *)this, (int)sub_10116880, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  result = sub_100EC4A0((int *)this, v4, 0);
  *(_BYTE *)(this + 1092) = *(_BYTE *)(this + 1093) == 0;
  return result;
}
