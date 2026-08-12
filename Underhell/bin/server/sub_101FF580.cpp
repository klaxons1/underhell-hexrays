int __thiscall sub_101FF580(int this)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // ebx
  unsigned __int8 v7; // al
  int *v8; // ecx
  int result; // eax
  char *String2; // [esp+10h] [ebp-Ch]
  _DWORD *v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v1 = this;
  v13 = 0;
  v12 = (_DWORD *)(this + 800);
  while ( 1 )
  {
    if ( *v12 == -1 || off_1061BE18[4 * (*v12 & 0xFFF) + 2] != *v12 >> 12 )
      v2 = 0;
    else
      v2 = off_1061BE18[4 * (*v12 & 0xFFF) + 1];
    v3 = __RTDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseAnimating `RTTI Type Descriptor',
           0);
    if ( v3 )
    {
      String2 = *(char **)(v1 + 828);
      if ( !String2 )
        String2 = (char *)String;
      v4 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(v3 + 1100) && sub_100D7240((void *)v3) )
        sub_100BD750((volatile signed __int32 *)v3);
      v5 = *(_DWORD **)(v3 + 1100);
      if ( !v5 || !*v5 )
        v5 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
      v6 = sub_100BD5F0((int)v5, String2);
      if ( v6 == -1 )
        v6 = 24;
      v7 = *(_BYTE *)(this + v13 + 816);
      if ( v7 != v6 && (_BYTE)v6 != v7 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(this + 24);
          if ( v8 )
            sub_100194B0(v8, v13 + 816);
        }
        *(_BYTE *)(this + v13 + 816) = v6;
      }
    }
    ++v12;
    result = v13 + 1;
    v13 = result;
    if ( result >= 4 )
      break;
    v1 = this;
  }
  return result;
}
