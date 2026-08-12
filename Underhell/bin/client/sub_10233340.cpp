int __thiscall sub_10233340(int *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  bool v6; // zf

  v3 = *this;
  if ( v3 != *a2 )
  {
    if ( v3 && dword_1047C96C )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
      *this = 0;
    }
    v5 = *a2;
    v6 = *a2 == 0;
    *this = *a2;
    if ( !v6 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
  }
  return result;
}
