void __thiscall sub_1007E340(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax

  v1 = this[10];
  if ( v1 )
  {
    if ( *(_DWORD *)v1 )
    {
      v2 = *(_DWORD *)(*(_DWORD *)v1 + 36);
      if ( v2 != 1 && v2 != 3 )
        sub_100B9C50();
    }
  }
}
