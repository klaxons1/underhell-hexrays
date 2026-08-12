void __thiscall sub_102409D0(char *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int *v10; // esi
  _DWORD *v11; // [esp+8h] [ebp-4h]

  v3 = (_DWORD *)__RTDynamicCast(
                   a2,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBasePlayer `RTTI Type Descriptor',
                   0);
  v11 = v3;
  if ( v3 )
  {
    v4 = -1;
    if ( this )
      a2 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
    else
      a2 = -1;
    v5 = sub_10319100(&a2);
    if ( v5 != -1 )
    {
      if ( v3[808] - v5 - 1 > 0 )
        memcpy((void *)(v3[805] + 4 * v5), (const void *)(v3[805] + 4 * v5 + 4), 4 * (v3[808] - v5 - 1));
      --v3[808];
    }
    if ( this )
      v4 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
    v6 = v3[808];
    v7 = v3[806];
    if ( v6 + 1 > v7 )
      sub_102ABFC0(v6 - v7 + 1);
    ++v3[808];
    v8 = v3[805];
    v9 = v3[808] - 1;
    v3[809] = v8;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4), (const void *)v8, 4 * v9);
    v10 = (int *)v3[805];
    if ( v10 )
      *v10 = v4;
    sub_1023FFC0(this, (int)(v11 + 634));
  }
}
