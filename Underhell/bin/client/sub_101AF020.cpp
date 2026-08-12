void sub_101AF020()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044ECBB )
  {
    byte_1044ECBB = 1;
    v0 = (int *)sub_102484C0("CHudCredits");
    v1 = v0[3];
    v2[0] = "TextFont";
    v2[1] = "m_hTextFont";
    v2[2] = "vgui::HFont";
    v2[3] = "Default";
    v4 = sub_101B4490;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
