void sub_100C7750()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430BF3 )
  {
    byte_10430BF3 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudFilmDemo") + 12);
    v1[0] = "BorderColor";
    v1[1] = "m_BorderColor";
    v1[2] = "Color";
    v1[3] = "0 0 0 255";
    v3 = sub_100C7330;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
