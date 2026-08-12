int __thiscall sub_102B1D60(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1436))(this) )
  {
    v2 = sub_100D1940((_DWORD *)this);
    v3 = __RTDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseCombatCharacter `RTTI Type Descriptor',
           (int)&CHL2_Player `RTTI Type Descriptor',
           0);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 1680))(v3);
    v4 = *(_DWORD *)(this + 1160);
    if ( v4 != 202 && v4 != 201 && v4 != 2 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 202);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 956))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 202);
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1440))(this) )
  {
    v6 = sub_100D1940((_DWORD *)this);
    v7 = __RTDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseCombatCharacter `RTTI Type Descriptor',
           (int)&CHL2_Player `RTTI Type Descriptor',
           0);
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 1676))(v7);
    v8 = *(_DWORD *)(this + 1160);
    if ( v8 != 205 && v8 != 204 && v8 != 2 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 205);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 956))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 205);
  }
  else
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1380) )
    {
      v9 = *(_DWORD *)(this + 1160);
      if ( v9 == 202 || v9 == 205 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 174);
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 956))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 174);
  }
  return result;
}
