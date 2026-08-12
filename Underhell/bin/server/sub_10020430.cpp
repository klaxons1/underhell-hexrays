int __thiscall sub_10020430(_DWORD *this)
{
  int v2; // esi
  int v3; // eax

  v2 = this[637];
  if ( !sub_100CF460(this) )
    return v2;
  v3 = sub_100CF460(this);
  return v2 | (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1364))(v3);
}
