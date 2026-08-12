double __userpurge sub_100A2C40@<st0>(int a1@<ecx>, const char *a2@<edi>, _WORD *a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebx
  const char *v8; // eax
  int v10; // esi
  double v11; // st7
  __int16 v12; // [esp-4h] [ebp-24h]
  int v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h]
  char v16; // [esp+1Fh] [ebp-1h]

  v15 = 0.0;
  v6 = 60 * (__int16)a4;
  v7 = v6 + *(_DWORD *)(a1 + 64);
  v16 = 0;
  if ( (dword_106941D4 & 0x1000) != 0 )
  {
    v8 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v8 = *(const char **)(dword_106941DC + 36);
    if ( !v8 || !*v8 )
      goto LABEL_7;
  }
  if ( !_stricmp(v8, *(const char **)(v7 + 8)) )
    v16 = 1;
LABEL_7:
  if ( (*(_BYTE *)(v7 + 56) & 4) == 0 )
  {
    if ( v16 )
      DevMsg("Rule '%s' is disabled.\n", a2);
    return 0.0;
  }
  if ( v16 )
  {
    LOBYTE(a5) = 1;
LABEL_14:
    DevMsg("Scoring rule '%s' (%i)\n{\n", *(const char **)(*(_DWORD *)(a1 + 64) + v6 + 8), a4 + 1);
    goto LABEL_15;
  }
  if ( (_BYTE)a5 )
    goto LABEL_14;
LABEL_15:
  v10 = 0;
  v14 = *(_DWORD *)(v7 + 24);
  if ( v14 > 0 )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)(*(_DWORD *)(v7 + 12) + 2 * v10);
      HIBYTE(a4) = 0;
      v11 = sub_100A2AC0(a1, a1, a3, v12, (bool *)&a4 + 3, a5) + v15;
      v15 = v11;
      if ( (_BYTE)a5 )
        DevMsg(", score %4.2f\n", v11);
      if ( HIBYTE(a4) )
        break;
      if ( ++v10 >= v14 )
        goto LABEL_22;
    }
    v15 = 0.0;
  }
LABEL_22:
  if ( (_BYTE)a5 )
    DevMsg("}\n");
  return v15;
}
