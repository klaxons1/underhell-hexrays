void sub_1024FCE0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1047ED96 )
  {
    byte_1047ED96 = 1;
    v0 = (int *)sub_102484C0((int)"Frame");
    v1 = v0[3];
    v2[0] = "titletextinsetY";
    v2[1] = "m_iTitleTextInsetYOverride";
    v2[2] = "proportional_int";
    v2[3] = "0";
    v4 = sub_1024C8B0;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
