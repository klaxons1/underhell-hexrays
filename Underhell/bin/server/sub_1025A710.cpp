int __thiscall sub_1025A710(int *this, unsigned int a2)
{
  int result; // eax

  sub_102587A0(this, a2);
  result = (*(int (__thiscall **)(int *, unsigned int))(*this + 752))(this, a2);
  if ( (_BYTE)result )
  {
    ++this[276];
    sub_100EC3F0(this, (int)sub_10256A00, 0.0, 0);
    return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
