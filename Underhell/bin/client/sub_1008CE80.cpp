void __thiscall sub_1008CE80(_DWORD *this, int a2, int a3)
{
  int v3; // edi

  v3 = 168 * (unsigned __int16)a2;
  if ( (*(_BYTE *)(this[9] + v3 + 8) & 1) != 0 )
  {
    CVProfile::EnterScope(
      g_VProfCurrentProfile,
      "CClientShadowMgr::UpdateProjectedTextureInternal",
      0,
      "Flashlight Shadows",
      0,
      4);
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_1041318C + 56))(*(unsigned __int16 *)(this[9] + v3 + 4), 1);
    sub_1008CB40((int)this, 0, a2);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    sub_1008CC10(this, a2, a3);
  }
}
