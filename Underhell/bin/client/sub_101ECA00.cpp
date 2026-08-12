char __thiscall sub_101ECA00(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  bool v5; // zf
  int v6; // esi
  int v7; // edi
  unsigned __int8 v8; // al
  char v9; // cl
  char *v10; // ebp
  int v11; // edi
  int v12; // eax
  int *v13; // esi
  int v14; // ecx
  int v15; // eax
  char **v16; // eax
  int v18; // [esp+10h] [ebp-110h] BYREF
  int v19; // [esp+14h] [ebp-10Ch] BYREF
  _DWORD *v20; // [esp+18h] [ebp-108h]
  int v21; // [esp+1Ch] [ebp-104h]
  char Source[256]; // [esp+20h] [ebp-100h] BYREF

  v5 = (*(_BYTE *)(a2 + 21) & 1) == 0;
  v6 = (int)this;
  v20 = this;
  if ( v5 )
  {
    sub_1011C540((_DWORD *)a2, (char *)&v19);
  }
  else
  {
    v19 = 0;
    sub_1022F5B0(a2, "%d", &v19);
  }
  v7 = a5;
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a5 + 4))(a5, v19, Source, 256);
  sub_102282F0((char *)(v6 + 4), Source, 0x80u);
  v8 = sub_101BD3B0((_DWORD *)a2);
  v21 = v8;
  v19 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = sub_101E7B20(a3);
      if ( !sub_101E4ED0((int)v10, a2, (int)a3, v7) )
        return 0;
      v11 = v20[36];
      v12 = v20[34];
      v13 = v20 + 33;
      if ( v11 + 1 > v12 )
        sub_102AA460(v11 - v12 + 1);
      ++v13[3];
      v14 = *v13;
      v15 = v13[3] - v11 - 1;
      v5 = v13[3] - v11 == 1;
      v13[4] = *v13;
      if ( v15 >= 0 && !v5 )
        memcpy((void *)(v14 + 4 * v11 + 4), (const void *)(v14 + 4 * v11), 4 * v15);
      v16 = (char **)(*v13 + 4 * v11);
      if ( v16 )
        *v16 = v10;
      sub_101E1D50(v10, (int)v20);
      sub_101E1D30(v10, a4);
      if ( ++v19 >= v21 )
      {
        v6 = (int)v20;
        goto LABEL_5;
      }
      v7 = a5;
    }
  }
  else
  {
LABEL_5:
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      HIBYTE(v18) = 0;
      sub_1022F5B0(a2, "%c", (char *)&v18 + 3);
      v9 = HIBYTE(v18);
    }
    else if ( (unsigned __int8)sub_1022E380(1) )
    {
      v9 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
    }
    else
    {
      v9 = 0;
    }
    *(_BYTE *)(v6 + 152) = v9 == 1;
    return 1;
  }
}
