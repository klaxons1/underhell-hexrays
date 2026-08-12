int __thiscall sub_101A13F0(int this)
{
  const char *v2; // eax
  int v3; // ebx
  int v4; // ebx
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v6);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100CF450((_DWORD *)this, 3);
  v3 = (int)*(float *)(dword_106B8D14 + 44);
  if ( *(_DWORD *)(this + 220) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v3;
  }
  v4 = (int)*(float *)(dword_106B8D14 + 44);
  if ( *(_DWORD *)(this + 216) != v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = v4;
  }
  *(_DWORD *)(this + 4192) = (int)*(float *)(dword_106B8D5C + 44);
  sub_10020460((_DWORD *)this, 0x800000);
  sub_10020460((_DWORD *)this, 64);
  sub_10020460((_DWORD *)this, 3072);
  sub_10020460((_DWORD *)this, 2);
  sub_10020460((_DWORD *)this, 0x4000000);
  *(float *)(this + 5016) = *(float *)(dword_106B31C8 + 12);
  return sub_1033EA60(this);
}
