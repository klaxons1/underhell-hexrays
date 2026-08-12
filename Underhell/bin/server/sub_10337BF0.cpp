char *__thiscall sub_10337BF0(_DWORD *this)
{
  char **v2; // eax
  unsigned int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = (char **)sub_10162BE0(&v6, "player_squad");
  sub_1004AF40(this, *v2);
  v3 = this[1185];
  if ( v3 == -1 || off_1061BE18[4 * (this[1185] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[1185] & 0xFFF) + 1];
  if ( v4 )
    this[1492] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    this[1492] = -1;
  sub_10051C00((int)(this + 1127), 0);
  sub_103360E0((int)this);
  return sub_10023CB0((char *)this, 65);
}
