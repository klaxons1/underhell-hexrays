void sub_101B4B70()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044EF22 )
  {
    byte_1044EF22 = 1;
    v0 = (int *)sub_102484C0("CHudSquadStatus");
    v1 = v0[3];
    v2[0] = "SquadIconColor";
    v2[1] = "m_SquadIconColor";
    v2[2] = "Color";
    v2[3] = "255 220 0 160";
    v4 = sub_101B44B0;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
