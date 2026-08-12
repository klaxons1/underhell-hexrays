int __thiscall sub_101E4CA0(int this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ebx
  float v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+10h] [ebp-8h]

  v2 = sub_1023CA80(*(_DWORD *)(this + 24));
  v3 = sub_1023C740(v2);
  v4 = 0;
  v8 = v3;
  if ( !v3 )
    return Msg("Client lost reserved sound!\n");
  result = *(_DWORD *)(this + 256);
  if ( (result & 0x8000) != 0 )
  {
    *(_DWORD *)(v3 + 8) = 0;
  }
  else
  {
    if ( (result & 1) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v7 = *(float *)(this + 480) * *(float *)(this + 480)
         + *(float *)(this + 476) * *(float *)(this + 476)
         + *(float *)(this + 484) * *(float *)(this + 484);
      v4 = (int)off_10689708(v7);
      if ( v4 > 512 )
        v4 = 512;
    }
    if ( (*(_BYTE *)(this + 3292) & 2) != 0 )
      v4 += 100;
    *(_DWORD *)(this + 3632) = v4;
    v6 = *(_DWORD *)(v3 + 8);
    if ( v6 >= v4 )
    {
      if ( v6 > v4 )
      {
        v6 = (int)((double)v6 - *(float *)(dword_106B31C8 + 16) * 250.0);
        if ( v6 < v4 )
          v6 = 0;
      }
    }
    else
    {
      v6 = v4;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = v8;
    *(float *)(v8 + 36) = *(float *)(this + 580);
    *(float *)(v8 + 40) = *(float *)(this + 584);
    *(float *)(v8 + 44) = *(float *)(this + 588);
    *(_DWORD *)(v8 + 8) = v6;
    *(_DWORD *)(v8 + 16) = 4;
  }
  return result;
}
