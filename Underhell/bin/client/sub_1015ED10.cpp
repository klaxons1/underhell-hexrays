void __thiscall sub_1015ED10(int this, int *a2, int a3)
{
  int v4; // eax
  float *v5; // eax
  float *v6; // edi
  int v7; // ecx
  int v8; // ebx
  float *v9; // eax
  double v10; // st7
  float *v11; // eax

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  if ( sub_100F0010(a2, this - 228, v4) )
  {
    *(_DWORD *)(this + 116) = a2;
    v5 = (float *)sub_100DDA40(260);
    v6 = v5;
    if ( v5 )
    {
      sub_100F2BA0(v5, (int)"smokeTrail");
      *(_DWORD *)v6 = &CRocketTrailParticle::`vftable';
    }
    else
    {
      v6 = 0;
    }
    if ( v6 != *(float **)(this + 120) )
    {
      if ( v6 )
        sub_100F2950(v6);
      v7 = *(_DWORD *)(this + 120);
      if ( v7 )
        sub_100F2FF0(v7);
      *(_DWORD *)(this + 120) = v6;
    }
    v8 = *(_DWORD *)(this + 120);
    if ( v8 )
    {
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
      sub_100F3060(v8, v9);
      sub_100F29C0(*(float **)(this + 120), 64.0, 128.0);
      v10 = 1.0 / *(float *)(this + 4);
      *(_DWORD *)(this + 100) = dword_1043DF20[0];
      *(_DWORD *)(this + 104) = dword_1043DF24;
      *(float *)(this + 108) = v10;
      *(float *)(this + 112) = 0.0;
      v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
      *(float *)(this + 84) = *v11;
      *(float *)(this + 88) = v11[1];
      *(float *)(this + 92) = v11[2];
    }
  }
}
