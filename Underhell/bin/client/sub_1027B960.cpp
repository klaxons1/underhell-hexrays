void sub_1027B960()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1048193D )
  {
    byte_1048193D = 1;
    v0 = (int *)sub_102484C0((int)"SectionedListPanel");
    v1 = v0[3];
    v2[0] = "show_columns";
    v2[1] = "m_bShowColumns";
    v2[2] = "bool";
    v2[3] = "false";
    v4 = sub_10279140;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
