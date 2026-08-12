int __thiscall sub_100B1FF0(_DWORD *this)
{
  int v2; // eax
  int v4; // esi

  if ( (int)this[3] > 0 )
  {
    v2 = sub_1012D2F0(this[3]);
    if ( v2 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 848))(v2);
  }
  v4 = this[10];
  if ( v4 > 0 )
    return sub_1007A6A0(off_103DCD78, v4);
  else
    return 0;
}
