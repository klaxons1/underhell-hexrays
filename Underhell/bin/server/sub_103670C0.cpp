int __thiscall sub_103670C0(int *this, float a2, float a3)
{
  int result; // eax

  if ( !(*(int (__thiscall **)(int *))(*this + 368))(this) )
    return 0;
  if ( (this[64] & 1) == 0 )
    return 0;
  if ( *((float *)this + 1000) > (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  result = sub_1032D910(this, a2, a3);
  if ( result == 39 || result == 40 )
    return 0;
  return result;
}
