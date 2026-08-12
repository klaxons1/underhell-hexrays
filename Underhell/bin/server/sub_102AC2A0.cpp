int __thiscall sub_102AC2A0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  this[257] = result;
  if ( this[256] > result )
    this[256] = result;
  if ( !result )
    return sub_100EC3F0(this, 0, *(float *)(dword_106B31C8 + 12), off_1065FD70);
  return result;
}
