int *__thiscall sub_1022EAC0(float *this)
{
  int *result; // eax
  int v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // [esp-14h] [ebp-18h]
  const char *v17; // [esp-14h] [ebp-18h]
  const char *v18; // [esp-Ch] [ebp-10h]
  const char *v19; // [esp-Ch] [ebp-10h]

  sub_100E38F0(this);
  result = (int *)dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 72) != 1 )
  {
    v3 = 0;
    v4 = this + 221;
    do
    {
      result = (int *)*(v4 - 16);
      if ( result )
      {
        v5 = sub_1012BF20(&dword_1069E3E0, 0, (char *)result, 0, 0, 0, 0);
        if ( v5 )
          *v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
        else
          *v4 = -1;
        if ( *v4 != -1
          && (v6 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1], v7 = *v4 >> 12, off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7)
          && *v6 )
        {
          if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          v9 = (_DWORD *)__RTDynamicCast(
                           v8,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                           (int)&CSceneEntity `RTTI Type Descriptor',
                           0);
          if ( v9 )
          {
            result = sub_1022BA70(v9, (int)this);
          }
          else
          {
            if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
            v11 = (_DWORD *)__RTDynamicCast(
                              v10,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                              (int)&CSceneListManager `RTTI Type Descriptor',
                              0);
            if ( v11 )
            {
              result = sub_1022BC10(v11, (int)this);
            }
            else
            {
              v12 = (const char *)*(v4 - 16);
              if ( !v12 )
                v12 = String;
              v18 = v12;
              v16 = sub_10019630(this);
              v13 = sub_100D6390(this);
              result = (int *)Warning(
                                "%s(%s) found an entity that wasn't a logic_choreographed_scene or logic_scene_list_manag"
                                "er in slot %d, named %s\n",
                                v13,
                                v16,
                                v3,
                                v18);
              *v4 = -1;
            }
          }
        }
        else
        {
          v14 = (const char *)*(v4 - 16);
          if ( !v14 )
            v14 = String;
          v19 = v14;
          v17 = sub_10019630(this);
          v15 = sub_100D6390(this);
          result = (int *)Warning("%s(%s) could not find scene %d, named %s\n", v15, v17, v3, v19);
        }
      }
      ++v3;
      ++v4;
    }
    while ( v3 < 16 );
  }
  return result;
}
