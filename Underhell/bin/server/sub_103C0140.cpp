void __thiscall sub_103C0140(int *this)
{
  unsigned __int8 (*v2)(void); // edx
  float v3; // [esp+0h] [ebp-Ch]

  if ( !*((_BYTE *)this + 3737) )
  {
    v2 = *(unsigned __int8 (**)(void))(*this + 2272);
    *((_BYTE *)this + 3735) = 1;
    if ( !v2() )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
      {
        if ( (this[62] & 0x20) != 0 )
          *((_BYTE *)this + 3732) = 1;
        sub_100EC3F0(this, (int)sub_103BFB90, 0.0, 0);
        v3 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
        sub_100EC4A0(this, v3, 0);
      }
    }
  }
}
