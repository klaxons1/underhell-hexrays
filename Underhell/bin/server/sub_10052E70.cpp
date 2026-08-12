unsigned __int8 __thiscall sub_10052E70(char **this)
{
  char v2; // bl
  int v3; // eax
  int v4; // eax
  unsigned __int8 result; // al
  int v6; // eax
  char v7; // [esp+Ah] [ebp-2h]
  char v8; // [esp+Bh] [ebp-1h]

  v8 = 0;
  v7 = 0;
  v2 = 0;
  if ( sub_10024070(this[1], 48)
    || sub_10024070(this[1], 2)
    || (v7 = sub_1004B510(this, 50, 1), v7 == 1)
    || (v2 = sub_1004B510(this, 51, 1), v2 == 1)
    || (unsigned __int8)sub_1004B510(this, 47, 1)
    || (v8 = sub_1004B510(this, 27, 1), v8 == 1)
    || (unsigned __int8)sub_1004B510(this, 12, 1)
    || (unsigned __int8)sub_1004B510(this, 5, 1)
    || (unsigned __int8)sub_1004B510(this, 15, 1)
    || (unsigned __int8)sub_1004B510(this, 9, 1)
    || (unsigned __int8)sub_1004B510(this, 6, 1) )
  {
    if ( !(unsigned __int8)sub_1004B510(this, 51, 0)
      || (*(int (__thiscall **)(char *))(*(_DWORD *)this[1] + 220))(this[1]) != 3 )
    {
      (*((void (__thiscall **)(char **))*this + 13))(this);
      v3 = sub_1007DB30(100000);
      sub_10024230(this[1], v3);
    }
    if ( !v8 && !v7 && !v2 )
    {
      (*((void (__thiscall **)(char **))*this + 13))(this);
      v4 = sub_1007DB30(100002);
      sub_10024230(this[1], v4);
    }
  }
  result = dword_10698344;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( sub_10051440(this) && !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this[1] + 2112))(this[1]) )
      sub_10024230(this[1], 21);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC);
    if ( result )
    {
      if ( (unsigned __int8)sub_1004B510(this, 100002, 0)
        || (unsigned __int8)sub_1004B510(this, 100004, 0)
        || (result = sub_1004B510(this, 100005, 0)) != 0 )
      {
        (*((void (__thiscall **)(char **))*this + 13))(this);
        v6 = sub_1007DB30(100007);
        result = (unsigned __int8)sub_10024230(this[1], v6);
      }
    }
  }
  if ( *((_DWORD *)this[1] + 581) == 3 )
  {
    result = sub_10051440(this);
    if ( result )
      return (unsigned __int8)sub_10024290(this[1], 17);
  }
  return result;
}
