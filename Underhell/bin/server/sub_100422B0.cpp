char *__thiscall sub_100422B0(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  char *result; // eax

  sub_100BDBA0();
  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( v3 && *v3 )
    v4 = this[275];
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v4 )
    sub_10041DD0(this);
  result = (char *)this[734];
  if ( result )
  {
    result = (char *)sub_1012BF20(0, result, 0, 0, 0, 0);
    if ( result )
    {
      result = (char *)__RTDynamicCast(
                         (int)result,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CBaseFilter `RTTI Type Descriptor',
                         0);
      if ( result )
      {
        result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
        this[733] = *(_DWORD *)result;
      }
      else
      {
        this[733] = -1;
      }
    }
  }
  return result;
}
