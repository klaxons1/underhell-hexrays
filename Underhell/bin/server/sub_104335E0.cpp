int __thiscall sub_104335E0(int *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *this;
  if ( v2 )
  {
    if ( dword_10700A3C )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
      *this = 0;
    }
  }
  return result;
}
