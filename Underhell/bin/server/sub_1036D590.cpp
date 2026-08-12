void __thiscall sub_1036D590(int this)
{
  unsigned int v2; // edi
  int *v3; // ecx
  int v4; // eax
  float *v5; // edi
  int v6; // edi
  float v7; // edx
  float v8[3]; // [esp+Ch] [ebp-18h] BYREF
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 248) & 0xFFFFFFFD;
  if ( *(_DWORD *)(this + 248) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
    }
    *(_DWORD *)(this + 248) = v2;
  }
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  sub_101C73D0((unsigned int *)this, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v5 = (float *)v4;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v9[0] = v5[145] - *(float *)(this + 580);
    v9[1] = v5[146] - *(float *)(this + 584);
    v9[2] = v5[147] - *(float *)(this + 588);
    off_10689714();
    v6 = *(_DWORD *)(this + 2604);
    *(float *)(v6 + 20) = sub_10265030(v9);
    v7 = *(float *)(this + 736);
    v8[0] = *(float *)(this + 728);
    v8[2] = v7;
    v8[1] = sub_10265030(v9);
    sub_100E11A0(this, v8);
  }
}
