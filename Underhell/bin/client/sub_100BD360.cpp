void sub_100BD360()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104300A7 )
  {
    byte_104300A7 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudUHHermitCards") + 12);
    v1[0] = "HullDisabledAlpha";
    v1[1] = "m_iHullDisabledAlpha";
    v1[2] = "int";
    v1[3] = "0";
    v3 = sub_100BCE70;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
