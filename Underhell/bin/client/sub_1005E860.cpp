void sub_1005E860()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1040DBAF )
  {
    byte_1040DBAF = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCommentary") + 12);
    v1[0] = "icon_xpos";
    v1[1] = "m_iIconX";
    v1[2] = "proportional_int";
    v1[3] = "8";
    v3 = sub_1005DA00;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
