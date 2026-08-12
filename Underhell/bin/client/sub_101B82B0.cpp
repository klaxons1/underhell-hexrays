void sub_101B82B0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044EFD3 )
  {
    byte_1044EFD3 = 1;
    v0 = (int *)sub_102484C0("CHudWeaponSelection");
    v1 = v0[3];
    v2[0] = "SelectedFgColor";
    v2[1] = "m_BrightBoxColor";
    v2[2] = "Color";
    v2[3] = "BgColor";
    v4 = sub_101B5F50;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
