char __thiscall sub_1007EBC0(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  const char *v6; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  const char *v11; // [esp-10h] [ebp-14h]
  const char *v12; // [esp-Ch] [ebp-10h]

  v2 = *(_DWORD **)(this + 40);
  if ( v2 && !*v2 )
    sub_1007EB60((void *)this);
  v3 = *(_DWORD *)(this + 40);
  if ( !v3 || !*(_DWORD *)v3 )
    return 0;
  if ( *(int *)(this + 48) > 0 || *(int *)(*(_DWORD *)(this + 36) + 8) > 0 )
  {
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 36);
    if ( (v8 == 3 || v8 == 1) && (v9 = (_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4))) != 0 && *v9 == 124 )
    {
      sub_100B9C50(*(_DWORD *)(this + 40));
      return 0;
    }
    else
    {
      v10 = *(_DWORD **)(this + 36);
      if ( *v10 )
      {
        sub_100B9C50(*(_DWORD *)(this + 36));
        v10[11] = -1;
      }
      sub_100A61F0(**(_DWORD **)(this + 40), 1);
      unknown_libname_2(0);
      sub_100A6150(0);
      sub_100A6150(4);
      *(float *)(*(_DWORD *)(this + 36) + 4) = 6.0;
      if ( *(_DWORD *)(this + 48) )
        sub_100A5F90(*(_DWORD *)(this + 48));
      if ( *(_DWORD *)(this + 52) )
        sub_100A5FC0(*(_DWORD *)(this + 52));
      return 1;
    }
  }
  else
  {
    sub_100B9C50(v3);
    v4 = *(_DWORD *)(*(_DWORD *)(this + 36) + 8);
    v5 = *(_DWORD *)(this + 4);
    v12 = (const char *)sub_10002060(*(_DWORD *)(this + 48));
    v11 = (const char *)sub_10002060(v4);
    v6 = (const char *)sub_100D6390(v5);
    DevWarning(2, "%s has a stopping path and no valid. Movement activity: %s (prev %s)\n", v6, v11, v12);
    return 0;
  }
}
