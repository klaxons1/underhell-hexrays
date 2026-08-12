void sub_1023EF90()
{
  int *v0; // eax
  int v1; // [esp-8h] [ebp-20h]
  _DWORD v2[4]; // [esp+0h] [ebp-18h] BYREF
  char v3; // [esp+10h] [ebp-8h]
  int (__cdecl *v4)(int); // [esp+14h] [ebp-4h]

  if ( !byte_1047CB4B )
  {
    byte_1047CB4B = 1;
    v0 = (int *)sub_102484C0("Panel");
    v1 = v0[3];
    v2[0] = "Texture2";
    v2[1] = "m_nBgTextureId2";
    v2[2] = "textureid";
    v2[3] = "vgui/hud/800corner2";
    v4 = sub_10235FA0;
    v3 = 0;
    sub_100F4BC0(v0, v1, v2);
  }
}
