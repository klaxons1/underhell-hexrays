char __thiscall sub_101518C0(void *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  double v6; // st5
  double v7; // st7
  void *v9; // [esp+18h] [ebp-4h]
  float v10; // [esp+24h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  v10 = *(float *)(a2 + 8);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = v3 + 4;
  v9 = this;
  if ( v4 != v5 )
  {
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4) )
    {
      (*(void (__stdcall **)(int, float))(*(_DWORD *)this + 64))(v4, COERCE_FLOAT(LODWORD(v10)));
      v6 = *(float *)(v4 + 28) * v10;
      v7 = *(float *)(v4 + 32) * v10;
      *(float *)(v4 + 12) = *(float *)(v4 + 24) * v10 + *(float *)(v4 + 12);
      *(float *)(v4 + 16) = v6 + *(float *)(v4 + 16);
      *(float *)(v4 + 20) = v7 + *(float *)(v4 + 20);
      *(float *)(v4 + 44) = *(float *)(v4 + 44) + v10;
      (*(void (__thiscall **)(void *, int, float))(*(_DWORD *)v9 + 60))(v9, v4, COERCE_FLOAT(LODWORD(v10)));
      if ( *(float *)(v4 + 40) <= (double)*(float *)(v4 + 44)
        || (LOBYTE(v5) = ~(**(unsigned __int8 (__thiscall ***)(int, int, _DWORD))dword_104131A0)(
                            dword_104131A0,
                            v4 + 12,
                            0),
            (v5 & 1) == 0) )
      {
        LOBYTE(v5) = sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v4);
      }
      v4 = *(_DWORD *)(a2 + 16);
      if ( v4 == *(_DWORD *)(a2 + 4) + 4 )
        break;
      this = v9;
    }
  }
  return v5;
}
