void __thiscall sub_100A34F0(int this)
{
  __int16 v2; // cx
  __int16 v3; // si
  int v4; // edi
  int v5; // esi
  int *v6; // edi
  __int16 v7; // ax
  __int16 v8; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 22);
  if ( v2 != -1 )
  {
    v3 = (*(_DWORD *)(this + 8) > 0) - 1;
    v8 = v3;
    if ( *(int *)(this + 8) > 0 )
    {
      while ( 1 )
      {
        if ( v3 >= 0 )
        {
          v4 = v3;
          if ( v3 < *(_DWORD *)(this + 8) && v3 <= v2 && *sub_1009A830((_DWORD *)this, v8) != v3 )
          {
            v5 = 60 * v3;
            v6 = (int *)(60 * v4 + *(_DWORD *)(this + 4) + 8);
            sub_1009CA00(v6 + 1);
            if ( v6[3] >= 0 )
            {
              if ( v6[1] )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6[1]);
                v6[1] = 0;
              }
              v6[2] = 0;
            }
            *(_WORD *)(v5 + *(_DWORD *)(this + 4) + 2) = *(_WORD *)(this + 20);
            *(_WORD *)(v5 + *(_DWORD *)(this + 4)) = v8;
            *(_WORD *)(this + 20) = v8;
            v3 = v8;
          }
        }
        v2 = *(_WORD *)(this + 22);
        if ( v3 == v2 )
          break;
        v7 = (__int16)(v8 + 1) < 0 || (__int16)(v8 + 1) >= *(_DWORD *)(this + 8) ? -1 : v3 + 1;
        v8 = v7;
        if ( v7 == -1 )
          break;
        v3 = v7;
      }
    }
    *(_WORD *)(this + 16) = -1;
    *(_WORD *)(this + 18) = 0;
  }
}
