unsigned int __thiscall sub_101707F0(_DWORD *this, char *String2)
{
  unsigned int result; // eax
  int v4; // eax

  result = (unsigned int)sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( result )
  {
    v4 = __RTDynamicCast(
           result,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPointCamera `RTTI Type Descriptor',
           0);
    this[200] = v4 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) : -1;
    result = this[200];
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (this[200] & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (this[200] & 0xFFF) + 1] )
        {
          if ( String2 && *String2 )
          {
            result = (unsigned int)String2;
            this[202] = String2;
          }
          else
          {
            result = 0;
            this[202] = 0;
          }
        }
      }
    }
  }
  return result;
}
