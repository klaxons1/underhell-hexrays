void sub_10183F20()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_104454C3 )
  {
    byte_104454C3 = 1;
    v0 = (int *)sub_102484C0("CClientScoreBoardDialog");
    v1 = v0[3];
    v2[0] = "class_width";
    v2[1] = "m_iClassWidth";
    v2[2] = "proportional_int";
    v2[3] = "35";
    v4 = sub_10182360;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
