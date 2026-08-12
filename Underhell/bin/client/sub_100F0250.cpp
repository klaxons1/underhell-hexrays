void __thiscall sub_100F0250(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // ebx
  int i; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // edi
  int k; // esi
  double v17; // st7
  _DWORD v18[3]; // [esp+24h] [ebp-34h] BYREF
  __int32 v19[2]; // [esp+30h] [ebp-28h] BYREF
  int v20[2]; // [esp+38h] [ebp-20h] BYREF
  int v21; // [esp+40h] [ebp-18h]
  int v22; // [esp+44h] [ebp-14h]
  int v23; // [esp+48h] [ebp-10h]
  int v24; // [esp+4Ch] [ebp-Ch]
  _DWORD *v25; // [esp+50h] [ebp-8h]
  int v26; // [esp+54h] [ebp-4h]
  float v27; // [esp+60h] [ebp+8h]

  v27 = *(float *)(dword_10435AFC + 44) * a2;
  v25 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CParticleMSG::UpdateNewEffects", 0, "Particle Simulation", 0, 4);
  sub_101F8CC0(*((float *)off_103DC81C + 3));
  v3 = *(_DWORD *)(dword_10435B44 + 48);
  v26 = 0;
  v24 = v3;
  dbl_10435860 = Plat_FloatTime();
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_100EF420(this, v20);
  v4 = v22;
  flt_10435858 = v27;
  for ( i = 0; i < v4; ++i )
  {
    v6 = v20[0];
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v20[0] + 4 * i) + 4))(LODWORD(flt_10435858));
    if ( v24 > 0 )
    {
      v7 = *(_DWORD *)(v6 + 4 * i);
      if ( v7 )
        v8 = v7 + 16;
      else
        v8 = 0;
      v9 = *(_DWORD *)(v8 + 6008);
      for ( j = 1; v9; j = v11 + v13 )
      {
        v11 = sub_100EB2C0(v9);
        v9 = *(_DWORD *)(v12 + 5980);
      }
      v26 += j;
    }
  }
  v14 = (_DWORD *)v20[0];
  if ( sub_100EBD40(v25, v4, v20[0]) )
  {
    v22 = 0;
    sub_100EF420(v25, v20);
    v4 = v22;
    v14 = (_DWORD *)v20[0];
  }
  if ( v4 )
  {
    sub_1008FDA0();
    if ( *(_DWORD *)(dword_10435A24 + 48) )
    {
      v19[0] = 0;
      v19[1] = 0;
      _InterlockedExchange(v19, 0);
      v18[0] = sub_100EBA20;
      v18[1] = 0;
      v18[2] = 0;
      sub_100EF5C0((int)v18, (__int32)v14, v4, 0x7FFFFFFF, 0);
    }
    else if ( v4 > 0 )
    {
      v15 = v4;
      do
      {
        sub_100EBA20(v14++);
        --v15;
      }
      while ( v15 );
    }
  }
  for ( k = 0; k < v4; ++k )
    sub_100F1A10(*(_DWORD *)(v20[0] + 4 * k));
  v17 = Plat_FloatTime() - dbl_10435860;
  if ( byte_1043585D )
    qword_10435868 = (unsigned __int64)(1000000.0 * v17 + (double)qword_10435868);
  sub_101FAED0((double)*(int *)(dword_104359DC + 48) * 0.001 < v17);
  if ( v24 > 0 && v26 >= v24 )
    sub_100F00A0(v25);
  if ( v21 >= 0 && v20[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20[0]);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
