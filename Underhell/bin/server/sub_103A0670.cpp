int __thiscall sub_103A0670(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int i; // esi
  float v11; // [esp+4h] [ebp-34h]
  int v12[2]; // [esp+20h] [ebp-18h] BYREF
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+30h] [ebp-8h]
  _DWORD *v16; // [esp+34h] [ebp-4h]

  v2 = 0;
  v16 = this;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  result = sub_103A0460((float *)this, v12);
  v4 = v12[0];
  v5 = result;
  if ( result >= 4 )
  {
    v6 = dword_106B31C8;
    v7 = ((unsigned int)(result - 4) >> 2) + 1;
    result = v12[0] + 8;
    v2 = 4 * v7;
    do
    {
      v8 = *(_DWORD *)(result - 8);
      result += 16;
      --v7;
      *(float *)(v8 + 3816) = *(float *)(v6 + 12) + 1.0;
      *(float *)(*(_DWORD *)(result - 20) + 3816) = *(float *)(v6 + 12) + 1.0;
      *(float *)(*(_DWORD *)(result - 16) + 3816) = *(float *)(v6 + 12) + 1.0;
      *(float *)(*(_DWORD *)(result - 12) + 3816) = *(float *)(v6 + 12) + 1.0;
    }
    while ( v7 );
    v4 = v12[0];
  }
  if ( v2 < v5 )
  {
    result = dword_106B31C8;
    do
    {
      v9 = *(_DWORD *)(v4 + 4 * v2++);
      *(float *)(v9 + 3816) = *(float *)(result + 12) + 1.0;
    }
    while ( v2 < v5 );
  }
  if ( v5 > 1 )
  {
    sub_1023C380(v16, (int)"NPC_RollerMine.Chirp", 0.0, 0);
    for ( i = 1; i < v5; ++i )
    {
      v11 = RandomFloat(2.0, 3.0);
      result = sub_1010C7F0((float *)dword_10614CA8, *(_DWORD *)(v4 + 4 * i), "RespondToChirp", v11, 0, 0, 0);
    }
  }
  if ( v13 >= 0 )
  {
    if ( v4 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
  }
  return result;
}
