void sub_1012F4F0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_10439407 )
  {
    byte_10439407 = 1;
    v0 = (int *)sub_102484C0("CAvatarImagePanel");
    v1 = v0[3];
    v2[0] = "color_outline";
    v2[1] = "m_clrOutline";
    v2[2] = "Color";
    v2[3] = "Black";
    v4 = sub_1012F170;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
