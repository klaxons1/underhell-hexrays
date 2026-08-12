void sub_100D2470()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104310A2 )
  {
    byte_104310A2 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CPDumpPanel") + 12);
    v1[0] = "TitleFont";
    v1[1] = "m_FontBig";
    v1[2] = "vgui::HFont";
    v1[3] = "Trebuchet24";
    v3 = sub_100BCE90;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
