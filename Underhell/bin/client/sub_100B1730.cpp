void sub_100B1730()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1042F971 )
  {
    byte_1042F971 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudHistoryResource") + 12);
    v1[0] = "text_inset";
    v1[1] = "m_flTextInset";
    v1[2] = "proportional_float";
    v1[3] = "26";
    v3 = sub_101B4F80;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
