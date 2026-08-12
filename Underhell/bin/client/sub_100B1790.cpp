void sub_100B1790()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1042F972 )
  {
    byte_1042F972 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudHistoryResource") + 12);
    v1[0] = "NumberFont";
    v1[1] = "m_hNumberFont";
    v1[2] = "vgui::HFont";
    v1[3] = "HudNumbersSmall";
    v3 = sub_100B0F20;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
