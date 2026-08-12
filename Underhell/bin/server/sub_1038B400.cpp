void __thiscall sub_1038B400(int this)
{
  int v2; // eax

  sub_1001E3F0((_DWORD *)this);
  if ( !*(_BYTE *)(this + 4892) || !sub_102A8560(this + 4876) )
  {
    v2 = sub_101679A0((int)"gordon_precriminal");
    if ( sub_10167A00(v2) == 1 )
      sub_10024230((char *)this, 77);
  }
  if ( !*(_BYTE *)(this + 2680)
    && !sub_100697A0((_DWORD *)this, 115, 1)
    && !sub_100697A0((_DWORD *)this, 41, 1)
    && !sub_100697A0((_DWORD *)this, 51, 1)
    && !sub_100697A0((_DWORD *)this, 116, 1) )
  {
    sub_10024230((char *)this, 75);
  }
  if ( !sub_100697A0((_DWORD *)this, 97, 1)
    && !sub_100697A0((_DWORD *)this, 98, 1)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296))(this) )
  {
    sub_10024230((char *)this, 73);
  }
  if ( sub_100697A0((_DWORD *)this, 27, 1) )
  {
    sub_10024290((char *)this, 17);
    sub_10024290((char *)this, 18);
  }
  if ( !sub_100697A0((_DWORD *)this, 17, 1)
    && !sub_100697A0((_DWORD *)this, 116, 1)
    && !sub_100697A0((_DWORD *)this, 117, 1)
    && !sub_100697A0((_DWORD *)this, 115, 1)
    && !sub_100697A0((_DWORD *)this, 119, 1) )
  {
    sub_10024230((char *)this, 76);
  }
  if ( sub_100697A0((_DWORD *)this, 41, 1) )
  {
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4324) < 10.0 )
    {
      sub_10024290((char *)this, 17);
      sub_10024290((char *)this, 18);
    }
  }
  else if ( sub_10389B80((_DWORD *)this)
         && sub_100697A0((_DWORD *)this, 12, 1)
         && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4200) <= -0.001 )
  {
    sub_10024290((char *)this, 23);
  }
}
