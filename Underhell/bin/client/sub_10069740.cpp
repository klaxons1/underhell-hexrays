int __thiscall sub_10069740(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ebx
  int j; // esi
  char *v6; // eax
  char *v7; // eax
  int i; // [esp+4h] [ebp-4h]

  v2 = CommandLine_Tier0(this);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-makereslists");
  if ( result )
  {
    result = this[10];
    v4 = 0;
    for ( i = result; v4 < i; ++v4 )
    {
      result = sub_10229C90(*(_DWORD *)(this[7] + 4 * v4));
      for ( j = result; result; j = result )
      {
        v6 = (char *)sub_10229A00(j);
        if ( sub_10227C40(v6, "playlooping") )
        {
          v7 = (char *)sub_10229A00(j);
          if ( !sub_10227C40(v7, "playrandom") )
            sub_10069150(j);
        }
        else
        {
          sub_100690D0(j);
        }
        result = sub_1021F0F0(j);
      }
    }
  }
  return result;
}
