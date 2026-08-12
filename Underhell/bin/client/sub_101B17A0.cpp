void sub_101B17A0()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1044ED05 )
  {
    byte_1044ED05 = 1;
    v0 = (int *)sub_102484C0("CHudFlashlight");
    v1 = v0[3];
    v2[0] = "BarHeight";
    v2[1] = "m_flBarHeight";
    v2[2] = "proportional_float";
    v2[3] = "2";
    v4 = sub_101AFC30;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
