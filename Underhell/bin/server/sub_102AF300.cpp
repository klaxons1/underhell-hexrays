void __thiscall sub_102AF300(int this)
{
  const char *v2; // eax
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+0h] [ebp-Ch]

  sub_102AE290((_DWORD *)this);
  sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 1028) )
  {
    if ( 0.0 == *(float *)(this + 1036) )
    {
      v2 = *(const char **)(this + 92);
      if ( !v2 )
        v2 = String;
      Msg("%s using pool behavior without a specified pool regen time.\n", v2);
      *(float *)(this + 1036) = 0.1;
    }
    if ( !*(_BYTE *)(this + 920) && *(_DWORD *)(dword_106B31C8 + 72) != 1 )
    {
      v3 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 1036);
      sub_100EC3F0((_DWORD *)this, (int)sub_102AC320, v3, off_1065FD70);
      if ( *(_DWORD *)(dword_10698344 + 48) )
      {
        if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
        {
          v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
          sub_100EC3F0((_DWORD *)this, (int)sub_102AE690, v4, off_1065FD74);
        }
      }
    }
  }
  sub_102AE3D0(this);
}
