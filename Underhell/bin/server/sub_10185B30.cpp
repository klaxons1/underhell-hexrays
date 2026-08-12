int __thiscall sub_10185B30(int *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int *))(*this + 740))(this);
  if ( !(_BYTE)result )
  {
    *((_BYTE *)this + 920) = 0;
    sub_100EC3F0(this, (int)sub_10185A40, 0.0, 0);
    return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
