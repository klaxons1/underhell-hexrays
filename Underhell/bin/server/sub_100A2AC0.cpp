double __userpurge sub_100A2AC0@<st0>(int a1@<ecx>, int a2@<edi>, _WORD *a3, __int16 a4, bool *a5, int a6)
{
  int v6; // eax
  const char **v7; // esi
  char *v9; // edi
  int v10; // eax
  int v11; // ebx
  char v12; // al
  void (*v13)(const char *, ...); // edi
  double v14; // st6
  const char *v15; // [esp+Ch] [ebp-1Ch]
  double v16; // [esp+10h] [ebp-18h]
  float v18; // [esp+24h] [ebp-4h]
  float v19; // [esp+30h] [ebp+8h]
  bool v20; // [esp+37h] [ebp+Fh]

  v6 = *(_DWORD *)(a1 + 36) + 56 * a4;
  v7 = (const char **)(v6 + 12);
  if ( *(int *)(v6 + 48) > 0 )
    return sub_1009ADA0((int)a3, (int)v7, a5, a6);
  if ( (_BYTE)a6 )
    DevMsg("  criterion '%25s':'%15s' ", *(const char **)(v6 + 8), *v7);
  v18 = 0.0;
  HIDWORD(v16) = a2;
  *a5 = 0;
  v9 = (char *)String;
  v10 = sub_10067720(a3, (void *)*v7);
  v11 = v10;
  if ( v10 != -1 )
  {
    v9 = (char *)sub_10066500((int)a3, v10);
    if ( !v9 )
      return 0.0;
  }
  v20 = sub_100A2940(a1, v9, (int)v7 + 11, a6);
  v12 = a6;
  if ( (_BYTE)a6 )
  {
    v15 = v9;
    v13 = DevMsg;
    DevMsg("'%20s' vs. '%20s' = ", v15, v7[1]);
    v12 = a6;
  }
  else
  {
    v13 = DevMsg;
  }
  if ( v20 )
  {
    v19 = sub_10066530((int)a3, v11);
    v14 = sub_10065370(*((unsigned __int16 *)v7 + 4)) * v19;
    v18 = v14;
    if ( (_BYTE)a6 )
    {
      LODWORD(v16) = *((unsigned __int16 *)v7 + 4);
      v13("matched, weight %4.2f (s %4.2f x c %4.2f)", v14, v19, v16);
      return v18;
    }
  }
  else if ( *((_BYTE *)v7 + 10) )
  {
    *a5 = 1;
    if ( v12 )
    {
      v13("failed (+exclude rule)");
      return v18;
    }
  }
  else if ( v12 )
  {
    v13("failed");
    return v18;
  }
  return v18;
}
