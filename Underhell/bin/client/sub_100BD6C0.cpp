void sub_100BD6C0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104300B0 )
  {
    byte_104300B0 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudUHHermitCards") + 12);
    v1[0] = "contourx";
    v1[1] = "m_fcontourx";
    v1[2] = "proportional_float";
    v1[3] = "0";
    v3 = sub_100BDC40;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
