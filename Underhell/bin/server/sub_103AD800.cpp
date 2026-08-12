int __thiscall sub_103AD800(float *this)
{
  _DWORD *v2; // eax
  int result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  sub_103ACDA0((int)this);
  if ( this[916] <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1212))(this);
    this[916] = sub_100E9200(this, 0);
  }
  if ( *((_DWORD *)this + 930) )
  {
    v4 = *(float *)(dword_106B31C8 + 12) + flt_106EAC20;
    sub_100EC4A0((int *)this, v4, 0);
    v2 = (_DWORD *)sub_10043EC0(this);
    if ( !v2 )
      return sub_103AC090((int)this);
    if ( *v2 != 74 )
      return sub_103AC090((int)this);
    result = sub_10020E90(this);
    if ( !result )
      return sub_103AC090((int)this);
  }
  else
  {
    DevMsg(2, "In StalkerThink() but no stalker beam found?\n");
    return sub_100EC4A0((int *)this, this[916], 0);
  }
  return result;
}
