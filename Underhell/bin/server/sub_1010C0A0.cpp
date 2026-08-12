int __thiscall sub_1010C0A0(_DWORD *this)
{
  int result; // eax
  int i; // eax
  int v4; // [esp-4h] [ebp-8h]

  result = *this;
  if ( *this )
  {
    for ( i = result + 24; *(_DWORD *)i; i = *this + 24 )
    {
      v4 = *(_DWORD *)i;
      *(_DWORD *)i = *(_DWORD *)(*(_DWORD *)i + 24);
      sub_1042FBE0(v4);
    }
    return sub_1042FBE0(*this);
  }
  return result;
}
