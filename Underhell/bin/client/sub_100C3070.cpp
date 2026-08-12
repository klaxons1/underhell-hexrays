void sub_100C3070()
{
  int v0; // [esp-8h] [ebp-20h]
  _DWORD v1[4]; // [esp+0h] [ebp-18h] BYREF
  char v2; // [esp+10h] [ebp-8h]
  int (__cdecl *v3)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1043076D )
  {
    byte_1043076D = 1;
    v0 = *(_DWORD *)(sub_102484C0("CHudCloseCaption") + 12);
    v1[0] = "topoffset";
    v1[1] = "m_nTopOffset";
    v1[2] = "int";
    v1[3] = "40";
    v3 = sub_100BF7C0;
    v2 = 0;
    sub_100F4BC0(v0, v1);
  }
}
