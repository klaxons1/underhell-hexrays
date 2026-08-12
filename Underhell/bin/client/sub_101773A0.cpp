void __cdecl sub_101773A0(int a1)
{
  int v1; // eax
  float *v2; // eax
  float *v3; // esi
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v1 = 0;
  while ( byte_103EA374[4 * v1] != *(_BYTE *)(a1 + 88) )
  {
    if ( ++v1 >= 4 )
      return;
  }
  v5 = (float)(unsigned __int8)byte_103EA375[4 * v1];
  v4 = (float)(unsigned __int8)byte_103EA376[4 * v1];
  v6 = (float)(unsigned __int8)byte_103EA377[4 * v1];
  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GunshipImpact", 0, "Particle/Effect_Rendering", 0, 4);
  v2 = (float *)sub_100DDA40(216);
  v3 = v2;
  if ( v2 )
  {
    sub_100AFB90(v2);
    *(_DWORD *)v3 = &CImpactOverlay::`vftable';
    v3[41] = 0.0;
    v3[1] = *(float *)a1;
    v3[2] = *(float *)(a1 + 4);
    v3[3] = *(float *)(a1 + 8) + 1.0;
    *((_DWORD *)v3 + 34) = 1;
    v3[42] = v5;
    v3[43] = v4;
    v3[44] = v6;
    v3[13] = 0.0099999998;
    v3[14] = 0.0099999998;
    sub_100B0E30(v3);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
