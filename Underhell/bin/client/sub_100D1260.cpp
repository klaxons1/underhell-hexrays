void sub_100D1260()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10431061 )
  {
    byte_10431061 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudNumericDisplay") + 12);
    v1[0] = "Ammo2Color";
    v1[1] = "m_Ammo2Color";
    v1[2] = "Color";
    v1[3] = "FgColor";
    v3 = sub_100D0D70;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
