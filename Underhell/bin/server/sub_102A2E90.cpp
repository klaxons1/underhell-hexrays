char *__thiscall sub_102A2E90(char **this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  if ( this[4] == (char *)2 )
  {
    v2 = (*((int (__thiscall **)(char **))*this + 13))(this);
    v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100011);
    sub_10024230(this[1], v3);
    v4 = (*((int (__thiscall **)(char **))*this + 13))(this);
    v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100000);
    sub_10024230(this[1], v5);
    if ( !(unsigned __int8)sub_1004B510(this, 100013, 1) )
    {
      v6 = (*((int (__thiscall **)(char **))*this + 13))(this);
      v7 = sub_1007DB30((_DWORD *)(v6 + 52), 100005);
      sub_10024230(this[1], v7);
    }
    if ( (unsigned __int8)sub_1004B510(this, 100000, 1) )
    {
      v8 = (*((int (__thiscall **)(char **))*this + 13))(this);
      v9 = sub_1007DB30((_DWORD *)(v8 + 52), 100015);
      sub_10024230(this[1], v9);
    }
    if ( this[26] == (char *)2 )
    {
      v10 = (*((int (__thiscall **)(char **))*this + 13))(this);
      v11 = sub_1007DB30((_DWORD *)(v10 + 52), 100004);
      sub_10024230(this[1], v11);
    }
  }
  return sub_1029EEA0(this);
}
