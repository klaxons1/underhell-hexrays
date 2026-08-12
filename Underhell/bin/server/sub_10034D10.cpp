int __thiscall sub_10034D10(_DWORD *this, int a2)
{
  const char **v2; // edi
  char *v4; // eax
  char *v5; // eax
  const char *v6; // ebx
  int v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  _DWORD *v11; // eax
  char *v12; // eax
  bool v13; // cc
  int v14; // edi
  unsigned int v15; // eax
  const char *v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  char *v20; // eax
  char *v21; // eax
  const char *v22; // edi
  const char *v23; // eax
  const char *v24; // ebx
  const char *v25; // eax
  const char *v26; // edi
  const char *v27; // eax
  const char *v28; // edi
  const char *v29; // eax
  const char *v30; // [esp-8h] [ebp-11Ch]
  const char *v31; // [esp-4h] [ebp-118h]
  const char *v32; // [esp-4h] [ebp-118h]
  char String[256]; // [esp+Ch] [ebp-108h] BYREF
  int v34; // [esp+10Ch] [ebp-8h]
  char *v35; // [esp+110h] [ebp-4h]
  _DWORD *v36; // [esp+11Ch] [ebp+8h]

  v2 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = (char *)*v2;
    if ( !*v2 )
      v4 = (char *)::String;
  }
  else
  {
    v4 = (char *)sub_1010D460(v2);
  }
  sub_104299C0(String, v4, 0xFFu);
  v5 = strtok(String, " ");
  v6 = v5;
  if ( !v5 || !*v5 )
  {
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v28 = *v2;
      if ( v28 )
        v25 = v28;
      else
        v25 = ::String;
    }
    else
    {
      v25 = (const char *)sub_1010D460(v2);
    }
    v24 = (const char *)this[23];
    if ( !v24 )
      v24 = ::String;
    goto LABEL_49;
  }
  v7 = (*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 2000))(this, v5, 0);
  if ( !v7 )
  {
    v8 = (const char *)this[23];
    if ( !v8 )
      v8 = ::String;
    v9 = (const char *)sub_100D6390(this);
    return Warning("%s(%s) received ForceInteractionWithNPC input, but couldn't find entity named: %s\n", v8, v9, v6);
  }
  v11 = (_DWORD *)sub_100D7680(v7);
  v36 = v11;
  if ( !v11 || !sub_10001430(v11) )
  {
    v26 = (const char *)this[23];
    if ( !v26 )
      v26 = ::String;
    v27 = (const char *)sub_100D6390(this);
    return Warning(
             "%s(%s) received ForceInteractionWithNPC input, but entity named %s cannot run dynamic interactions.\n",
             v26,
             v27,
             v6);
  }
  v12 = strtok(0, " ");
  v35 = v12;
  if ( !v12 || !*v12 )
  {
    v24 = (const char *)this[23];
    if ( !v24 )
      v24 = ::String;
    v25 = sub_1001F3A0(v2);
LABEL_49:
    v32 = v25;
    v29 = (const char *)sub_100D6390(this);
    return Warning(
             "%s(%s) received ForceInteractionWithNPC input with bad parameters: %s\n"
             "Format should be: ForceInteractionWithNPC <target NPC> <interaction name>\n",
             v24,
             v29,
             v32);
  }
  v13 = this[634] <= 0;
  v34 = 0;
  if ( v13 )
  {
LABEL_29:
    v18 = (int)v36;
    goto LABEL_30;
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = strlen(v12);
    v16 = *(const char **)(this[631] + v14);
    if ( !v16 )
      v16 = ::String;
    if ( sub_104291C0(v35, v16, v15) )
      goto LABEL_28;
    v17 = v14 + this[631];
    if ( *(_DWORD *)(v17 + 80) == -1 )
      break;
    v18 = (int)v36;
    if ( sub_10022CA0(v36, *(_DWORD *)(v17 + 80)) )
      goto LABEL_34;
    v19 = sub_100BDCE0(*(_DWORD *)(this[631] + v14 + 80));
    v20 = (char *)sub_100BE1F0(v19);
    if ( sub_100BDF40(v20) != -1 )
      goto LABEL_34;
LABEL_28:
    v14 += 164;
    if ( ++v34 >= this[634] )
      goto LABEL_29;
    v12 = v35;
  }
  v21 = *(char **)(v17 + 76);
  if ( !v21 )
    v21 = (char *)::String;
  if ( sub_100BDF40(v21) == -1 )
    goto LABEL_28;
  v18 = (int)v36;
LABEL_34:
  if ( v34 != -1 )
  {
    sub_10031280((int)this, v18, v34);
    return sub_10031280(v18, (int)this, -1);
  }
LABEL_30:
  v22 = (const char *)this[23];
  if ( !v22 )
    v22 = ::String;
  v31 = (const char *)sub_100D6390(v18);
  v30 = v35;
  v23 = (const char *)sub_100D6390(this);
  return Warning(
           "%s(%s) received ForceInteractionWithNPC input, but couldn't find an interaction named %s that entity named %s could run.\n",
           v22,
           v23,
           v30,
           v31);
}
