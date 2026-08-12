int __userpurge sub_10001210@<eax>(int a1@<ecx>, int a2@<edi>, int *a3, int a4)
{
  int v5; // eax
  int result; // eax
  int v7; // ebx
  __int16 v9; // ax
  __int16 v10; // ax
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edi
  int v16; // [esp+0h] [ebp-7Ch]
  void **v17; // [esp+8h] [ebp-74h] BYREF
  char v18; // [esp+Ch] [ebp-70h]
  int v19; // [esp+78h] [ebp-4h]
  int v20; // [esp+84h] [ebp+8h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 400))(dword_106B31D0);
  result = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IAchievementMgr `RTTI Type Descriptor',
             (int)&CAchievementMgr `RTTI Type Descriptor',
             0);
  v7 = result;
  v19 = result;
  if ( result && *(_BYTE *)(a1 + 4) )
  {
    sub_10001930(result);
    (*(void (__thiscall **)(int *))(*a3 + 20))(a3);
    v9 = (*(int (__thiscall **)(int *))(*a3 + 52))(a3);
    v20 = v9;
    while ( v20 )
    {
      --v20;
      v10 = (*(int (__thiscall **)(int *, int))(*a3 + 52))(a3, a2);
      v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(v7 + 20) + 4))(v7 + 20, v10);
      v12 = v11;
      if ( v11 )
      {
        v13 = *a3;
        v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 64))(v11, v16);
        a2 = v12;
        (*(void (__thiscall **)(int *))(v13 + 8))(a3);
        v7 = v19;
      }
      else
      {
        sub_100BC600(&v17);
        v14 = *a3;
        a2 = sub_100BC430(&v17);
        (*(void (__thiscall **)(int *, void ***))(v14 + 8))(a3, &v17);
        v17 = &CGameEventListener::`vftable';
        if ( v18 )
          (*(void (__thiscall **)(int, void ***))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, &v17);
      }
    }
    (*(void (__thiscall **)(int *))(*a3 + 32))(a3);
    return sub_10001980(v7);
  }
  return result;
}
