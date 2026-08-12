void sub_100D1320()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10431063 )
  {
    byte_10431063 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudNumericDisplay") + 12);
    v1[0] = "NumberGlowFont";
    v1[1] = "m_hNumberGlowFont";
    v1[2] = "vgui::HFont";
    v1[3] = "HudNumbersGlow";
    v3 = sub_100D0D80;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
