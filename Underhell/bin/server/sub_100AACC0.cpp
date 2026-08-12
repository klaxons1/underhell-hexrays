double __thiscall sub_100AACC0(float *this, int a2)
{
  if ( !a2 )
    return 0.0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return this[24];
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
    return this[25];
  return this[26];
}
