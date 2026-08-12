void sub_100BE0A0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104300D7 )
  {
    byte_104300D7 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudUHBattery") + 12);
    v1[0] = "HullDisabledAlpha";
    v1[1] = "m_iHullDisabledAlpha";
    v1[2] = "int";
    v1[3] = "0";
    v3 = sub_100BC840;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
