int __thiscall sub_100834F0(float *this, int a2)
{
  int result; // eax
  int v4; // edi
  void (__thiscall *v5)(int *, _DWORD *, int); // eax
  int i; // esi
  int v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  int v12; // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2);
  if ( (_WORD)result == 1 )
  {
    v4 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( (dword_106935B4 & 1) == 0 )
    {
      dword_106935B4 |= 1u;
      dword_106935B0 = (int)&CUtlVectorDataOps<CUtlVector<AI_Waypoint_t,CUtlMemory<AI_Waypoint_t,int>>,10>::`vftable';
    }
    v17[0] = &v12;
    v5 = *(void (__thiscall **)(int *, _DWORD *, int))(dword_106935B0 + 4);
    v17[1] = 0;
    v17[2] = 0;
    v5(&dword_106935B0, v17, a2);
    result = v15;
    if ( v15 )
    {
      for ( i = 0; i < v15; v4 += 48 )
      {
        sub_100B9B60(
          v4 + v12,
          *(_DWORD *)(v4 + v12 + 36),
          *(_DWORD *)(v4 + v12 + 32) & 0xFFFFFFFD,
          *(float *)(v4 + v12 + 12));
        result = v15;
        ++i;
      }
      this[11] = *(float *)(dword_106B31C8 + 12) + 1000.0;
    }
    v7 = v12;
    v8 = result - 1;
    if ( result - 1 >= 0 )
    {
      v9 = 48 * v8;
      do
      {
        v10 = *(_DWORD *)(v9 + v7 + 40);
        result = v9 + v7;
        if ( v10 )
        {
          *(_DWORD *)(v10 + 44) = *(_DWORD *)(result + 44);
          v7 = v12;
        }
        v11 = *(_DWORD *)(result + 44);
        if ( v11 )
        {
          result = *(_DWORD *)(result + 40);
          *(_DWORD *)(v11 + 40) = result;
          v7 = v12;
        }
        --v8;
        v9 -= 48;
      }
      while ( v8 >= 0 );
    }
    v15 = 0;
    if ( v14 >= 0 )
    {
      if ( v7 )
      {
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
        v7 = 0;
        v12 = 0;
      }
      v13 = 0;
    }
    v16 = v7;
    if ( v14 >= 0 )
    {
      if ( v7 )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
    }
  }
  return result;
}
