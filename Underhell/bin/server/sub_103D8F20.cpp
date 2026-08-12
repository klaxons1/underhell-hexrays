int __thiscall sub_103D8F20(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  const char *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  float *v9; // eax
  char Buffer[512]; // [esp+28h] [ebp-214h] BYREF
  char v11[12]; // [esp+228h] [ebp-14h] BYREF
  int v12; // [esp+234h] [ebp-8h]
  int *v13; // [esp+238h] [ebp-4h]

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(int *)(this + 3720) > 0
      && (v4 = __RTDynamicCast(
                 *(_DWORD *)(this + 3724),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CSniperTarget `RTTI Type Descriptor',
                 0)) != 0 )
    {
      v5 = *(const char **)(v4 + 800);
      if ( !v5 )
        v5 = String;
    }
    else
    {
      v5 = "<None>";
    }
    sub_10429A00(Buffer, 0x200u, "Sweep group (count): %s (%d)", (char)v5);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v6 = v3 + 1;
    v7 = 0;
    v12 = v6;
    if ( *(int *)(this + 3720) <= 0 )
    {
      return v6;
    }
    else
    {
      v13 = (int *)(this + 3724);
      do
      {
        v8 = *v13;
        if ( *v13 )
        {
          if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
            sub_100DAE60(*v13);
          v9 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)this + 504))(this, v11);
          sub_1011C790(v9, (float *)(v8 + 580), 8.0, 0, 255, 0, 0, 1, 0.0);
        }
        ++v13;
        ++v7;
      }
      while ( v7 < *(_DWORD *)(this + 3720) );
      return v12;
    }
  }
  return result;
}
