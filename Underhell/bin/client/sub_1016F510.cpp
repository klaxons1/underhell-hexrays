void __stdcall sub_1016F510(int a1, float a2)
{
  float v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+18h] [ebp+8h]

  if ( a1 )
  {
    sub_10035090((_BYTE *)a1, 4, 0);
    *(_BYTE *)(a1 + 84) = 0;
    *(float *)(a1 + 2108) = 0.0;
    *(float *)(a1 + 2112) = 0.0;
    *(float *)(a1 + 2116) = 30.0;
    LOBYTE(v4) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 20, 35);
    BYTE1(v4) = v4;
    BYTE2(v4) = v4;
    HIBYTE(v4) = -1;
    if ( *(_DWORD *)(a1 + 88) != v4 )
      *(_DWORD *)(a1 + 88) = v4;
    v3 = sub_10034A10((float *)a1, 2) + 20.0;
    sub_10034AA0((float *)a1, 2, v3);
    *(float *)(a1 + 2060) = a2;
    *(_DWORD *)(a1 + 1980) = 0x200000;
  }
}
