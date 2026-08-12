int __thiscall sub_102BF000(int *this, int a2)
{
  float v4; // [esp+0h] [ebp-Ch]

  if ( sub_100E9200(this, 0) > 0.0 )
    return sub_100EC4A0(this, -1.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v4, 0);
}
