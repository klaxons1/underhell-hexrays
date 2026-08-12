void __thiscall sub_1015E2B0(int this, int *a2, int a3)
{
  int v4; // eax
  float *v5; // eax
  float *v6; // edi
  int v7; // ecx
  int v8; // edi
  float *v9; // eax
  double v10; // st7

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  if ( sub_100F0010(a2, this - 228, v4) )
  {
    *(_DWORD *)(this + 108) = a2;
    v5 = (float *)sub_100DDA40(260);
    v6 = v5;
    if ( v5 )
    {
      sub_100F2BA0(v5, (int)"smokeTrail");
      *(_DWORD *)v6 = &CSmokeParticle::`vftable';
    }
    else
    {
      v6 = 0;
    }
    if ( v6 != *(float **)(this + 112) )
    {
      if ( v6 )
        sub_100F2950(v6);
      v7 = *(_DWORD *)(this + 112);
      if ( v7 )
        sub_100F2FF0(v7);
      *(_DWORD *)(this + 112) = v6;
    }
    v8 = *(_DWORD *)(this + 112);
    if ( v8 )
    {
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
      sub_100F3060(v8, v9);
      sub_100F29C0(*(float **)(this + 112), 64.0, 128.0);
      v10 = 1.0 / *(float *)(this + 4);
      *(_DWORD *)(this + 92) = dword_1043DF20[0];
      *(_DWORD *)(this + 96) = dword_1043DF24;
      *(float *)(this + 100) = v10;
      *(float *)(this + 104) = 0.0;
    }
  }
}
