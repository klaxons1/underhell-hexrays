char __thiscall sub_10226FA0(_DWORD *this, int a2, char a3)
{
  unsigned int v4; // eax
  signed int v5; // edi
  int *v6; // ecx
  int v7; // esi
  signed int i; // [esp+8h] [ebp-4h]

  v4 = this[203];
  v5 = 0;
  for ( i = v4; v5 < i; ++v5 )
  {
    v4 = *(_DWORD *)(this[200] + 4 * v5);
    if ( v4 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 1];
      v4 >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 2] == v4 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          if ( !a3
            || (v4 = __RTDynamicCast(
                       v7,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CSceneEntity `RTTI Type Descriptor',
                       (int)&CInstancedSceneEntity `RTTI Type Descriptor',
                       0)) != 0 )
          {
            LOBYTE(v4) = sub_102237E0((_DWORD *)v7, a2);
            if ( (_BYTE)v4 && *(_BYTE *)(v7 + 884) && *(_BYTE *)(v7 + 885) )
              LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 772))(v7);
          }
        }
      }
    }
  }
  return v4;
}
