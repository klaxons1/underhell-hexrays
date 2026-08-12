int __thiscall sub_100F5D40(_DWORD *this, int *a2, int a3, int a4)
{
  int v5; // eax

  if ( !sub_100CF460(this) )
    return sub_100E8C70(this, a2, a3, a4);
  v5 = sub_100CF460(this);
  return (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v5 + 424))(v5, a2, a3, a4);
}
