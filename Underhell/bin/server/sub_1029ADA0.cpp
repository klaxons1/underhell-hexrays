void __thiscall sub_1029ADA0(_BYTE *this, int a2, int a3)
{
  void *v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // edx
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // eax

  v3 = (void *)a2;
  if ( a2 )
  {
    v4 = a3;
    do
    {
      sub_10295660(v3, &a2);
      sub_10295E70(a2);
      v5 = v4 + 1;
      if ( v4 + 1 < 20 )
      {
        while ( 1 )
        {
          v6 = (int)this;
          if ( !this[v5 + 1088] )
            break;
          if ( ++v5 >= 20 )
            goto LABEL_26;
        }
        v7 = *(_DWORD *)&this[4 * v5 + 1008];
        if ( v7 != -1
          && (v8 = &off_1061BE18[4 * (*(_DWORD *)&this[4 * v5 + 1008] & 0xFFF) + 1],
              v9 = v7 >> 12,
              off_1061BE18[4 * (*(_DWORD *)&this[4 * v5 + 1008] & 0xFFF) + 2] == v9)
          && *v8 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)&this[4 * v5 + 1008] & 0xFFF) + 2] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          v11 = *(_DWORD *)(v10 + 860);
          if ( v11 == -1 || (v12 = &off_1061BE18[4 * (*(_DWORD *)(v10 + 860) & 0xFFF) + 1], v12[1] != v11 >> 12) )
            v13 = 0;
          else
            v13 = *v12;
          v3 = (void *)__RTDynamicCast(
                         v13,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CAI_BaseNPC `RTTI Type Descriptor',
                         0);
          if ( v3 )
          {
            sub_10295660(v3, &a3);
            sub_10295E70(a3);
          }
          v6 = (int)this;
        }
        else
        {
          v3 = 0;
        }
        v14 = *(_DWORD *)(v6 + 4 * v5 + 1008);
        if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(v6 + 4 * v5 + 1008) & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(v6 + 4 * v5 + 1008) & 0xFFF) + 1];
        sub_10299F20(a2, v6, v15, -1.0, 0, 0, 0, 0, -1);
        v4 = v5;
      }
LABEL_26:
      ;
    }
    while ( v3 );
  }
}
