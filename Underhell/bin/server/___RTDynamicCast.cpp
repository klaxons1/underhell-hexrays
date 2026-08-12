int __cdecl __RTDynamicCast(_DWORD *a1, int a2, struct _s_RTTICompleteObjectLocator *a3, int a4, int a5)
{
  int result; // eax
  char *CompleteObject; // edx
  int v7; // eax
  struct TypeDescriptor *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  unsigned int i; // esi
  const struct _s_RTTIBaseClassDescriptor *v13; // ebx
  int *v14; // eax
  int v15; // eax
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance; // eax
  char pExceptionObject[12]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v18; // [esp+1Ch] [ebp-28h]
  unsigned int v19; // [esp+20h] [ebp-24h]
  int v20; // [esp+24h] [ebp-20h]
  void *v21; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]
  unsigned int v23; // [esp+4Ch] [ebp+8h]

  if ( !a1 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  CompleteObject = FindCompleteObject(a1);
  v21 = CompleteObject;
  v7 = *(_DWORD *)(*a1 - 4);
  v8 = (struct TypeDescriptor *)((char *)a1 - a2 - CompleteObject);
  v9 = *(_DWORD *)(*(_DWORD *)(v7 + 16) + 4);
  if ( (v9 & 1) == 0 )
  {
    v10 = *(_DWORD *)(v7 + 16);
    v11 = *(_DWORD *)(v10 + 12);
    v23 = *(_DWORD *)(v10 + 8);
    for ( i = 0; ; ++i )
    {
      v19 = i;
      if ( i >= v23 )
      {
        VITargetTypeInstance = 0;
        goto LABEL_18;
      }
      v13 = *(const struct _s_RTTIBaseClassDescriptor **)(v11 + 4 * i);
      if ( *(_DWORD *)v13 == a4 || !strcmp((const char *)(*(_DWORD *)v13 + 8), (const char *)(a4 + 8)) )
        break;
    }
    while ( 1 )
    {
      v18 = ++i;
      if ( i >= v23 )
        goto LABEL_21;
      v14 = *(int **)(v11 + 4 * i);
      if ( (v14[5] & 4) != 0 )
        goto LABEL_21;
      v15 = *v14;
      if ( (struct _s_RTTICompleteObjectLocator *)v15 == a3 || !strcmp((const char *)(v15 + 8), (const char *)a3 + 8) )
      {
        VITargetTypeInstance = v13;
        goto LABEL_18;
      }
    }
  }
  if ( (v9 & 2) != 0 )
    VITargetTypeInstance = FindVITargetTypeInstance(v7, CompleteObject, a3, v8, a4);
  else
    VITargetTypeInstance = FindMITargetTypeInstance(v7, CompleteObject, a3, v8, a4);
LABEL_18:
  if ( !VITargetTypeInstance )
  {
LABEL_21:
    result = 0;
    v20 = 0;
    if ( a5 )
    {
      sub_104354C8("Bad dynamic_cast!");
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
    goto LABEL_20;
  }
  result = (int)v21 + PMDtoOffset((_DWORD *)VITargetTypeInstance + 2, (char *)v21);
  v20 = result;
LABEL_20:
  ms_exc.registration.TryLevel = -2;
  return result;
}
