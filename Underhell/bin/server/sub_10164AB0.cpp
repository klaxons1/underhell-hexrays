int __thiscall sub_10164AB0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebx

  result = this[906];
  v4 = result;
  this[906] = a2;
  if ( result != a2 )
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
      byte_10691DE4 = 1;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this[906] + 40))(this[906]);
      byte_10691DE4 = 0;
    }
    if ( v4 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
      sub_1004AF00(this);
    }
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 2224))(this, v4, a2);
  }
  return result;
}
