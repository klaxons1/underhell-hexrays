void sub_10183E60()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104454C1 )
  {
    byte_104454C1 = 1;
    v0 = (int *)sub_102484C0("CClientScoreBoardDialog");
    v1 = v0[3];
    v2[0] = "avatar_width";
    v2[1] = "m_iAvatarWidth";
    v2[2] = "int";
    v2[3] = "34";
    v4 = sub_10182340;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
