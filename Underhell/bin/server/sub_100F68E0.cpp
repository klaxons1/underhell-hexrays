void __thiscall sub_100F68E0(int *this)
{
  if ( *((_BYTE *)this + 447) == 3 )
  {
    if ( !*((_BYTE *)this + 4260) )
      (*(void (__thiscall **)(int *, int))(*this + 1448))(this, 1);
  }
  else
  {
    if ( *((_BYTE *)this + 4260) )
      (*(void (__thiscall **)(int *, _DWORD))(*this + 1448))(this, 0);
    if ( *((_BYTE *)this + 447) )
    {
      if ( (this[64] & 0x200) == 0 )
      {
        if ( sub_100E87E0(this) == 32 )
          sub_1023C380((int)"Player.Wade", 0.0, 0);
        sub_100EA940(this, 512);
      }
    }
    else if ( (this[64] & 0x200) != 0 )
    {
      if ( this[55] > 0 && (*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
        sub_1023C380((int)"Player.Wade", 0.0, 0);
      sub_100EA9A0(this, 512);
    }
  }
}
