int __stdcall sub_1006DE00(int a1)
{
  int result; // eax
  float v2; // [esp+0h] [ebp-Ch]

  result = sub_100D7680(a1);
  if ( result )
  {
    sub_100EC3F0((int)sub_1006DC50, 0.0, 0);
    v2 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(v2, 0);
  }
  return result;
}
