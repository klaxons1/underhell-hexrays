int __thiscall sub_10280780(int this)
{
  int v2; // edx
  const char *v3; // eax
  int result; // eax
  float v5; // [esp+8h] [ebp-10h]
  _BYTE v6[4]; // [esp+14h] [ebp-4h] BYREF

  nullsub_4();
  sub_100E0970(this, v2, 6, 0);
  sub_10112C00(this + 320, 6);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v6);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  sub_100EC3F0((_DWORD *)this, (int)sub_102806C0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  result = sub_100EC4A0((int *)this, v5, 0);
  *(_BYTE *)(this + 852) = 0;
  return result;
}
