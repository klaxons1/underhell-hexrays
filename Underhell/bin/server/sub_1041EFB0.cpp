char __thiscall sub_1041EFB0(char *Destination, int a2, int *a3, int a4)
{
  int v5; // edi
  unsigned __int8 v6; // al
  char v7; // cl
  int v8; // edi
  int v9; // eax
  char *v10; // esi
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  int *v14; // eax
  int v16; // [esp+10h] [ebp-110h] BYREF
  int v17; // [esp+14h] [ebp-10Ch] BYREF
  int v18; // [esp+18h] [ebp-108h]
  int v19; // [esp+1Ch] [ebp-104h]
  char Source[256]; // [esp+20h] [ebp-100h] BYREF

  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v17 = 0;
    sub_1042E720(a2, "%d", &v17);
  }
  else
  {
    sub_10087860((_DWORD *)a2, (char *)&v17);
  }
  v5 = a4;
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v17, Source, 256);
  sub_104299C0(Destination, Source, 0x80u);
  v6 = sub_1041A0B0((_DWORD *)a2);
  v19 = v6;
  v18 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v17 = sub_1041E190(a3);
      if ( !(unsigned __int8)sub_10420F40(a2, a3, Destination, v5) )
        return 0;
      v8 = *((_DWORD *)Destination + 67);
      v9 = *((_DWORD *)Destination + 65);
      v10 = Destination + 256;
      if ( v8 + 1 > v9 )
        sub_1044A1C0(v8 - v9 + 1);
      ++*((_DWORD *)Destination + 67);
      v11 = *(_DWORD *)v10;
      v12 = *((_DWORD *)Destination + 67) - v8 - 1;
      v13 = *((_DWORD *)Destination + 67) - v8 == 1;
      *((_DWORD *)Destination + 68) = *((_DWORD *)Destination + 64);
      if ( v12 >= 0 && !v13 )
        memcpy((void *)(v11 + 4 * v8 + 4), (const void *)(v11 + 4 * v8), 4 * v12);
      v14 = (int *)(*(_DWORD *)v10 + 4 * v8);
      if ( v14 )
        *v14 = v17;
      sub_1041F190(Destination);
      if ( ++v18 >= v19 )
        goto LABEL_5;
      v5 = a4;
    }
  }
  else
  {
LABEL_5:
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      HIBYTE(v16) = 0;
      sub_1042E720(a2, "%c", (char *)&v16 + 3);
      v7 = HIBYTE(v16);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v7 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
    }
    else
    {
      v7 = 0;
    }
    Destination[276] = v7 == 1;
    return 1;
  }
}
