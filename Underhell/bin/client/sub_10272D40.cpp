void sub_10272D40()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1048132C )
  {
    byte_1048132C = 1;
    v0 = (int *)sub_102484C0((int)"ScrollBar");
    v1 = v0[3];
    v2[0] = "autohide_buttons";
    v2[1] = "m_bAutoHideButtons";
    v2[2] = "bool";
    v2[3] = "0";
    v4 = sub_10272470;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
