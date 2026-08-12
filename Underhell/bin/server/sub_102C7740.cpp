int __thiscall sub_102C7740(_DWORD *this)
{
  int v2; // edx
  const char *v3; // eax
  double v4; // st7
  int (__thiscall *v5)(_DWORD *); // eax
  _BYTE v7[4]; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  sub_10112C00((int)(this + 80), 1);
  sub_100E0970((int)this, v2, 7, 0);
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v7);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, v3);
  if ( (this[62] & 0x2000) != 0 )
    v4 = *(float *)(dword_106DE20C + 44);
  else
    v4 = *(float *)(dword_106DE1C4 + 44);
  sub_102C7580(this, (int)v4);
  v5 = *(int (__thiscall **)(_DWORD *))(*this + 584);
  this[234] = 0;
  return v5(this);
}
