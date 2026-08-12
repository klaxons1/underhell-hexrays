double __stdcall sub_1009ADA0(int a1, int a2, bool *a3, int a4)
{
  double v4; // st7
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  int v8; // edi
  bool v9; // al
  int v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+8h] [ebp-4h]

  v4 = 0.0;
  v5 = a2;
  v12 = 0.0;
  v6 = 0;
  v11 = *(_DWORD *)(a2 + 36);
  if ( v11 > 0 )
  {
    v7 = a4;
    do
    {
      v8 = *(unsigned __int16 *)(*(_DWORD *)(v5 + 24) + 2 * v6);
      HIBYTE(a4) = 0;
      if ( (_BYTE)v7 )
        DevMsg("\n");
      v4 = sub_100A2AC0(a1, v8, (char *)&a4 + 3, v7) + v12;
      v5 = a2;
      ++v6;
      v12 = v4;
    }
    while ( v6 < v11 );
  }
  v9 = *(_BYTE *)(v5 + 10) && 0.0 == v4;
  *a3 = v9;
  return sub_10065370(*(unsigned __int16 *)(v5 + 8)) * v12;
}
