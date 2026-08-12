void sub_100C8EE0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430CA4 )
  {
    byte_10430CA4 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v1[0] = "iconwide";
    v1[1] = "m_ficonwide";
    v1[2] = "proportional_float";
    v1[3] = "32";
    v3 = sub_100BCF10;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
