int __thiscall sub_1032CD00(int *this, int a2, float a3)
{
  int v4; // edx

  if ( *((_BYTE *)this + 3777) )
    return 0;
  if ( this[55] > 0 )
    return 0;
  v4 = *(_DWORD *)(a2 + 64);
  if ( (v4 & 0x400000) != 0 )
    return 0;
  if ( (v4 & 0x40000000) != 0 )
    return 4;
  if ( (v4 & 2) != 0 )
  {
    if ( !*((_BYTE *)this + 3784) )
      return 1;
    if ( a3 > 0.25 )
      return 4;
  }
  if ( (v4 & 0x40) != 0 )
    return 4;
  if ( *((_BYTE *)this + 3776) && (*(unsigned __int8 (__thiscall **)(int *, int))(*this + 2248))(this, a2) )
    return 5;
  else
    return 0;
}
