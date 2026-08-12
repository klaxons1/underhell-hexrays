char __cdecl sub_100BA450(int a1, int a2, float a3, float a4, int a5, _DWORD *a6, float *a7, _DWORD *a8)
{
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  const char *v14; // eax
  const char *v15; // [esp-Ch] [ebp-14h]
  int v16; // [esp+4h] [ebp-4h]
  int v17; // [esp+10h] [ebp+8h]
  int v18; // [esp+10h] [ebp+8h]

  if ( !a1 || !(unsigned __int8)sub_10245FE0(a1) )
    return 0;
  if ( a2 < 0 || a2 >= sub_10245270(a1) )
    return 0;
  if ( a5 < 0 || a5 >= sub_10245270(a1) )
    return 0;
  if ( !sub_10245740(a2) || !sub_10245740(a5) )
  {
    *a8 = 1;
    *a7 = 0.0;
    *a6 = a5;
    return 1;
  }
  v10 = sub_10245790(a2);
  v17 = sub_10245740(a2);
  if ( v17 != sub_10245790(a2) )
  {
    if ( a4 <= 0.0 || a3 < 0.999 )
    {
      if ( a4 >= 0.0 || a3 > 0.001 )
        return 0;
      v10 = sub_10245740(a2);
    }
    else
    {
      v10 = sub_10245790(a2);
    }
  }
  if ( v10 == sub_10245740(a5) || (v11 = sub_10245740(a5), (v18 = sub_102451E0(v10, v11)) == 0) )
  {
    *a8 = 1;
    *a7 = 0.0;
    *a6 = a5;
    return 1;
  }
  v12 = 0;
  if ( sub_10245270(a1) <= 0 )
  {
LABEL_28:
    v13 = sub_10245740(a5);
    v15 = (const char *)sub_102458A0(v13);
    v14 = (const char *)sub_102458A0(v10);
    DevMsg(2, "error in transition graph: %s to %s\n", v14, v15);
    return 0;
  }
  while ( 1 )
  {
    v16 = sub_10245550(v12);
    if ( sub_10245740(v12) == v10 && sub_10245790(v12) == v18 )
    {
      *a8 = 1;
      *a7 = 0.0;
      *a6 = v12;
      return 1;
    }
    if ( *(_DWORD *)(v16 + 120) && sub_10245790(v12) == v10 && sub_10245740(v12) == v18 )
      break;
    if ( ++v12 >= sub_10245270(a1) )
      goto LABEL_28;
  }
  *a8 = -1;
  *a7 = 0.99900001;
  *a6 = v12;
  return 1;
}
