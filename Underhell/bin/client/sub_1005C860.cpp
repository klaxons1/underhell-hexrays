void __thiscall sub_1005C860(float *this)
{
  float *v1; // esi
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // eax
  double v6; // st7
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]

  v9 = *((float *)off_103DC81C + 4);
  v1 = this + 621;
  v2 = 6;
  do
  {
    v3 = *(v1 - 1) * v9 + *v1;
    v7 = v3;
    if ( *(_DWORD *)v1 != LODWORD(v7) )
      *v1 = v3;
    v4 = *(_DWORD *)dword_10413178;
    v5 = (*(int (__thiscall **)(float *))(*((_DWORD *)v1 - 304) + 36))(v1 - 304);
    if ( (double)(*(int (__thiscall **)(int, int))(v4 + 32))(dword_10413178, v5) <= *v1 )
    {
      v6 = *v1 - (double)(int)*v1;
      v8 = v6;
      if ( *(_DWORD *)v1 != LODWORD(v8) )
        *v1 = v6;
    }
    v1 += 326;
    --v2;
  }
  while ( v2 );
}
