void sub_100D11A0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1043105F )
  {
    byte_1043105F = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudNumericDisplay") + 12);
    v1[0] = "Blur";
    v1[1] = "m_flBlur";
    v1[2] = "float";
    v1[3] = "0";
    v3 = sub_100C92F0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
