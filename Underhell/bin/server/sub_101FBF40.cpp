int __stdcall sub_101FBF40(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v1 = a1;
  if ( (a1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v2 = *(_DWORD *)(v1 + 12)) != 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  }
  else
  {
    v3 = 0;
  }
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBasePlayer `RTTI Type Descriptor',
         0);
  if ( !v4 || v4 == -4492 )
    return 0;
  else
    return v4 + 4496;
}
