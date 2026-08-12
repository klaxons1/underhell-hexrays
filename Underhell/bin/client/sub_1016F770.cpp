void __stdcall sub_1016F770(int a1, float a2, char a3)
{
  int v3; // esi
  int v4; // eax
  float v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+24h] [ebp+10h]

  v3 = a1;
  if ( !a1 )
    return;
  if ( (a3 & 1) != 0 )
  {
    sub_10035090((_BYTE *)a1, 0, 0);
    HIBYTE(a1) = -1;
LABEL_7:
    v4 = *(_DWORD *)(v3 + 88);
    BYTE1(a1) = BYTE1(v4);
    goto LABEL_8;
  }
  if ( (a3 & 0x10) == 0 )
  {
    sub_10035090((_BYTE *)a1, 5, 0);
    HIBYTE(a1) = -76;
    goto LABEL_7;
  }
  sub_10035090((_BYTE *)a1, 4, 0);
  v4 = *(_DWORD *)(a1 + 88);
  BYTE1(a1) = BYTE1(v4);
  HIBYTE(a1) = -76;
LABEL_8:
  LOBYTE(a1) = v4;
  BYTE2(a1) = BYTE2(v4);
  if ( *(_DWORD *)(v3 + 88) != a1 )
    *(_DWORD *)(v3 + 88) = a1;
  if ( (a3 & 0x20) != 0 )
  {
    v5 = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    sub_10034B80((float *)v3, 2, v5);
  }
  *(_BYTE *)(v3 + 84) = 0;
  *(float *)(v3 + 2108) = 0.0;
  LOWORD(v7) = -1;
  *(float *)(v3 + 2112) = 0.0;
  BYTE2(v7) = -1;
  *(float *)(v3 + 2116) = 8.0;
  HIBYTE(v7) = *(_BYTE *)(v3 + 91);
  if ( *(_DWORD *)(v3 + 88) != v7 )
    *(_DWORD *)(v3 + 88) = v7;
  v6 = sub_10034A10((float *)v3, 2) + 10.0;
  sub_10034AA0((float *)v3, 2, v6);
  *(float *)(v3 + 2060) = a2;
}
