int __thiscall sub_10099C00(int this, int a2, float a3)
{
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && !sub_10261B20() )
  {
    sub_100EC3F0((int)sub_100992C0, 0.0, 0);
    sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
  }
  if ( !*(_BYTE *)(this + 817) )
  {
    sub_1012D950(this + 800);
    *(_BYTE *)(this + 817) = 1;
  }
  return sub_10099500(this, *(_DWORD *)(this + 808), 0, a2, a3);
}
