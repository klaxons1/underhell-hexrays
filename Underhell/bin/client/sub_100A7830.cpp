int __stdcall sub_100A7830(char a1)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  if ( a1 )
    return v1 + 48;
  else
    return v1 + 24;
}
