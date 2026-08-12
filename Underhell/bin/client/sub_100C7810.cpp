void sub_100C7810()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430BF5 )
  {
    byte_10430BF5 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudFilmDemo") + 12);
    v1[0] = "BorderLeft";
    v1[1] = "m_iBorderLeft";
    v1[2] = "proportional_int";
    v1[3] = "8";
    v3 = sub_100C7370;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
