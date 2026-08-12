int __thiscall sub_10237CE0(_DWORD *this, int a2)
{
  if ( a2 )
  {
    *this = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60))(dword_1047CA74, a2);
    return a2;
  }
  else
  {
    *this = -1;
    return 0;
  }
}
