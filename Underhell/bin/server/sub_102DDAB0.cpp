int *__thiscall sub_102DDAB0(char *this, int a2, int a3, int a4)
{
  int v4; // ebx
  char *v6; // ecx
  int v7; // eax
  int *result; // eax
  int v9; // eax
  _BYTE v10[12]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = a4;
  sub_101E1C60(this, a2, a3, a4);
  v6 = (char *)(a2 + 12);
  if ( !a2 )
    v6 = this + 12;
  v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 20))(v6);
  result = (int *)sub_10170960((int)this, v7, a3, v4);
  if ( dword_10680878 != -1 )
  {
    result = &off_1061BE18[4 * (dword_10680878 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (dword_10680878 & 0xFFF) + 2] == (unsigned int)dword_10680878 >> 12 )
    {
      if ( *result )
      {
        result = (int *)sub_103DE2E0(v10, &a3);
        if ( (_BYTE)result )
        {
          v9 = __RTDynamicCast(
                 a3,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CPointCamera `RTTI Type Descriptor',
                 0);
          if ( v9 )
            sub_101FD8C0(v9, 1);
          return (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 236))(dword_106B31D0, v10);
        }
      }
    }
  }
  return result;
}
