int __stdcall sub_101B3910(int a1)
{
  int result; // eax

  result = sub_10236310(a1);
  if ( dword_10445528 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10445528 + 4))(dword_10445528);
    if ( result == 3 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10445528 + 16))(dword_10445528, a1);
  }
  return result;
}
