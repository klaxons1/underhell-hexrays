int __stdcall sub_101BC750(int a1)
{
  const char *v1; // eax
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  int result; // eax
  const char *v6; // eax
  int v7; // eax
  char Buffer[256]; // [esp+4h] [ebp-118h] BYREF
  int v9; // [esp+104h] [ebp-18h]
  int v10; // [esp+108h] [ebp-14h] BYREF
  int v11; // [esp+10Ch] [ebp-10h]
  int v12; // [esp+110h] [ebp-Ch]
  int v13; // [esp+114h] [ebp-8h]
  int v14; // [esp+118h] [ebp-4h]

  v1 = (const char *)sub_10229A00(a1);
  if ( !_stricmp(v1, "QueryParticleManifest") )
  {
    v2 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    sub_100E9310(&v10);
    v9 = v13;
    if ( v13 > 0 )
    {
      v3 = 0;
      do
      {
        sub_10228370(Buffer, 0x100u, "%d", v2);
        sub_1022A6A0(Buffer, 1);
        v4 = (void *)sub_1022CF00(v3 + v10);
        sub_1022ABA0("file", v4);
        ++v2;
        v3 += 16;
      }
      while ( v2 < v9 );
    }
    sub_100CEE70(&v10);
    result = v10;
    if ( v12 >= 0 )
    {
      if ( v10 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v10);
        result = 0;
        v10 = 0;
      }
      v11 = 0;
    }
    v14 = result;
    if ( v12 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  else
  {
    v6 = (const char *)sub_10229A00(a1);
    result = _stricmp(v6, "QueryMonitorTexture");
    if ( !result )
    {
      v7 = sub_10116280();
      return sub_1022ACE0("texture", v7);
    }
  }
  return result;
}
