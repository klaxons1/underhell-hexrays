int __thiscall sub_100F5880(int *this, float a2)
{
  float v3; // [esp+0h] [ebp-8h]

  if ( -1.0 == a2 )
    return sub_100EC4A0(this, -1.0, 0);
  v3 = a2 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0(this, v3, 0);
}
