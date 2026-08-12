int __thiscall sub_10125BA0(int this)
{
  char v3; // [esp+Ch] [ebp-4h]

  v3 = (*(_DWORD *)(this + 248) & 2) != 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return sub_10261DA0(
           this + 580,
           *(_DWORD *)(this + 804),
           *(_DWORD *)(this + 808),
           *(_DWORD *)(this + 812),
           *(float *)(this + 800),
           v3);
}
