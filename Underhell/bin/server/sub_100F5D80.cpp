int __thiscall sub_100F5D80(_DWORD *this)
{
  int v2; // eax

  if ( !sub_100CF460(this) )
    return sub_101DC6A0(this);
  v2 = sub_100CF460(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2);
}
