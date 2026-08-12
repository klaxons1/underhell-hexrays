void sub_100D1380()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10431064 )
  {
    byte_10431064 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudNumericDisplay") + 12);
    v1[0] = "SmallNumberFont";
    v1[1] = "m_hSmallNumberFont";
    v1[2] = "vgui::HFont";
    v1[3] = "HudNumbersSmall";
    v3 = sub_100D0D90;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
