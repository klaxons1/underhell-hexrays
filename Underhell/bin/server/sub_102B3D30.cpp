void __thiscall sub_102B3D30(int this, int a2)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-24h]
  int v5; // [esp+18h] [ebp-Ch] BYREF
  float v6; // [esp+1Ch] [ebp-8h]
  float v7; // [esp+20h] [ebp-4h]

  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2328))(this);
  sub_102B3500((float *)this, v4, 1.0, 0.0, (float *)&v5, 0.0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)&v5 = *(float *)&v5 - *(float *)(this + 580);
  v6 = v6 - *(float *)(this + 584);
  v7 = v7 - *(float *)(this + 588);
  if ( off_10689714() < 0.001 )
    (*(void (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v5, 0, 0);
  v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2328))(this);
  *(float *)&v5 = *(float *)&v5 * v3;
  v6 = v6 * v3;
  v7 = v3 * v7;
  sub_100DD660(this, (float *)&v5);
}
