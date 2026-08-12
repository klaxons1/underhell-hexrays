int __userpurge sub_10001020@<eax>(int a1@<edi>, int a2@<esi>, int *a3)
{
  int v3; // eax
  int result; // eax
  int v6; // ebx
  int v7; // edi
  unsigned __int8 v8; // al
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  unsigned __int16 v14; // ax
  void (__thiscall *v15)(int *, int *, int); // edx
  int v16; // ebx
  int v17; // eax
  int v20; // [esp+0h] [ebp-10h]
  int v21; // [esp+4h] [ebp-Ch] BYREF
  int v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h] BYREF
  int i; // [esp+18h] [ebp+8h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 400))(dword_106B31D0);
  result = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IAchievementMgr `RTTI Type Descriptor',
             (int)&CAchievementMgr `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v6 = result + 20;
    v7 = *(_DWORD *)(result + 20);
    v20 = result + 20;
    v8 = (*(int (__thiscall **)(int *, int, int))(*a3 + 8))(a3, a1, a2);
    (*(void (__thiscall **)(int, _DWORD))(v7 + 32))(v6, v8);
    (*(void (__thiscall **)(int *, const char *))(*a3 + 32))(a3, "Achievements");
    v9 = 0;
    v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    v23 = 0;
    if ( v22 > 0 )
    {
      do
      {
        v10 = (**(int (__thiscall ***)(int, int))v6)(v6, v9);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 28))(v10) )
          ++v23;
        ++v9;
      }
      while ( v9 < v22 );
    }
    (*(void (__thiscall **)(int *, int *, int))(*a3 + 44))(a3, &v23, 1);
    for ( i = 0; i < v22; ++i )
    {
      v11 = (**(int (__thiscall ***)(int, int))v6)(v6, i);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 28))(v11) )
      {
        v12 = __RTDynamicCast(
                v11,
                0,
                (struct _s_RTTICompleteObjectLocator *)&IAchievement `RTTI Type Descriptor',
                (int)&CBaseAchievement `RTTI Type Descriptor',
                0);
        v13 = v12;
        if ( v12 )
        {
          v14 = (**(int (__thiscall ***)(int))(v12 + 8))(v12 + 8);
          v15 = *(void (__thiscall **)(int *, int *, int))(*a3 + 44);
          v21 = v14;
          v15(a3, &v21, 1);
          v16 = *a3;
          v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 64))(v13);
          (*(void (__thiscall **)(int *, int, int))(v16 + 20))(a3, v13, v17);
          v6 = v20;
        }
      }
    }
    return (*(int (__thiscall **)(int *))(*a3 + 36))(a3);
  }
  return result;
}
