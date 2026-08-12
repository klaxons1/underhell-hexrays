int __thiscall sub_100B0780(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // esi
  int v4; // ecx
  int *v5; // ecx
  int result; // eax
  void (__thiscall *v7)(int, int *); // edx
  char Destination[256]; // [esp+8h] [ebp-114h] BYREF
  int v9; // [esp+108h] [ebp-14h] BYREF
  int v10; // [esp+10Ch] [ebp-10h]
  int v11; // [esp+110h] [ebp-Ch]
  int v12; // [esp+114h] [ebp-8h]
  int v13; // [esp+118h] [ebp-4h]

  v2 = this[16];
  if ( v2 == -1 )
  {
    v3 = 0;
    v4 = 0;
  }
  else
  {
    v5 = &off_1061BE18[4 * (this[16] & 0xFFF) + 1];
    if ( v5[1] == v2 >> 12 )
      v4 = *v5;
    else
      v4 = 0;
    v3 = 0;
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 212))(v4);
  if ( result )
  {
    v7 = *(void (__thiscall **)(int, int *))(*(_DWORD *)result + 8);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v7(result, &v9);
    if ( v12 > 0 )
    {
      do
      {
        sub_10065130(*(char **)(v9 + 4 * v3), Destination, 0x100u);
        Msg("Response: %s\n", Destination);
        sub_100B0150((int)this, String, *(_DWORD *)(v9 + 4 * v3++), 0);
      }
      while ( v3 < v12 );
    }
    result = v9;
    v12 = 0;
    if ( v11 >= 0 )
    {
      if ( v9 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
        result = 0;
        v9 = 0;
      }
      v10 = 0;
    }
    v13 = result;
    if ( v11 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
