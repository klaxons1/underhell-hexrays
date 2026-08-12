void sub_100DE320()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104345E6 )
  {
    byte_104345E6 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudMenu") + 12);
    v1[0] = "ItemFontPulsing";
    v1[1] = "m_hItemFontPulsing";
    v1[2] = "vgui::HFont";
    v1[3] = "MenuItemFontPulsing";
    v3 = sub_100BDC60;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
