void __thiscall sub_101F9E60(int this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ebp
  int v8; // ebx
  int i; // ebx
  double v10; // st7
  int v11; // ebp
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebp
  int j; // ebx
  double v17; // st7
  int v18; // ebp
  int v19; // [esp+3Ch] [ebp-10h]
  int v20; // [esp+40h] [ebp-Ch]
  int v21; // [esp+40h] [ebp-Ch]
  int v22; // [esp+44h] [ebp-8h]
  int v23; // [esp+44h] [ebp-8h]
  float v24; // [esp+48h] [ebp-4h]
  float v25; // [esp+48h] [ebp-4h]
  int v26; // [esp+58h] [ebp+Ch]
  int v27; // [esp+58h] [ebp+Ch]

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CParticleCollection::InitializeNewParticles",
    0,
    "Particle Simulation",
    0,
    4);
  v5 = ~a4 & (*(_DWORD *)(this + 6056) | *(_DWORD *)(this + 6060));
  v6 = *(_DWORD *)(*(_DWORD *)(this + 64) + 620);
  v19 = v6;
  v26 = 0;
  if ( v6 > 0 )
  {
    do
    {
      v7 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 64) + 608) + 4 * v26);
      v8 = (*(int (__thiscall **)(_DWORD *))(*v7 + 12))(v7);
      v22 = v8;
      if ( (v8 & v5) != 0 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 88))(v7) )
      {
        v20 = *(_DWORD *)(this + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 748) + 4 * v26);
        v24 = Plat_FloatTime();
        if ( (*(_BYTE *)(this + 6596) & 1) == 0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 92))(v7) )
        {
          sub_101F7980(v7, this, a2, a3, v5, v20);
        }
        else
        {
          for ( i = 0; i < a3; ++i )
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, int))(*v7 + 96))(v7, this, i + a2, 1, v5, v20);
          v8 = v22;
        }
        v10 = Plat_FloatTime() - v24;
        v11 = v7[6];
        *(float *)(v11 + 12) = v10 + *(float *)(v11 + 12);
        if ( v10 < *(float *)(v11 + 4) )
          v10 = *(float *)(v11 + 4);
        *(float *)(v11 + 4) = v10;
        v5 &= ~v8;
      }
      ++v26;
    }
    while ( v26 < v19 );
    v6 = v19;
  }
  v12 = 0;
  v27 = 0;
  if ( v6 > 0 )
  {
    do
    {
      v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 608) + 4 * v12);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
      v15 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 64) + 608) + 4 * v12);
      v21 = v14;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 88))(v15) )
      {
        v23 = *(_DWORD *)(this + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 748) + 4 * v12);
        v25 = Plat_FloatTime();
        if ( (*(_BYTE *)(this + 6596) & 1) == 0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 92))(v15) )
        {
          sub_101F7980(v15, this, a2, a3, v5, v23);
        }
        else
        {
          for ( j = 0; j < a3; ++j )
            (*(void (__thiscall **)(_DWORD *, int, int, int, int, int))(*v15 + 96))(v15, this, j + a2, 1, v5, v23);
          v12 = v27;
        }
        v17 = Plat_FloatTime() - v25;
        v18 = v15[6];
        *(float *)(v18 + 12) = *(float *)(v18 + 12) + v17;
        if ( v17 < *(float *)(v18 + 4) )
          v17 = *(float *)(v18 + 4);
        *(float *)(v18 + 4) = v17;
        v5 &= ~v21;
      }
      v27 = ++v12;
    }
    while ( v12 < v19 );
  }
  sub_101F7F40(this, a2, a3, v5);
  sub_101F83C0((_DWORD *)this, a2, a3);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
