int __thiscall sub_101E3630(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( !sub_100CF460(this) )
    return sub_100E87A0(a2, a3);
  v4 = sub_100CF460(this);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 436))(v4, a2, a3);
}
