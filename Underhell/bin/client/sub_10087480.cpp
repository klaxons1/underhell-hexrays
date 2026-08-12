void __thiscall sub_10087480(_DWORD *this, unsigned __int16 a2, float *a3)
{
  int v4; // esi

  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::UpdateFlashlightState", 0, "Flashlight Shadows", 0, 4);
  v4 = 168 * a2;
  sub_10084EF0(this[9] + v4 + 12, a3);
  (*(void (__stdcall **)(_DWORD, float *))(*(_DWORD *)dword_1041318C + 64))(*(unsigned __int16 *)(this[9] + v4 + 4), a3);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
