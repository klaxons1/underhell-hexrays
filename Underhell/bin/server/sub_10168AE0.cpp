int __thiscall sub_10168AE0(int this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+18h] [ebp-4h] BYREF

  sub_10112C00(this + 320, 1);
  sub_100E0970(this, v2, 7, 0);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v3);
  if ( 0.0 == *(float *)(this + 108) )
    *(float *)(this + 108) = 100.0;
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_100EA940((int *)this, 0x2000);
  *(_BYTE *)(this + 916) = 0;
  if ( *(_DWORD *)(this + 216) != *(_DWORD *)(this + 220) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = *(_DWORD *)(this + 220);
  }
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    *(_DWORD *)(this + 4) = sub_10168630;
    sub_100D8290((float *)this, 0.30000001);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
}
