void sub_101B9360()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044F041 )
  {
    byte_1044F041 = 1;
    v0 = (int *)sub_102484C0("CHudZoom");
    v1 = v0[3];
    v2[0] = "DashGap";
    v2[1] = "m_flDashGap";
    v2[2] = "proportional_float";
    v2[3] = "16";
    v4 = sub_101B8A50;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
