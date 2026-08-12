int __thiscall sub_100EA9A0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]

  if ( this[1] )
    v2 = this[1];
  else
    v2 = this[2];
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 96))(v2);
  else
    return 0;
}
