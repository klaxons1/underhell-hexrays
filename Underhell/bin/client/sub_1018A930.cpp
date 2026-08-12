int __userpurge sub_1018A930@<eax>(char *a1@<ecx>, int a2@<ebx>, char *a3)
{
  char v3; // di
  int v5; // eax
  int v6; // edx
  char *v7; // eax
  size_t v8; // ebx
  _WORD *v9; // edi
  int v10; // eax
  char v12; // [esp+0h] [ebp-360h]
  char Destination[268]; // [esp+8h] [ebp-358h] BYREF
  char Source[260]; // [esp+114h] [ebp-24Ch] BYREF
  char v15[64]; // [esp+218h] [ebp-148h] BYREF
  char Buffer[260]; // [esp+258h] [ebp-108h] BYREF
  int v17; // [esp+35Ch] [ebp-4h]

  v3 = (char)a3;
  sub_102282F0(a1 + 456, a3, strlen(a3) + 1);
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 336))(dword_1041315C, v15, 64);
  sub_10228370(Buffer, 0x104u, "resource/maphtml/%s_%s.html", v3);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
         dword_1047C968 + 4,
         Buffer,
         0)
    || (sub_10228370(Buffer, 0x104u, "resource/maphtml/%s_english.html", v3),
        (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
          dword_1047C968 + 4,
          Buffer,
          0)) )
  {
    sub_102282F0(Destination, "file://", 0x10Bu);
    (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047C968 + 128))(
      dword_1047C968,
      Buffer,
      Source,
      260);
    sub_10228100((int)Destination, Source, 267, -1);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1047C968 + 236))(dword_1047C968, Source);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(**((_DWORD **)a1 + 110) + 124))(*((_DWORD **)a1 + 110), 0);
    (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
    return (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 16))(a1);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)a1 + 110) + 124))(*((_DWORD **)a1 + 110), 1);
    sub_10228370(Buffer, 0x104u, "maps/%s.txt", v3);
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
            dword_1047C968 + 4,
            Buffer,
            0) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
              dword_1047C968 + 4,
              "maps/default.txt",
              0) )
        return sub_1025A8E0(Locale);
      sub_10228370(Buffer, 0x104u, "maps/default.txt", v12);
    }
    v5 = (*(int (__thiscall **)(int, char *, const char *, _DWORD, int))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
           dword_1047C968 + 4,
           Buffer,
           "r",
           0,
           a2);
    v6 = *(_DWORD *)(dword_1047C968 + 4);
    v17 = v5;
    v7 = (char *)(*(int (__thiscall **)(int, int))(v6 + 28))(dword_1047C968 + 4, v5);
    v8 = (size_t)(v7 + 2);
    a3 = v7;
    if ( (int)(v7 + 2) % 2 )
      v8 = (size_t)(v7 + 3);
    v9 = (_WORD *)(*(int (__thiscall **)(_DWORD))(*g_pMemAlloc + 4))(g_pMemAlloc);
    memset(v9, 0, v8);
    v10 = (**(int (__thiscall ***)(int, _WORD *, char *, int))(dword_1047C968 + 4))(dword_1047C968 + 4, v9, a3, v17);
    if ( v10 < (int)a3 )
      *(_WORD *)((char *)v9 + v10) = 0;
    a3 = (char *)((unsigned int)a3 & 0xFFFFFFFC);
    v9[(v8 >> 1) - 1] = 0;
    sub_1011C410(&a3, (char *)v9, (char *)v9, v8 >> 1);
    if ( *v9 == 0xFEFF )
      sub_1025A440(v9 + 1);
    else
      sub_1025A8E0((LPCCH)v9);
    sub_10257640(*((_DWORD *)a1 + 110));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v17);
    (*(void (__thiscall **)(_DWORD, _WORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
    (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
    return (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 16))(a1);
  }
}
