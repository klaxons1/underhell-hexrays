void sub_100CB0A0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430E1E )
  {
    byte_10430E1E = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v1[0] = "BarInsetY";
    v1[1] = "m_flBarInsetY";
    v1[2] = "proportional_float";
    v1[3] = &unk_10307A08;
    v3 = sub_100BC840;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
