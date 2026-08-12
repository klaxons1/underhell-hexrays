unsigned int __thiscall sub_102BC610(int this)
{
  int v2; // eax
  unsigned int result; // eax
  __int64 v4; // [esp-4h] [ebp-10h]
  float v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  v2 = sub_100BDF40(this, "idle_open");
  sub_100C3330(this, v2);
  HIDWORD(v4) = this;
  LODWORD(v4) = this;
  sub_1010DD80((_DWORD *)(this + 1340), v4, 0.0);
  v6 = off_106614D8;
  *(_BYTE *)(this + 1283) = 1;
  sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), v6);
  result = *(_DWORD *)(this + 248);
  if ( (result & 0x1000) == 0 )
  {
    result >>= 15;
    if ( (result & 1) == 0 && *(_BYTE *)(this + 1120) && *(_BYTE *)(this + 1283) )
    {
      if ( *(_DWORD *)(this + 1256) )
      {
        v5 = *(float *)(dword_106B31C8 + 12) + 3.0;
        return sub_100EC3F0((_DWORD *)this, (int)sub_102BC470, v5, off_106614DC);
      }
    }
  }
  return result;
}
