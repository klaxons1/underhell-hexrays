int __thiscall sub_10233530(int *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // esi

  result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 428))(dword_1047C96C, a2, a3, a4);
  v6 = *this;
  v7 = result;
  if ( *this != result )
  {
    if ( v6 && dword_1047C96C )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 52))(v6);
      *this = 0;
    }
    *this = v7;
    if ( v7 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 48))(v7);
  }
  return result;
}
