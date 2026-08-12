int __thiscall sub_10177900(int *this, int a2, int a3)
{
  int result; // eax
  float v5; // [esp+0h] [ebp-10h]

  result = sub_100DCF40(this, a2, a3);
  if ( !a2 )
  {
    sub_100EC3F0(this, (int)sub_101776C0, 0.0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(this, v5, 0);
  }
  return result;
}
