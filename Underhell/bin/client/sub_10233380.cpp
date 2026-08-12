int __thiscall sub_10233380(int *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *this;
  if ( v2 )
  {
    if ( dword_1047C96C )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2);
      *this = 0;
    }
  }
  return result;
}
