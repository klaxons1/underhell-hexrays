int __thiscall sub_10093FD0(int *this)
{
  int i; // edi
  int v3; // ecx
  int v4; // ecx

  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    if ( v3 != this[906] )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3);
  }
  v4 = this[906];
  if ( v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4);
  else
    return sub_100397D0(this);
}
