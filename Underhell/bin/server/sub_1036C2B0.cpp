int __thiscall sub_1036C2B0(int this, float *a2)
{
  float v4[3]; // [esp+Ch] [ebp-Ch] BYREF

  *(_DWORD *)(this + 196) = sub_1036AF30;
  sub_10023CB0((char *)this, 62);
  sub_101C73D0((unsigned int *)this, 0);
  *(float *)(this + 3648) = *(float *)(dword_106B31C8 + 12) + 0.5;
  if ( sub_1036AE90(this) )
  {
    v4[0] = *(float *)(this + 716);
    v4[1] = *(float *)(this + 720);
    v4[2] = *(float *)(this + 724) + 1.0;
    sub_1025F370((void *)this, v4, 0);
  }
  sub_100DD660(this, a2);
  *(_BYTE *)(this + 3657) = 1;
  sub_100EC3F0((_DWORD *)this, (int)sub_1036AE00, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
