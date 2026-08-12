unsigned int __thiscall sub_10166BE0(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  float v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+8h] [ebp-Ch]

  if ( !sub_100DCD90(this) )
    return sub_1025FAC0(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  if ( *(float *)(this + 476) == flt_106F1CA8
    && *(float *)(this + 480) == flt_106F1CAC
    && *(float *)(this + 484) == flt_106F1CB0 )
  {
    if ( *(_BYTE *)(this + 119) != 0xFF )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 116);
      }
      *(_BYTE *)(this + 119) = -1;
    }
    if ( *(_BYTE *)(this + 113) != 2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 113);
      }
      *(_BYTE *)(this + 113) = 2;
    }
    if ( *(_BYTE *)(this + 306) != 6 )
      sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    sub_100D7260((float *)this, &flt_106F1CB4);
    v9 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 1132);
    sub_100EC4A0((int *)this, v9, 0);
    sub_100EC3F0((_DWORD *)this, (int)sub_100E1560, 0.0, 0);
    v5 = *(_DWORD *)(this + 1152);
    if ( v5 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 2] == v5 >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 1] )
      {
        v6 = sub_10124650((_DWORD *)this);
        v7 = __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CSprite `RTTI Type Descriptor',
               0);
        if ( v7 )
        {
          if ( 0.0 == *(float *)(this + 1132) )
            *(float *)(this + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                             + 4))(
                                        dword_106B31E4,
                                        1.0,
                                        3.0);
          sub_1012F1D0(v7, *(float *)(this + 1132));
        }
      }
    }
    result = *(_DWORD *)(this + 1156);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1] )
        {
          v8 = sub_101660C0((_DWORD *)this);
          result = __RTDynamicCast(
                     v8,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CEntityFlame `RTTI Type Descriptor',
                     0);
          if ( result )
            return sub_1012B210(result, 1.0);
        }
      }
    }
  }
  else
  {
    v10 = *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0((int *)this, v10, 0);
  }
  return result;
}
