int __thiscall sub_103BF830(int *this)
{
  int result; // eax
  __int64 v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]

  v4 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100EC4A0(this, v4, 0);
  result = (*(int (__thiscall **)(int *))(*this + 2272))(this);
  if ( (_BYTE)result )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = this;
    sub_1010DD80(this + 973, v3, 0.0);
    (*(void (__thiscall **)(int *, int))(*this + 2268))(this, 3);
    sub_100EBE30((int)this, 1);
    return sub_100EC3F0(this, 0, 0.0, 0);
  }
  return result;
}
