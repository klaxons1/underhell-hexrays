char __thiscall sub_1013F370(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  double v5; // st7
  __int64 v7; // [esp+0h] [ebp-28h]
  float v8[3]; // [esp+10h] [ebp-18h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-Ch] BYREF

  HIDWORD(v7) = this;
  LODWORD(v7) = this;
  sub_1010DD80((_DWORD *)(this + 880), v7, 0.0);
  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 728))(v4, 0);
        sub_1025FAC0(v4);
      }
    }
  }
  v5 = *(float *)(this + 828) - 20.0;
  *(float *)(this + 828) = v5;
  if ( v5 > 0.0 )
    *(float *)(this + 828) = 0.0;
  *(float *)(this + 844) = *(float *)(this + 828);
  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  sub_100EC4A0((int *)this, -1.0, 0);
  if ( *(char *)(this + 248) >= 0 )
  {
    v9[0] = 8.0;
    v9[1] = 8.0;
    v9[2] = 8.0;
    v8[0] = -8.0;
    v8[1] = -8.0;
    v8[2] = 0.0;
    sub_1025F360(this, v8, v9);
    return 0;
  }
  else
  {
    sub_1025FAC0(this);
    return 1;
  }
}
