int __thiscall sub_10130470(int *this)
{
  const char *v2; // edi
  int v3; // eax
  int v4; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  this[284] = 0;
  v2 = (const char *)this[280];
  v6 = 0;
  if ( !v2 )
    v2 = String;
  byte_106AEF70 = 0;
  dword_106AEE68 = 0;
  dword_106AEE64 = 0;
  memset(&Buffer, 0, 0x4B4u);
  memset(&unk_106AEE70, 0, 0x100u);
  v3 = sub_1025F7A0(v2, &v6);
  v4 = v3;
  if ( v6 <= 0 || !v3 )
    return DevMsg(1, "CEnvEffectsScript:  failed to load %s\n", v2);
  dword_106AEE68 = v3;
  sub_101303F0(this, (int)v2, v3);
  return sub_1025F7F0(v4);
}
