void sub_101B49F0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044EF1E )
  {
    byte_1044EF1E = 1;
    v0 = (int *)sub_102484C0("CHudSquadStatus");
    v1 = v0[3];
    v2[0] = "IconFont";
    v2[1] = "m_hIconFont";
    v2[2] = "vgui::HFont";
    v2[3] = "AmmoIcons";
    v4 = sub_100BC840;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
