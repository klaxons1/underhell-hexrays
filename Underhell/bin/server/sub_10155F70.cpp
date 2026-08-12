int __stdcall sub_10155F70(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  float *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  float *v11; // eax
  unsigned __int16 v12; // ax
  unsigned int v13; // edi
  int v14; // ecx
  double v15; // st7
  int v16; // ebx
  _DWORD *v17; // esi
  int v18; // eax
  int result; // eax
  float v20; // [esp+20h] [ebp-1048h]
  _DWORD v21[512]; // [esp+34h] [ebp-1034h] BYREF
  _DWORD v22[512]; // [esp+834h] [ebp-834h] BYREF
  _BYTE v23[12]; // [esp+1034h] [ebp-34h] BYREF
  _DWORD v24[6]; // [esp+1040h] [ebp-28h] BYREF
  float v25; // [esp+1058h] [ebp-10h] BYREF
  float v26; // [esp+105Ch] [ebp-Ch]
  float v27; // [esp+1060h] [ebp-8h]
  float v28; // [esp+1064h] [ebp-4h]
  int v29; // [esp+1070h] [ebp+8h]

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 232))(dword_106B31D0, a3, a4);
  (*(void (__thiscall **)(int *))*off_10689570)(off_10689570);
  v4 = 0;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 12);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
      v4 = v6;
      if ( v6 )
      {
        v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 504))(v6, v23);
        v25 = *v7;
        v26 = v7[1];
        v27 = v7[2];
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_106B31D0 + 236))(dword_106B31D0, &v25);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  v28 = 1.0;
  if ( a2 && (v8 = *(_DWORD *)(a2 + 12)) != 0 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
    v10 = v9;
    v29 = v9;
    if ( v9 )
    {
      v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 504))(v9, v23);
      v25 = *v11;
      v26 = v11[1];
      v27 = v11[2];
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v10 + 1152))(v10, v4, a3, a4);
      sub_102623B0(a2, a3, a4);
      v28 = sub_101E7390(v10);
    }
  }
  else
  {
    v29 = 0;
    v10 = 0;
  }
  memset(v24, 0, sizeof(v24));
  v12 = word_1062515C;
  v13 = 0;
  if ( word_1062515C != -1 )
  {
    v14 = dword_10625150;
    while ( 1 )
    {
      v15 = v28;
      v16 = 8 * v12;
      v17 = *(_DWORD **)(v16 + v14);
      HIBYTE(a4) = 1;
      v21[v13] = v17[200];
      v20 = v15;
      v22[v13++] = (*(unsigned __int8 (__thiscall **)(_DWORD *, float *, _DWORD, char *))(*v17 + 720))(
                     v17,
                     &v25,
                     LODWORD(v20),
                     (char *)&a4 + 3);
      if ( v13 >= 0x200 )
      {
        (*(void (__thiscall **)(int, _DWORD *, _DWORD *, unsigned int))(*(_DWORD *)dword_106B31D0 + 348))(
          dword_106B31D0,
          v21,
          v22,
          v13);
        v13 = 0;
      }
      if ( !v17[201] )
        break;
      if ( HIBYTE(a4) )
        goto LABEL_18;
LABEL_22:
      v14 = dword_10625150;
      v12 = *(_WORD *)(v16 + dword_10625150 + 6);
      if ( v12 == 0xFFFF )
      {
        v10 = v29;
        goto LABEL_24;
      }
    }
    HIBYTE(a4) = 1;
LABEL_18:
    v18 = v17[200];
    if ( v18 >= 0 )
    {
      if ( (unsigned int)v18 < 0xC0 )
        *((_BYTE *)v24 + (v18 >> 3)) |= 1 << (v18 & 7);
      else
        Error("ClientSetupVisibility: portal number (%d) too large", v17[200]);
    }
    goto LABEL_22;
  }
LABEL_24:
  result = (*(int (__thiscall **)(int, _DWORD *, _DWORD *, unsigned int))(*(_DWORD *)dword_106B31D0 + 348))(
             dword_106B31D0,
             v21,
             v22,
             v13);
  if ( v10 )
    return sub_101FC920(v10, v24);
  return result;
}
