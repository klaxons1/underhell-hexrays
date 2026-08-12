void __thiscall sub_1011A580(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // esi
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 32) && !*(_DWORD *)(this + 36) )
  {
    v3 = *(_DWORD *)(this + 88);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 88) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 88) & 0xFFF) + 1];
    v5 = v4;
    while ( 1 )
    {
      v5 = sub_1012BC90(v5, "point_commentary_node");
      v6 = *(_DWORD *)(this + 88);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 88) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 88) & 0xFFF) + 1];
      if ( v5 == v7 )
        break;
      v8 = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CPointCommentaryNode `RTTI Type Descriptor',
             0);
      if ( v8 )
      {
        *(_DWORD *)(this + 36) = 1;
        *(_DWORD *)(this + 88) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
        *(float *)(this + 32) = *(float *)(dword_106B31C8 + 12);
        v9 = *(_DWORD *)(this + 84);
        if ( v9 != -1
          && off_1061BE18[4 * (*(_DWORD *)(this + 84) & 0xFFF) + 2] == v9 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(this + 84) & 0xFFF) + 1] )
        {
          v10 = sub_1026A890(this + 84);
          if ( *(_BYTE *)(v10 + 1268) )
            sub_101194F0(v10, 1);
        }
        return;
      }
    }
  }
}
