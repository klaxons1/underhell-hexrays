void sub_100B7FA0()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1042FC29 )
  {
    byte_1042FC29 = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudAnimationInfo") + 12);
    v1[0] = "LabelColor";
    v1[1] = "m_LabelColor";
    v1[2] = "Color";
    v1[3] = "DebugLabel";
    v3 = sub_100B7730;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
