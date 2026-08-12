void __thiscall sub_10160DB0(int this, int a2, int a3)
{
  float **v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // ebx
  float *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  float *v17; // eax
  float *v18; // ebx
  int v19; // ecx
  int v20; // ebx
  float *v21; // eax
  float *v22; // eax

  sub_100A6350((_DWORD *)this, a2, a3);
  v4 = sub_100F32D0((float **)&a3, (int)"FireTrail");
  v5 = (int)*v4;
  if ( *v4 != *(float **)(this + 32) )
  {
    if ( v5 )
      sub_100F2950(*v4);
    v6 = *(_DWORD *)(this + 32);
    if ( v6 )
      sub_100F2FF0(v6);
    *(_DWORD *)(this + 32) = v5;
  }
  if ( a3 )
    sub_100F2FF0(a3);
  v7 = *(_DWORD *)(this + 32);
  if ( v7 )
  {
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
    sub_100F3060(v7, v8);
    *(_DWORD *)(this + 40) = dword_1043DF20[0];
    *(_DWORD *)(this + 44) = dword_1043DF24;
    v9 = sub_100F29B0(*(_DWORD *)(this + 32), v5, this, "sprites/flamelet1");
    v10 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 48) = v9;
    v11 = sub_100F29B0(v10, v5, this, "sprites/flamelet2");
    v12 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 52) = v11;
    v13 = sub_100F29B0(v12, v5, this, "sprites/flamelet3");
    v14 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 56) = v13;
    v15 = sub_100F29B0(v14, v5, this, "sprites/flamelet4");
    v16 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 60) = v15;
    *(_DWORD *)(this + 64) = sub_100F29B0(v16, v5, this, "sprites/flamelet5");
    v17 = (float *)sub_100DDA40(260);
    v18 = v17;
    if ( v17 )
    {
      sub_100F2BA0(v17, (int)"FireTrail_Smoke");
      *(_DWORD *)v18 = &CSmokeParticle::`vftable';
    }
    else
    {
      v18 = 0;
    }
    if ( v18 != *(float **)(this + 36) )
    {
      if ( v18 )
        sub_100F2950(v18);
      v19 = *(_DWORD *)(this + 36);
      if ( v19 )
        sub_100F2FF0(v19);
      *(_DWORD *)(this + 36) = v18;
    }
    v20 = *(_DWORD *)(this + 36);
    v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
    sub_100F3060(v20, v21);
    sub_100F29C0(*(float **)(this + 36), 64.0, 128.0);
    if ( *(_DWORD *)(this + 36) )
    {
      v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36))(this - 1424);
      *(float *)(this + 68) = *v22;
      *(float *)(this + 72) = v22[1];
      *(float *)(this + 76) = v22[2];
    }
  }
}
