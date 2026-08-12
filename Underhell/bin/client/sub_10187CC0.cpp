void sub_10187CC0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104456DF )
  {
    byte_104456DF = 1;
    v0 = (int *)sub_102484C0("CMapOverview");
    v1 = v0[3];
    v2[0] = "zoom";
    v2[1] = "m_fZoom";
    v2[2] = "float";
    v2[3] = "1.0";
    v4 = sub_101855A0;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
