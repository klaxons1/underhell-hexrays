int __thiscall sub_1039B890(int *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *i; // edx
  int v5; // ebx
  unsigned __int16 v6; // ax
  int v7; // edi

  result = 0;
  for ( i = this + 8; a2[23] != *i; ++i )
  {
    if ( ++result >= 4 )
      return result;
  }
  v5 = *(_DWORD *)(*(int (**)(void))(*a2 + 8))();
  v6 = sub_10147EA0(this + 1, 0);
  v7 = v6;
  sub_100D09C0((unsigned __int16 *)this + 2, 0xFFFFu, v6);
  result = this[1] + 8 * v7;
  if ( result )
    *(_DWORD *)result = v5;
  return result;
}
