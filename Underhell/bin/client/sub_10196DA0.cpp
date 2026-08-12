int __userpurge sub_10196DA0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  int v6; // ebx
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  int (__stdcall *v10)(int, int); // eax
  int v11; // eax
  int v12; // edi
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  float v16; // [esp+8h] [ebp-34h]
  float v18[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v19; // [esp+2Ch] [ebp-10h] BYREF
  float v20; // [esp+30h] [ebp-Ch]
  float v21; // [esp+34h] [ebp-8h]
  float v22; // [esp+38h] [ebp-4h]
  float v23; // [esp+44h] [ebp+8h]

  if ( !*(_BYTE *)(a1 + 1968) )
    return 0;
  v6 = a1 - 4;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 744))(a1 - 4) )
    return 0;
  sub_10196720(a1 - 4, v6);
  if ( *(_BYTE *)(a1 + 1976) || *(_BYTE *)(a1 + 1977) )
    sub_10196560((void *)(a1 - 4));
  if ( *(_BYTE *)(a1 + 1976) )
  {
    v7 = sub_101422E0();
    v8 = -v7[1];
    v9 = -v7[2];
    *(float *)&v19 = -*v7;
    v20 = v8;
    v21 = v9;
    sub_101EE190(&v19, v18);
    sub_10037CA0(a1 - 4, v18);
    sub_10026910((_BYTE *)a1, a4);
  }
  else
  {
    v21 = 1.0;
    v20 = 1.0;
    *(float *)&v19 = 1.0;
    v10 = *(int (__stdcall **)(int, int))(*(_DWORD *)dword_1047C96C + 380);
    v22 = sin(*((float *)off_103DC81C + 3) * 25.0);
    v23 = *(float *)(a1 + 272);
    v11 = v10(a3, a2);
    v12 = v11;
    if ( v11 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 36))(v12, *(_DWORD *)(a1 + 1984), a1 - 4);
    v16 = *(float *)(a1 + 1972) + v22;
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 36))(a1 - 4);
    sub_10196820(v6, v13, v16, (float *)&v19, v23);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
  }
  v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 36))(a1 - 4);
  *(float *)(a1 + 1956) = *v14;
  *(float *)(a1 + 1960) = v14[1];
  v15 = v14[2];
  result = 1;
  *(float *)(a1 + 1964) = v15;
  return result;
}
