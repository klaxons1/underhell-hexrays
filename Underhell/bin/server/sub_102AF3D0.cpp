void __thiscall sub_102AF3D0(int this)
{
  float v2; // [esp+0h] [ebp-Ch]
  float v3; // [esp+0h] [ebp-Ch]

  sub_10185B30((int *)this);
  if ( *(_DWORD *)(this + 1028) )
  {
    v2 = *(float *)(this + 1036) + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_102AC320, v2, off_1065FD70);
  }
  if ( *(_DWORD *)(dword_10698344 + 48) && (*(_DWORD *)(this + 248) & 0x2000) != 0 )
  {
    v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC3F0((_DWORD *)this, (int)sub_102AE690, v3, off_1065FD74);
  }
  sub_102AE3D0(this);
}
