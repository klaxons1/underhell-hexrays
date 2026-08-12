void __thiscall sub_10258010(int this, int a2)
{
  int v2; // eax
  int v4; // ebx
  double v5; // st7
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  char v9; // al
  char v10; // dl
  double v11; // [esp+8h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 >= 0
    && v2 < *(_DWORD *)(this + 276)
    && !*(_BYTE *)(this + 218)
    && -1.0 != *(float *)(32 * v2 + *(_DWORD *)(this + 264) + 16) )
  {
    v4 = 32 * *(_DWORD *)(a2 + 20) + *(_DWORD *)(this + 264);
    v11 = *(float *)(v4 + 12);
    v5 = (v11 - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 20))(dword_1047CA80))
       / *(float *)(v4 + 16);
    v6 = *(_DWORD *)(32 * *(_DWORD *)(a2 + 20) + *(_DWORD *)(this + 264) + 24);
    v7 = (int)(v5 * (double)v6);
    if ( v7 <= v6 )
      LOBYTE(v8) = v7 < 0 ? 0 : v7;
    else
      v8 = *(_DWORD *)(32 * *(_DWORD *)(a2 + 20) + *(_DWORD *)(this + 264) + 24);
    v9 = *(_BYTE *)(a2 + 10);
    v10 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(a2 + 8);
    *(_BYTE *)(a2 + 9) = v10;
    *(_BYTE *)(a2 + 10) = v9;
    *(_BYTE *)(a2 + 11) = v8;
  }
}
