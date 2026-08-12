char __stdcall sub_103F9DE0(void *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v7; // edi
  int v8; // eax

  v1 = *(_DWORD *)dword_106B31F0;
  v2 = sub_100D7240(a1);
  v3 = (*(int (__thiscall **)(int, int))(v1 + 36))(dword_106B31F0, v2);
  if ( v3 == 3 )
  {
    v4 = (_DWORD *)__RTDynamicCast(
                     (int)a1,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CBaseAnimating `RTTI Type Descriptor',
                     0);
    if ( v4 )
    {
      v5 = sub_10001430(v4);
      if ( v5 )
      {
        if ( (*(_BYTE *)(*v5 + 332) & 8) != 0 )
          return 1;
      }
    }
  }
  else if ( v3 == 1 )
  {
    v7 = *(_DWORD *)dword_106B31F0;
    v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 24))(a1);
    if ( ((*(int (__thiscall **)(int, int))(v7 + 108))(dword_106B31F0, v8) & 8) != 0 )
      return 1;
  }
  return 0;
}
