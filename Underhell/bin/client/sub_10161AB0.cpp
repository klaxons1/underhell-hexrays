int __userpurge sub_10161AB0@<eax>(int a1@<ecx>, int a2@<esi>, int *a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  char *v8; // eax
  _BYTE *v9; // eax
  int v10; // esi
  char *v11; // eax
  int *v12; // ebx
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  int v21; // [esp+18h] [ebp-418h]
  float v22; // [esp+18h] [ebp-418h]
  char Buffer[512]; // [esp+28h] [ebp-408h] BYREF
  char Destination[512]; // [esp+228h] [ebp-208h] BYREF
  int v25; // [esp+428h] [ebp-8h]
  int v26; // [esp+42Ch] [ebp-4h]

  if ( a1 == 1424 )
    v5 = 0;
  else
    v5 = a1 - 232;
  v6 = a1 - 228;
  v25 = a1 - 228;
  sub_100F0010(a3, a1 - 228, v5);
  strcpy(Destination, "unset_material");
  memset(&Destination[15], 0, 0x1F1u);
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *(_DWORD *)(a1 + 200));
  if ( v7 )
  {
    v8 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v7);
    sub_102282F0(Destination, v8, 0x200u);
    v9 = (_BYTE *)sub_10227FA0(Destination, ".vmt");
    if ( v9 )
      *v9 = 0;
  }
  *(_DWORD *)(a1 + 236) = sub_100F0C50(a1 - 228, a1, a2, Destination);
  v26 = 1;
  Buffer[strlen(Destination) + 511] = 0;
  sub_10228370(Buffer, 0x200u, "%s%d.vmt", (char)Destination);
  v10 = *(_DWORD *)(dword_10413188 + 4);
  v11 = sub_10076640("materials/%s", Buffer);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(v10 + 40))(dword_10413188 + 4, v11, 0) )
  {
    v12 = (int *)(a1 + 240);
    do
    {
      if ( v26 >= 8 )
        break;
      v13 = (_BYTE *)sub_10227FA0(Buffer, ".vmt");
      if ( v13 )
        *v13 = 0;
      v14 = sub_100F0C50(v25, a1, v10, Buffer);
      ++v26;
      *v12 = v14;
      v10 = *(_DWORD *)(dword_10413188 + 4);
      ++v12;
      v15 = sub_10076640("materials/%s", Buffer);
    }
    while ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(v10 + 40))(dword_10413188 + 4, v15, 0) );
    v6 = v25;
  }
  v16 = 1.0 / *(float *)(a1 + 100);
  *(_DWORD *)(a1 + 276) = v26 - 1;
  *(float *)(a1 + 268) = v16;
  *(float *)(a1 + 272) = 0.0;
  v17 = *(float *)(a1 + 88) / *(float *)(a1 + 104);
  v21 = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a1 + 232) = a3;
  *(float *)(a1 + 228) = v17;
  v18 = sub_100EFC00((int)a3, v6, v21);
  if ( v18 )
    sub_1017CAF0(a3, v18);
  sub_10161670(a1 - 1424);
  *(_DWORD *)(v6 + 148) |= 0x10u;
  v22 = *((float *)off_103DC81C + 3) + 5.0;
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 408))(LODWORD(v22));
}
