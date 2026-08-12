char *__thiscall sub_102A6D40(char **this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( !this[4] )
  {
    v2 = (*((int (__thiscall **)(char **))*this + 13))(this);
    v3 = sub_1007DB30((_DWORD *)(v2 + 52), 21);
    sub_10024230(this[1], v3);
    v4 = (*((int (__thiscall **)(char **))*this + 13))(this);
    v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100001);
    sub_10024230(this[1], v5);
  }
  return sub_1029EEA0(this);
}
