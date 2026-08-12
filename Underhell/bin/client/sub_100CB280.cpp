void sub_100CB280()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430E23 )
  {
    byte_10430E23 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v1[0] = "TextFont";
    v1[1] = "m_hTextFont";
    v1[2] = "vgui::HFont";
    v1[3] = "HUDBarText";
    v3 = sub_100B0F00;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
