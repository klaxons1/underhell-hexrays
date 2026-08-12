int __thiscall sub_10233300(int *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *this;
  if ( v3 != a2 )
  {
    if ( v3 && dword_1047C96C )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
      *this = 0;
    }
    *this = a2;
    if ( a2 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 48))(a2);
  }
  return result;
}
