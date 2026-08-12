void __thiscall sub_1008CF00(_DWORD *this, int a2, int a3)
{
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CClientShadowMgr::UpdateProjectedTexture",
    0,
    "Flashlight Shadows",
    0,
    4);
  if ( (_WORD)a2 != 0xFFFF )
  {
    if ( (*(_BYTE *)(168 * (unsigned __int16)a2 + this[9] + 8) & 1) == 0 )
    {
      Warning("CClientShadowMgr::UpdateProjectedTexture can only be used with flashlights!\n");
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return;
    }
    sub_1008CE80(this, a2, a3);
    sub_1008B0D0((int)this, a2);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
