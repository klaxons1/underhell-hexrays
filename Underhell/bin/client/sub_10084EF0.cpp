void __stdcall sub_10084EF0(int a1, float *a2)
{
  _BYTE v2[64]; // [esp+2Ch] [ebp-80h] BYREF
  float v3[16]; // [esp+6Ch] [ebp-40h] BYREF

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CClientShadowMgr::BuildPerspectiveWorldToFlashlightMatrix",
    0,
    "Flashlight Shadows",
    0,
    4);
  sub_10084E00(v3, (int)a2, (int)(a2 + 3));
  sub_101F27E0(v2, a2[9], a2[10], a2[7], a2[8]);
  sub_101F1FF0(v2, v3, a1);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
