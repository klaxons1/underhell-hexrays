void sub_100C2E90()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10430768 )
  {
    byte_10430768 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCloseCaption") + 12);
    v1[0] = "BgAlpha";
    v1[1] = "m_flBackgroundAlpha";
    v1[2] = "float";
    v1[3] = "192";
    v3 = sub_100BF720;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
