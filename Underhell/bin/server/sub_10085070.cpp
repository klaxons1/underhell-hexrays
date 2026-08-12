int __thiscall sub_10085070(int *this, int a2, float a3)
{
  _DWORD *v4; // eax
  int v5; // eax

  v4 = (_DWORD *)this[2];
  if ( v4 )
  {
    if ( *v4 )
      goto LABEL_5;
    sub_10184660(this[2]);
  }
  this[2] = sub_10184390(6000);
LABEL_5:
  if ( this[1] >= 1500 )
  {
    DevMsg("ERROR: too many nodes in map, deleting last node.\n", 1500);
    --this[1];
  }
  if ( sub_10184390(104) )
    v5 = sub_1008D5B0(this[1], a2, a3);
  else
    v5 = 0;
  *(_DWORD *)(this[2] + 4 * this[1]++) = v5;
  return *(_DWORD *)(this[2] + 4 * this[1] - 4);
}
