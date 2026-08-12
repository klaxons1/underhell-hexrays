char __thiscall sub_10103070(_DWORD *this)
{
  int v1; // ecx

  v1 = *(this - 445);
  if ( v1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  else
    return 1;
}
