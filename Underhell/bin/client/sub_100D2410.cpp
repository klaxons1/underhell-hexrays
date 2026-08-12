void sub_100D2410()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104310A1 )
  {
    byte_104310A1 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CPDumpPanel") + 12);
    v1[0] = "LabelFont";
    v1[1] = "m_FontMedium";
    v1[2] = "vgui::HFont";
    v1[3] = "DefaultSmall";
    v3 = sub_100D17E0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
