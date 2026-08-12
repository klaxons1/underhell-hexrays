int __thiscall sub_100E1560(int **this)
{
  int result; // eax
  int *v3; // ecx
  float v4; // [esp+0h] [ebp-Ch]

  if ( ((unsigned __int8 (__thiscall *)(int **))(*this)[103])(this) )
  {
    sub_100E1460((unsigned int)this);
    if ( *((_BYTE *)this + 119) )
      return sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
    else
      return sub_1025FAC0(this);
  }
  else
  {
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    result = sub_100EC4A0(v4, 0);
    if ( *((_BYTE *)this + 119) != 0xFF )
    {
      result = (int)this;
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((_BYTE *)this + 119) = -1;
      }
      else
      {
        v3 = this[6];
        if ( v3 )
          result = sub_100194B0(v3, 116);
        *((_BYTE *)this + 119) = -1;
      }
    }
  }
  return result;
}
