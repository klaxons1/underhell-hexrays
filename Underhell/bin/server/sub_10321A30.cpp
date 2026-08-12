_DWORD *__thiscall sub_10321A30(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[2472];
  *this = &CNPC_Barnacle::`vftable';
  this[526] = &CNPC_Barnacle::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v3);
    this[2472] = 0;
  }
  sub_1010BB10(this + 911);
  sub_1010BB10(this + 905);
  sub_10037B80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
