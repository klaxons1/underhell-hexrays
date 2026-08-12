int __thiscall sub_100A9890(int this)
{
  char *v2; // eax
  int v3; // eax
  char *v4; // eax
  int v5; // eax
  int v6; // edi
  const char *v7; // eax
  int result; // eax
  char *v9; // eax
  float v10; // [esp+0h] [ebp-10h]

  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(0, v2, 0, 0, 0, 0);
  if ( v3 )
    *(_DWORD *)(this + 880) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    *(_DWORD *)(this + 880) = -1;
  v4 = *(char **)(this + 904);
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012BF20(0, v4, 0, 0, 0, 0);
  v6 = v5;
  if ( *(_DWORD *)(this + 1008) )
  {
LABEL_16:
    while ( v6 )
    {
      if ( !sub_100A8EB0((_DWORD *)this, v6) )
        sub_100A97D0(this, v6);
      v9 = *(char **)(this + 904);
      if ( !v9 )
        v9 = (char *)String;
      v6 = sub_1012BF20(v6, v9, 0, 0, 0, 0);
    }
    goto LABEL_22;
  }
  if ( *(_DWORD *)(this + 904) )
  {
    if ( !v5 )
    {
      v7 = (const char *)sub_100D6390(this);
      DevMsg("Warning: Spawning AI script conditions (%s) associated with an non-existant NPC\n", v7);
      sub_1010DD80(this, this, 0.0);
LABEL_12:
      result = sub_100EC3F0(0, 0.0, 0);
      *(_BYTE *)(this + 876) = 1;
      return result;
    }
    goto LABEL_14;
  }
  if ( v5 )
  {
LABEL_14:
    if ( !sub_100D7680(v5) )
    {
      Warning("Script condition warning: warning actor is not an NPC\n");
      goto LABEL_12;
    }
    goto LABEL_16;
  }
LABEL_22:
  if ( !*(_DWORD *)(this + 904) && !sub_100A8EB0((_DWORD *)this, v6) )
    sub_100A97D0(this, 0);
  *(_BYTE *)(this + 876) = 0;
  sub_100EC3F0((int)sub_100A9300, 0.0, 0);
  v10 = *(float *)(dword_106B31C8 + 12) + 0.25;
  return sub_100EC4A0(v10, 0);
}
