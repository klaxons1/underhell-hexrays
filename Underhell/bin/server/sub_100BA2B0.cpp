int __cdecl sub_100BA2B0(int a1, int a2, int a3, int *a4)
{
  int result; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  const char *v11; // eax
  const char *v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp+4h] [ebp-4h]
  int v14; // [esp+10h] [ebp+8h]

  if ( !a1 || !(unsigned __int8)sub_10245FE0(a1) )
    return a3;
  if ( a2 < 0 || a2 >= sub_10245270(a1) )
    return a3;
  if ( a3 < 0 || a3 >= sub_10245270(a1) )
    return a3;
  if ( sub_10245740(a2) && sub_10245740(a3) )
  {
    if ( *a4 <= 0 )
      v6 = sub_10245740(a2);
    else
      v6 = sub_10245790(a2);
    v7 = v6;
    if ( v6 == sub_10245740(a3) )
    {
      *a4 = 1;
      return a3;
    }
    v8 = sub_10245740(a3);
    v14 = sub_102451E0(v7, v8);
    if ( !v14 )
      return a3;
    v9 = 0;
    if ( sub_10245270(a1) <= 0 )
    {
LABEL_24:
      v10 = sub_10245740(a3);
      v12 = (const char *)sub_102458A0(v10);
      v11 = (const char *)sub_102458A0(v7);
      DevMsg(2, "error in transition graph: %s to %s\n", v11, v12);
      return a3;
    }
    else
    {
      while ( 1 )
      {
        v13 = sub_10245550(v9);
        if ( sub_10245740(v9) == v7 && sub_10245790(v9) == v14 )
        {
          *a4 = 1;
          return v9;
        }
        if ( *(_DWORD *)(v13 + 120) && sub_10245790(v9) == v7 && sub_10245740(v9) == v14 )
          break;
        if ( ++v9 >= sub_10245270(a1) )
          goto LABEL_24;
      }
      result = v9;
      *a4 = -1;
    }
  }
  else
  {
    result = a3;
    *a4 = 1;
  }
  return result;
}
