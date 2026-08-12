char *__thiscall sub_102CB630(_DWORD *this)
{
  char *result; // eax
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  sub_102CA800((int)this);
  result = (char *)this[352];
  if ( result )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, result, 0, 0, 0, 0);
    result = (char *)__RTDynamicCast(
                       (int)v3,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CBaseAnimating `RTTI Type Descriptor',
                       0);
    if ( result )
    {
      result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
      this[353] = *(_DWORD *)result;
    }
    else
    {
      this[353] = -1;
    }
    v4 = this[353];
    if ( v4 != -1 )
    {
      result = (char *)&off_1061BE18[4 * (this[353] & 0xFFF) + 1];
      v5 = v4 >> 12;
      if ( off_1061BE18[4 * (this[353] & 0xFFF) + 2] == v5 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (this[353] & 0xFFF) + 2] == v5 )
            result = (char *)sub_100BEF30(*(_DWORD *)result, "muzzle");
          else
            result = (char *)sub_100BEF30(0, "muzzle");
          this[354] = result;
        }
      }
    }
  }
  return result;
}
