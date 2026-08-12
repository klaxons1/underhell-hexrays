void sub_100BD3C0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104300A8 )
  {
    byte_104300A8 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudUHHermitCards") + 12);
    v1[0] = "HullColor";
    v1[1] = "m_HullColor";
    v1[2] = "Color";
    v1[3] = "2 127 252 192";
    v3 = sub_101AFBD0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
