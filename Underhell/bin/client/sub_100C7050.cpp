void sub_100C7050()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430B3B )
  {
    byte_10430B3B = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCrosshair") + 12);
    v1[0] = "never_draw";
    v1[1] = "m_bHideCrosshair";
    v1[2] = "bool";
    v1[3] = "false";
    v3 = sub_100C6C00;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
