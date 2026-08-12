int __thiscall sub_1012F2D0(_DWORD *this)
{
  const char *v2; // eax
  float v4; // [esp+8h] [ebp-10h]
  _BYTE v5[4]; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  j_nullsub_4(this);
  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, v2);
  sub_100EAB80(this, 32);
  sub_100EC3F0(this, (int)sub_103D79E0, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v4, 0);
}
