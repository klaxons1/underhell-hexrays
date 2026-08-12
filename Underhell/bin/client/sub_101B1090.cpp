void sub_101B1090()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044ECD8 )
  {
    byte_1044ECD8 = 1;
    v0 = (int *)sub_102484C0("CHudDamageIndicator");
    v1 = v0[3];
    v2[0] = "DmgColorLeft";
    v2[1] = "m_DmgColorLeft";
    v2[2] = "Color";
    v2[3] = "255 0 0 0";
    v4 = sub_101AFBD0;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
