int __thiscall sub_103B5FD0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edx

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = sub_10319100(this + 1001, (unsigned int *)&a2);
  if ( result >= 0 )
  {
    v4 = this[1004];
    if ( v4 > 0 )
    {
      *(_DWORD *)(this[1001] + 4 * result) = *(_DWORD *)(this[1001] + 4 * v4 - 4);
      --this[1004];
    }
  }
  return result;
}
