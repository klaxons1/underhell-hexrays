void sub_100DE140()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104345E1 )
  {
    byte_104345E1 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudMenu") + 12);
    v1[0] = "TextScane";
    v1[1] = "m_flTextScan";
    v1[2] = "float";
    v1[3] = "1";
    v3 = sub_100BCEB0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
