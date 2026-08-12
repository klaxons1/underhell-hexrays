void __thiscall sub_101206D0(int this)
{
  int v2; // eax
  unsigned __int8 (__thiscall *v3)(int); // eax
  double v4; // st7
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  __int64 v11; // [esp-4h] [ebp-38h]
  float v12[3]; // [esp+Ch] [ebp-28h] BYREF
  int v13; // [esp+18h] [ebp-1Ch] BYREF
  float v14; // [esp+1Ch] [ebp-18h]
  float v15; // [esp+20h] [ebp-14h]
  float v16[3]; // [esp+24h] [ebp-10h] BYREF
  float v17; // [esp+30h] [ebp-4h]

  sub_1011F8E0(this, 1);
  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    v2 = *(_DWORD *)(this + 800);
    if ( v2 != 2 && v2 != 3 )
      sub_101200D0((_DWORD *)this);
  }
  v3 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 728);
  *(_DWORD *)(this + 800) = 2;
  *(_DWORD *)(this + 4) = sub_10120520;
  if ( v3(this) )
  {
    v4 = 1.0;
    v5 = *(_DWORD *)(this + 880);
    v17 = 1.0;
    if ( v5 != -1
      && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (v5 & 0xFFF) + 1]
      && (*(_DWORD *)(this + 248) & 0x10) == 0
      && 0.0 != *(float *)(this + 844) )
    {
      v6 = sub_1026A890(this + 880);
      v7 = v6;
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      sub_10111A60((_BYTE *)(this + 320), (float *)(v7 + 580), v12);
      v8 = sub_1026A890(this + 880);
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      v16[0] = v12[0] - *(float *)(v8 + 580);
      v16[1] = v12[1] - *(float *)(v8 + 584);
      v16[2] = 0.0;
      v9 = sub_1026A890(this + 880);
      v10 = v9;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      *(float *)&v13 = *(float *)(this + 580) - *(float *)(v10 + 580);
      v14 = *(float *)(this + 584) - *(float *)(v10 + 584);
      v15 = 0.0;
      sub_100FDED0((float *)&v13, v12, v16);
      if ( v12[2] <= 0.0 )
        v4 = v17;
      else
        v4 = -1.0;
    }
    *(float *)&v13 = *(float *)(this + 864) * v4;
    v14 = *(float *)(this + 868) * v4;
    v15 = v4 * *(float *)(this + 872);
    sub_10246BC0((int)&v13, *(float *)(this + 108));
  }
  else
  {
    sub_10246AC0(this + 828, *(float *)(this + 108));
  }
  HIDWORD(v11) = this;
  LODWORD(v11) = this;
  sub_1010DD80((_DWORD *)(this + 1176), v11, 0.0);
}
