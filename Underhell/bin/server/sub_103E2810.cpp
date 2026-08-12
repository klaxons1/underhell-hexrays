void *__thiscall sub_103E2810(_DWORD *this, int a2, int a3)
{
  char *v4; // eax
  int *v5; // ecx
  int (__thiscall *v6)(_DWORD *); // edx
  void *result; // eax
  int v8; // esi

  if ( *((_BYTE *)this + 320) )
  {
    sub_1023C380(this - 371, (int)"Airboat_headlight_off", 0.0, 0);
    if ( *((_BYTE *)this + 320) )
    {
      v4 = (char *)(this - 371);
      if ( *((_BYTE *)this - 1400) )
      {
        v4[88] |= 1u;
      }
      else
      {
        v5 = (int *)*((_DWORD *)v4 + 6);
        if ( v5 )
          sub_100194B0(v5, 1804);
      }
      *((_BYTE *)this + 320) = 0;
    }
  }
  v6 = *(int (__thiscall **)(_DWORD *))*this;
  this[76] = 0;
  result = (void *)v6(this);
  v8 = (int)result;
  if ( result )
  {
    result = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      result = (void *)__RTDynamicCast(
                         v8,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CBasePlayer `RTTI Type Descriptor',
                         0);
      if ( result )
        return (void *)sub_101E3110(result, 0xAu, 0, 1u);
    }
  }
  return result;
}
