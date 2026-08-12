int __thiscall sub_10138CA0(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  if ( !byte_1043BD0A && *(_DWORD *)(dword_1043BFF4 + 48) )
  {
LABEL_10:
    sub_10138620((float *)&off_103E7740, (int)(this - 1));
  }
  else
  {
    v3 = 0;
    v4 = this + 63;
    while ( 1 )
    {
      v5 = *v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 2) != *v4 >> 12
         ? 0
         : *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 1);
      if ( __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&C_BaseViewModel `RTTI Type Descriptor',
             0) )
      {
        break;
      }
      ++v3;
      ++v4;
      if ( v3 >= 10 )
        goto LABEL_10;
    }
  }
  return 0;
}
