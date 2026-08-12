void sub_100B7F40()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1042FC28 )
  {
    byte_1042FC28 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudAnimationInfo") + 12);
    v1[0] = "ItemFont";
    v1[1] = "m_ItemFont";
    v1[2] = "vgui::HFont";
    v1[3] = "DebugFixedSmall";
    v3 = sub_101B4F20;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
