char *__thiscall sub_1029DC40(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  bool v8; // zf
  int (__thiscall *v9)(int); // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( !__RTDynamicCast(
          v4,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CAI_OperatorGoal `RTTI Type Descriptor',
          0) )
  {
LABEL_17:
    sub_1004B420((int (__thiscall ****)(_DWORD))this);
    return sub_10023E00(*(char **)(this + 4), 67);
  }
  v5 = *(_DWORD *)(this + 20);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  if ( *(_DWORD *)(__RTDynamicCast(
                     v6,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CAI_OperatorGoal `RTTI Type Descriptor',
                     0)
                 + 948) != 2 )
  {
    v8 = sub_1029D950(this) == 0;
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)this + 52);
    if ( !v8 )
    {
      v10 = v9(this);
      v11 = sub_1007DB30((_DWORD *)(v10 + 52), 100000);
      sub_10023E00(*(char **)(this + 4), v11);
      sub_1004B420((int (__thiscall ****)(_DWORD))this);
      return sub_10023E00(*(char **)(this + 4), 67);
    }
    v12 = v9(this);
    v13 = sub_1007DB30((_DWORD *)(v12 + 52), 100000);
    sub_10023CB0(*(char **)(this + 4), v13);
    goto LABEL_17;
  }
  if ( (unsigned __int8)sub_1004B510((void *)this, 100002, 1) )
    sub_10023CB0(*(char **)(this + 4), 25);
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 24) = -1;
  sub_1004B420((int (__thiscall ****)(_DWORD))this);
  return sub_10023E00(*(char **)(this + 4), 67);
}
