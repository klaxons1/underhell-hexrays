_DWORD *__thiscall sub_10410A40(_DWORD *this, char a2)
{
  int v3; // eax
  int v5; // [esp-Ch] [ebp-10h]

  *this = &CGrenadePathfollower::`vftable';
  this[526] = &CGrenadePathfollower::`vftable';
  v5 = this[6];
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_1023AF30(v3, v5, (_BYTE *)4);
  sub_100F3A80(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
