int __thiscall sub_10198A60(float *this)
{
  sub_1002A140((int)(this - 3), this + 907, this + 910);
  if ( this == (float *)12 )
    return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)off_103DD080 + 88))(off_103DD080, 0, 1);
  else
    return (*(int (__thiscall **)(void *, float *, int))(*(_DWORD *)off_103DD080 + 88))(off_103DD080, this - 2, 1);
}
