char *__thiscall sub_1013D960(float *this)
{
  _DWORD *v2; // edi
  char **v3; // esi
  int v4; // ebx
  char *result; // eax
  _DWORD *v6; // eax
  int v7; // eax
  const char *v8; // eax

  sub_100E38F0(this);
  v2 = this + 219;
  v3 = (char **)(this + 214);
  v4 = 5;
  do
  {
    result = *v3;
    if ( *v3 )
    {
      v6 = sub_1012BF20(&dword_1069E3E0, 0, result, 0, 0, 0, 0);
      v7 = __RTDynamicCast(
             (int)v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseFilter `RTTI Type Descriptor',
             0);
      if ( v7 )
      {
        result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
        *v2++ = *(_DWORD *)result;
      }
      else
      {
        v8 = *v3;
        if ( !*v3 )
          v8 = String;
        result = (char *)Warning("filter_multi: Tried to add entity (%s) which is not a filter entity!\n", v8);
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
