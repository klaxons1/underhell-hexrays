void sub_1005E7A0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1040DBAD )
  {
    byte_1040DBAD = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCommentary") + 12);
    v1[0] = "count_xpos_from_right";
    v1[1] = "m_iCountXFR";
    v1[2] = "proportional_int";
    v1[3] = "8";
    v3 = sub_1005D9C0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
