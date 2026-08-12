int __thiscall sub_101AD320(int this, float *a2)
{
  double v3; // st6
  double v4; // st5
  double v5; // st7
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  double v9; // st6
  double v10; // st5
  double v11; // st7
  int v12; // eax
  const char *v14; // eax
  float v15; // [esp+0h] [ebp-18h]
  float v16; // [esp+0h] [ebp-18h]
  int v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  v3 = a2[1] - *(float *)(this + 720);
  v4 = *a2 - *(float *)(this + 716);
  v15 = v4 * v4 + v3 * v3;
  v5 = off_10689708(v15);
  v6 = *(_DWORD *)(this + 808);
  v18 = v5;
  v17 = this;
  if ( !v6 || (v7 = *(_DWORD *)(this + 248), (v7 & 0x8000) == 0) || (v7 & 4) != 0 )
    v6 = *(_DWORD *)(this + 800);
  v8 = 0;
  if ( v6 )
  {
    while ( v6 != this )
    {
      if ( ++v8 > 9999 )
      {
        v14 = sub_100D6390((_DWORD *)this);
        Warning("Bad sequence of path_tracks from %s\n", v14);
        return 0;
      }
      v9 = a2[1] - *(float *)(v6 + 720);
      v10 = *a2 - *(float *)(v6 + 716);
      v16 = v10 * v10 + v9 * v9;
      v11 = off_10689708(v16);
      if ( v18 > v11 )
      {
        v18 = v11;
        v17 = v6;
      }
      if ( *(_DWORD *)(v6 + 808) && (v12 = *(_DWORD *)(v6 + 248), (v12 & 0x8000) != 0) && (v12 & 4) == 0 )
        v6 = *(_DWORD *)(v6 + 808);
      else
        v6 = *(_DWORD *)(v6 + 800);
      if ( !v6 )
        return v17;
    }
  }
  return v17;
}
