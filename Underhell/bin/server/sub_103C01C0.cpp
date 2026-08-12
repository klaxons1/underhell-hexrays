int __thiscall sub_103C01C0(int *this)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-Ch]

  result = (*(int (__thiscall **)(int *))(*this + 2272))(this);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*this + 264))(this);
    if ( (_BYTE)result )
    {
      if ( !*((_BYTE *)this + 3737) )
      {
        if ( *((_BYTE *)this + 3735) )
        {
          *((_BYTE *)this + 3735) = 0;
          *((_BYTE *)this + 3732) = 0;
          sub_100285C0(this, 0, 1);
          sub_100EC3F0(this, (int)sub_103BFBF0, 0.0, 0);
          v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
          return sub_100EC4A0(this, v3, 0);
        }
        else
        {
          return sub_100EC3F0(this, (int)sub_103BFC00, 0.0, 0);
        }
      }
    }
  }
  return result;
}
