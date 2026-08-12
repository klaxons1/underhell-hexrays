void sub_100BEA20()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430106 )
  {
    byte_10430106 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudBleeding") + 12);
    v1[0] = "bloodwide";
    v1[1] = "m_fbloodwide";
    v1[2] = "proportional_float";
    v1[3] = "32";
    v3 = sub_100CAB90;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
