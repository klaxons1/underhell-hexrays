void sub_1005EAA0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1040DBB5 )
  {
    byte_1040DBB5 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCommentary") + 12);
    v1[0] = "BackgroundColor";
    v1[1] = "m_BackgroundColor";
    v1[2] = "Color";
    v1[3] = "0 0 0 0";
    v3 = sub_1005DAC0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
