int __cdecl sub_1024CC40(int *a1)
{
  const char *v1; // eax
  int v2; // edi
  const char *v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // [esp+14h] [ebp+8h]

  if ( *a1 < 3 )
    Error("Test_SpawnRandomEntities <min # entities> <max # entities> missing arguments.");
  if ( !dword_106C6E54 )
    Error("Test_SpawnRandomEntities: not initialized (call Test_InitRandomEntitySpawner frst).");
  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  v2 = atoi(v1);
  v3 = String;
  if ( *a1 > 2 )
    v3 = (const char *)a1[260];
  v4 = atoi(v3);
  result = RandomInt(v2, v4);
  if ( result > 0 )
  {
    v10 = result;
    do
    {
      v6 = RandomInt(0, dword_106C6E54 - 1);
      if ( *((_DWORD *)dword_106C6E48 + v6) != -1
        && off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v6) & 0xFFF) + 2] == *((_DWORD *)dword_106C6E48 + v6) >> 12
        && off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v6) & 0xFFF) + 1] )
      {
        if ( *((_DWORD *)dword_106C6E48 + v6) == -1
          || off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v6) & 0xFFF) + 2] != *((_DWORD *)dword_106C6E48 + v6) >> 12 )
        {
          v7 = 0;
        }
        else
        {
          v7 = off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v6) & 0xFFF) + 1];
        }
        sub_1025FAE0(v7);
      }
      v8 = RandomInt(0, dword_106C6E40 - 1);
      v9 = (char *)dword_106C6E48 + 4 * v6;
      result = (*(int (**)(void))(*(_DWORD *)(dword_106C6E34 + 4 * v8) + 4))();
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
        *v9 = *(_DWORD *)result;
      }
      else
      {
        *v9 = -1;
      }
      --v10;
    }
    while ( v10 );
  }
  return result;
}
