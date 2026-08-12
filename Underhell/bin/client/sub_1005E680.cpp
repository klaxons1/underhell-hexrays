void sub_1005E680()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1040DBAA )
  {
    byte_1040DBAA = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCommentary") + 12);
    v1[0] = "bar_width";
    v1[1] = "m_iBarWide";
    v1[2] = "proportional_int";
    v1[3] = "16";
    v3 = sub_1005D960;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
