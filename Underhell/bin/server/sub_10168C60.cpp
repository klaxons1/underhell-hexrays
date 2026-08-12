_DWORD *__thiscall sub_10168C60(_DWORD *this, char *String2)
{
  char *v3; // ebx
  _DWORD *result; // eax
  _DWORD *v5; // edi

  sub_10168C00(this);
  v3 = String2;
  result = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( result )
  {
    result = (_DWORD *)__RTDynamicCast(
                         (int)result,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CPointCamera `RTTI Type Descriptor',
                         0);
    v5 = result;
    if ( result )
    {
      this[53] = *sub_10162BE0(&String2, v3);
      result = (_DWORD *)sub_101708E0(this, v5);
      if ( result )
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
        this[205] = *result;
      }
      else
      {
        this[205] = -1;
      }
    }
  }
  return result;
}
