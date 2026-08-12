int __thiscall sub_1024FA10(int *this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+14h] [ebp-4h] BYREF

  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, v3);
  sub_100EAB80(this, 32);
  sub_100EC3F0(this, (int)sub_1024F980, 0.0, 0);
  return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
}
