void sub_100BCBD0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430085 )
  {
    byte_10430085 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudDotReticle") + 12);
    v1[0] = "dottall";
    v1[1] = "m_fdottall";
    v1[2] = "proportional_float";
    v1[3] = "1";
    v3 = sub_100BC840;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
