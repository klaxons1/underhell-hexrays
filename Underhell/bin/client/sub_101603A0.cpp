void __thiscall sub_101603A0(int this, int *a2, int a3)
{
  int v4; // eax
  float *v5; // eax
  float *v6; // edi
  int v7; // ecx
  int v8; // edi
  float *v9; // eax
  int *v10; // edi
  int v11; // ebx

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  if ( sub_100F0010(a2, this - 228, v4) )
  {
    *(_DWORD *)(this + 152) = a2;
    v5 = (float *)sub_100DDA40(260);
    v6 = v5;
    if ( v5 )
    {
      sub_100F2BA0(v5, (int)"DustTrail");
      *(_DWORD *)v6 = &CDustFollower::`vftable';
    }
    else
    {
      v6 = 0;
    }
    if ( v6 != *(float **)(this + 156) )
    {
      if ( v6 )
        sub_100F2950(v6);
      v7 = *(_DWORD *)(this + 156);
      if ( v7 )
        sub_100F2FF0(v7);
      *(_DWORD *)(this + 156) = v6;
    }
    v8 = *(_DWORD *)(this + 156);
    if ( v8 )
    {
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
      sub_100F3060(v8, v9);
      sub_100F29C0(*(float **)(this + 156), 64.0, 128.0);
      v10 = (int *)(this + 80);
      v11 = 16;
      do
      {
        *v10 = sub_100F29B0(*(_DWORD *)(this + 156), (int)v10, this, "particle/smokesprites_0001");
        ++v10;
        --v11;
      }
      while ( v11 );
      *(float *)(this + 144) = 1.0 / *(float *)(this + 4);
      *(float *)(this + 148) = 0.0;
    }
  }
}
