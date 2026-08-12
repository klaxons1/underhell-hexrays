void sub_100CB040()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430E1D )
  {
    byte_10430E1D = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v1[0] = "BarInsetX";
    v1[1] = "m_flBarInsetX";
    v1[2] = "proportional_float";
    v1[3] = "26";
    v3 = sub_100BE7D0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
