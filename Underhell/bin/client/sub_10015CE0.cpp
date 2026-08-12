int __thiscall sub_10015CE0(_BYTE *this, int a2)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  if ( this[116] && (this[308] & 1) == 0 && sub_10142330() != 7 )
  {
    if ( !byte_1043BD0A && *(_DWORD *)(dword_1043BFF4 + 48) )
    {
LABEL_13:
      (*((void (__thiscall **)(void ***, _BYTE *, _DWORD))*off_103E773C[0] + 5))(off_103E773C[0], this - 4, 0);
    }
    else
    {
      v3 = 0;
      v4 = this + 1224;
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
          goto LABEL_13;
      }
    }
  }
  return 0;
}
