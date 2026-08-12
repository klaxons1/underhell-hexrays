bool __thiscall sub_1016F450(int this)
{
  char v2; // bl
  double v3; // st7
  int v4; // eax
  float v6; // [esp+8h] [ebp-4h]
  int v7; // [esp+8h] [ebp-4h]

  v2 = 1;
  v3 = *(float *)(this + 1984) - *((float *)off_103DC81C + 3);
  if ( v3 < 0.0 )
  {
    if ( *(char *)(this + 1980) >= 0 )
    {
      v2 = 0;
    }
    else
    {
      if ( !*(_BYTE *)(this + 116) )
      {
        sub_10035090((_BYTE *)this, 2, 0);
        v6 = v3;
        v3 = v6;
      }
      v4 = (int)((v3 * *(float *)(this + 2000) + 1.0) * (double)*(int *)(this + 2044));
      if ( v4 <= 0 )
      {
        v2 = 0;
        LOBYTE(v4) = 0;
      }
      LOWORD(v7) = *(_DWORD *)(this + 88);
      BYTE2(v7) = BYTE2(*(_DWORD *)(this + 88));
      HIBYTE(v7) = v4;
      if ( *(_DWORD *)(this + 88) != v7 )
        *(_DWORD *)(this + 88) = v7;
    }
  }
  if ( (*(_DWORD *)(this + 1980) & 0x400000) != 0 )
    return 0.0 != *(float *)(this + 1984);
  else
    return v2;
}
