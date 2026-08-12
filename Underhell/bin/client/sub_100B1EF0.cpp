int __thiscall sub_100B1EF0(_DWORD *this)
{
  int v2; // eax

  if ( (int)this[3] > 0 && (v2 = sub_1012D2F0(this[3])) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 844))(v2);
  else
    return this[2];
}
