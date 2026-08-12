void __cdecl sub_10177290(float *a1, float *a2, float a3, float a4, float a5)
{
  float *v5; // eax
  float *v6; // esi

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GunshipImpact", 0, "Particle/Effect_Rendering", 0, 4);
  v5 = (float *)sub_100DDA40(216);
  v6 = v5;
  if ( v5 )
  {
    sub_100AFB90(v5);
    *(_DWORD *)v6 = &CImpactOverlay::`vftable';
    v6[41] = 0.0;
    v6[1] = *a1 + *a2;
    v6[2] = a1[1] + a2[1];
    v6[3] = a1[2] + a2[2];
    *((_DWORD *)v6 + 34) = 1;
    v6[42] = a3;
    v6[43] = a4;
    v6[44] = a5;
    v6[13] = 0.0099999998;
    v6[14] = 0.0099999998;
    sub_100B0E30(v6);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
