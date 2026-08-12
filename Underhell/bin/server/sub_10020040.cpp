int __thiscall sub_10020040(int *this)
{
  bool v2; // zf
  int v3; // eax
  float *v4; // eax
  double v5; // st7
  void (__thiscall *v6)(void *, _BYTE *, float *, _DWORD); // eax
  _BYTE v8[12]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v9[12]; // [esp+10h] [ebp-18h] BYREF
  float v10[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(int *))(*this + 368))(this) == 0;
  v3 = *this;
  if ( v2 )
    return (*(int (__thiscall **)(int *))(v3 + 1840))(this);
  v4 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(v3 + 968))(this, v8);
  v10[0] = *v4;
  v10[1] = v4[1];
  v5 = v4[2];
  v6 = *(void (__thiscall **)(void *, _BYTE *, float *, _DWORD))(*this + 2096);
  v10[2] = v5;
  v6(this, v9, v10, 0);
  return (*(int (__thiscall **)(int *, _BYTE *))(*this + 1836))(this, v9);
}
