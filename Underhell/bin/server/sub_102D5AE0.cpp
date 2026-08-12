int __thiscall sub_102D5AE0(int this)
{
  double v3; // st7
  int *v4; // ecx
  int v5; // edi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  float v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+14h] [ebp-8h]
  char v13; // [esp+1Bh] [ebp-1h] BYREF

  if ( *(float *)(this + 2120) < (double)*(float *)(dword_106B31C8 + 12) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1152))(this);
  if ( !*(_BYTE *)(this + 2108) && *(float *)(this + 2124) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(8, (float *)(this + 580), 400, 1.5, this, 0, 0);
    *(_BYTE *)(this + 2108) = 1;
  }
  if ( *(float *)(this + 2144) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_1023C380((_DWORD *)this, (int)"Grenade.Blip", 0.0, 0);
    if ( *(_BYTE *)(this + 2108) )
      v3 = *(float *)(dword_106B31C8 + 12) + 0.30000001;
    else
      v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
    *(float *)(this + 2144) = v3;
  }
  LOBYTE(v12) = -((int)(*(float *)(dword_106B31C8 + 12) * 5.0) % 2);
  *(_WORD *)((char *)&v12 + 1) = 0;
  HIBYTE(v12) = -1;
  if ( *(_DWORD *)(this + 771) != v12 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 771);
    }
    *(_DWORD *)(this + 771) = v12;
  }
  v5 = sub_10261B20();
  if ( !v5 )
    goto LABEL_31;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 580) - *(float *)(v5 + 580);
  v7 = v6 * v6;
  v8 = *(float *)(this + 584) - *(float *)(v5 + 584);
  v9 = *(float *)(this + 588) - *(float *)(v5 + 588);
  v11 = v9 * v9 + v8 * v8 + v7;
  if ( off_10689708(v11) < *(float *)(dword_106DE924 + 44) )
  {
    v13 = 1;
    sub_100DDAD0((_BYTE *)(this + 769), &v13);
  }
  else
  {
LABEL_31:
    if ( !*(_BYTE *)(this + 770) )
    {
      v13 = 0;
      sub_100DDAD0((_BYTE *)(this + 769), &v13);
    }
  }
  v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v10, 0);
}
