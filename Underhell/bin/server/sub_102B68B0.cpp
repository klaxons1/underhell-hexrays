int __thiscall sub_102B68B0(_DWORD *this, int *a2)
{
  int v3; // eax

  v3 = sub_102B6820((int)this);
  if ( v3 )
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 80))(v3, a2);
  else
    return sub_100DA910(this, a2);
}
