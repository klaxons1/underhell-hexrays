int __cdecl sub_10219820(int a1, float a2, float a3, float a4, int a5)
{
  int result; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int *v9; // ecx
  int v10; // edx
  void (__thiscall *v11)(int); // eax

  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollProp `RTTI Type Descriptor',
             0);
  if ( result )
  {
    result = sub_101811E0("env_ragdoll_boogie", -1);
    v6 = result;
    if ( result )
    {
      v7 = *(_DWORD *)(result + 248);
      v8 = a5 | v7;
      if ( v7 != (a5 | v7) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(v6 + 24);
          if ( v9 )
            sub_100194B0(v9, 248);
        }
        *(_DWORD *)(v6 + 248) = v8;
      }
      sub_102194F0(v6, a1);
      v10 = *(_DWORD *)v6;
      *(float *)(v6 + 800) = a3;
      v11 = *(void (__thiscall **)(int))(v10 + 96);
      *(float *)(v6 + 804) = a4;
      *(float *)(v6 + 808) = a2;
      v11(v6);
      return v6;
    }
  }
  return result;
}
