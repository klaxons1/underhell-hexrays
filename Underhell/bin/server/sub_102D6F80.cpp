int __thiscall sub_102D6F80(int this, char a2)
{
  *(_DWORD *)this = &CHL2EventLog::`vftable';
  *(_DWORD *)(this + 8) = &CHL2EventLog::`vftable';
  sub_1013C370((char *)this);
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
