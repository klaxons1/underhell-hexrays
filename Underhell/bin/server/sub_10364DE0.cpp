int __thiscall sub_10364DE0(_DWORD *this)
{
  int v2; // ebx
  int result; // eax

  v2 = this[59];
  if ( (v2 & 1) != 0 )
    this[59] = v2 | 0x20000000;
  result = sub_1002D900(this, v2);
  this[59] = v2;
  return result;
}
