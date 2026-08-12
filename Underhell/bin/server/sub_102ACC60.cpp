int __thiscall sub_102ACC60(int this, int a2)
{
  double v2; // st6
  float v4; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  *(float *)(this + 1036) = v2;
  if ( v2 == 0.0 )
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_1065FD70);
  v4 = v2 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_102AC320, v4, off_1065FD70);
}
