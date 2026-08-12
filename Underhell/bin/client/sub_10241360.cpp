char __thiscall sub_10241360(unsigned int *this)
{
  unsigned int *v1; // ecx
  int v2; // eax

  v1 = this + 33;
  if ( *v1 == -1 )
    return 0;
  v2 = sub_10240220(v1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
