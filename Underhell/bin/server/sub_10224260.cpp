int __thiscall sub_10224260(_DWORD *this, int a2, const char *a3)
{
  const char *v4; // eax
  const char *v5; // esi
  double v6; // st7
  _DWORD *v8; // edx
  int v9; // esi
  char *v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  float v16; // [esp+10h] [ebp-8h]

  if ( a2 )
  {
    v4 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 28))(a2, &a2);
    if ( !v4 )
      v4 = String;
  }
  else
  {
    v4 = 0;
  }
  v5 = a3;
  v6 = sub_1023B010(a3, v4);
  if ( v6 <= 0.0 )
  {
    Warning("CSceneEntity::GenerateSceneForSound:  Couldn't determine duration of %s\n", v5);
    return 0;
  }
  if ( !sub_10184390(536) )
  {
    a2 = 0;
    v9 = 0;
LABEL_12:
    Warning("CSceneEntity::GenerateSceneForSound:  Failed to allocated new scene!!!\n");
    return v9;
  }
  if ( this )
    v8 = this + 200;
  else
    v8 = 0;
  v9 = sub_1041E670(v8);
  a2 = v9;
  if ( !v9 )
    goto LABEL_12;
  sub_1041CA60(sub_1022F660);
  v10 = (char *)sub_1041E1D0(v9);
  v11 = sub_1041E190(v9);
  v12 = sub_1041E150(v9);
  v13 = v12;
  if ( v10 && v11 && v12 )
  {
    sub_1041EEB0(v10, "!self");
    sub_1041EED0(1);
    v14 = (char *)this[201];
    if ( !v14 )
      v14 = (char *)String;
    sub_1041F170(v14);
    sub_1041F190(v10);
    sub_1041EF90(v11);
    sub_10418370(5);
    sub_104183A0(a3);
    sub_104183C0(a3);
    sub_104184E0(0.0);
    sub_104186C0(0, 0, 0);
    v16 = v6;
    sub_1041A670(v16);
    sub_104192F0(v13);
    sub_10420F20(v13);
    sub_10418580(v11);
    sub_10418560(v10);
    return a2;
  }
  else
  {
    Warning("CSceneEntity::GenerateSceneForSound:  Alloc of actor, channel, or event failed!!!\n");
    v15 = a2;
    sub_1041E7C0(a2);
    sub_10184660(v15);
    return 0;
  }
}
