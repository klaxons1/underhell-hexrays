void __userpurge sub_102CBB90(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  char *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  const char *v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // eax

  v8 = a1[350];
  if ( v8 != -1 )
  {
    v9 = &off_1061BE18[4 * (v8 & 0xFFF) + 1];
    v10 = v8 >> 12;
    if ( v9[1] == v10 )
    {
      if ( *v9 )
        goto LABEL_14;
    }
  }
  v11 = (char *)a1[349];
  if ( v11 )
  {
    v12 = sub_1012BF20(&dword_1069E3E0, 0, v11, 0, 0, 0, 0);
    v13 = __RTDynamicCast(
            (int)v12,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseTrigger `RTTI Type Descriptor',
            0);
    if ( v13 )
      a1[350] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
    else
      a1[350] = -1;
  }
  v14 = a1[350];
  if ( v14 != -1
    && (v9 = &off_1061BE18[4 * (a1[350] & 0xFFF) + 1], v10 = v14 >> 12, off_1061BE18[4 * (a1[350] & 0xFFF) + 2] == v10)
    && *v9 )
  {
LABEL_14:
    if ( v9[1] == v10 )
      v16 = (_DWORD *)*v9;
    else
      v16 = 0;
    v17 = sub_10255FE0(v16, "physics_cannister");
    if ( v17 )
      sub_101BEC40((int)v17, a2, a6);
  }
  else
  {
    v15 = (const char *)a1[65];
    if ( !v15 )
      v15 = String;
    Msg("ERROR: Couldn't find barrel volume for func_tankphyscannister %s.\n", v15);
  }
}
