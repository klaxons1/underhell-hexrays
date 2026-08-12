int __thiscall sub_10205B40(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  *(_DWORD *)(this + 200) = 0;
  *(_DWORD *)(this + 820) = -1;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    sub_100EC3F0((_DWORD *)this, (int)sub_10205830, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v3, 0);
  if ( *(float *)(this + 808) <= 0.0 )
    *(float *)(this + 808) = 128.0;
  if ( *(int *)(this + 800) <= 0 )
    *(_DWORD *)(this + 800) = 2;
  if ( *(float *)(this + 812) <= 0.0 )
    *(float *)(this + 812) = 0.1;
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
}
