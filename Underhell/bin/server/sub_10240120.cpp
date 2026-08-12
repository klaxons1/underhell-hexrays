void __thiscall sub_10240120(void *this, int a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  char *v7; // eax
  unsigned int v8; // eax

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBasePlayer `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    if ( this )
      a2 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
    else
      a2 = -1;
    v4 = sub_10319100(&a2);
    if ( v4 != -1 )
    {
      if ( *(_DWORD *)(v3 + 3232) - v4 - 1 > 0 )
        memcpy(
          (void *)(*(_DWORD *)(v3 + 3220) + 4 * v4),
          (const void *)(*(_DWORD *)(v3 + 3220) + 4 * v4 + 4),
          4 * (*(_DWORD *)(v3 + 3232) - v4 - 1));
      --*(_DWORD *)(v3 + 3232);
    }
    if ( *(int *)(v3 + 3232) <= 0 )
    {
LABEL_18:
      v8 = *(_DWORD *)(v3 + 2644);
      if ( v8 != -1 && off_1061BE18[4 * (*(_DWORD *)(v3 + 2644) & 0xFFF) + 2] == v8 >> 12 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v3 + 2644) & 0xFFF) + 1] )
        {
          (**(void (__thiscall ***)(int, int))(v3 + 2536))(v3 + 2536, v3 + 2644);
          *(_DWORD *)(v3 + 2644) = -1;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = **(_DWORD **)(v3 + 3220);
        if ( v5 == -1 || off_1061BE18[4 * (**(_DWORD **)(v3 + 3220) & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (**(_DWORD **)(v3 + 3220) & 0xFFF) + 1];
        v7 = (char *)__RTDynamicCast(
                       v6,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CEnvSoundscapeTriggerable `RTTI Type Descriptor',
                       0);
        if ( v7 )
          break;
        if ( *(_DWORD *)(v3 + 3232) - 1 > 0 )
          memcpy(*(void **)(v3 + 3220), (const void *)(*(_DWORD *)(v3 + 3220) + 4), 4 * (*(_DWORD *)(v3 + 3232) - 1));
        if ( (int)--*(_DWORD *)(v3 + 3232) <= 0 )
          goto LABEL_18;
      }
      sub_1023FFC0(v7, v3 + 2536);
    }
  }
}
