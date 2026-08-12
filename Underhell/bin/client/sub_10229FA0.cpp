int __thiscall sub_10229FA0(_BYTE *this, void *Src, size_t Size, int a4, int a5)
{
  int v8; // eax
  const char *v9; // eax
  int v10; // ecx
  _BYTE *v11; // eax
  int v12; // eax
  const char *v13; // eax
  const WCHAR *v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // eax
  size_t v20; // kr04_4
  int v21; // eax
  int v22; // eax
  size_t v23; // kr08_4
  int v24; // eax
  int v25; // eax
  size_t v26; // kr0C_4
  int result; // eax
  size_t ArgList_4; // [esp+58h] [ebp-44h]
  char v29[16]; // [esp+68h] [ebp-34h] BYREF
  char Buffer[32]; // [esp+78h] [ebp-24h] BYREF
  _BYTE *v31; // [esp+98h] [ebp-4h]
  void *Srca; // [esp+A4h] [ebp+8h]
  void *Srcb; // [esp+A4h] [ebp+8h]
  void *Srcc; // [esp+A4h] [ebp+8h]
  unsigned int Sizea; // [esp+A8h] [ebp+Ch]
  unsigned int Sizeb; // [esp+A8h] [ebp+Ch]
  unsigned int Sizec; // [esp+A8h] [ebp+Ch]
  float *i; // [esp+ACh] [ebp+10h]

  v31 = this;
  sub_10229EA0((int)Src, Size, a4, a5);
  if ( Src )
    (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
  if ( a4 )
    sub_1022ECB0("\"", 1u);
  v8 = KeyValuesSystem();
  v9 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 16))(v8, *(_DWORD *)v31);
  sub_10229F00(v31, (int)Src, Size, a4, v9);
  if ( Src )
    (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\n", 2, Size);
  if ( a4 )
    sub_1022ECB0("\"\n", 2u);
  sub_10229EA0((int)Src, Size, a4, a5);
  if ( Src )
    (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "{\n", 2, Size);
  if ( a4 )
    sub_1022ECB0("{\n", 2u);
  v10 = *((_DWORD *)v31 + 6);
  for ( i = (float *)v10; v10; i = (float *)v10 )
  {
    if ( *(_DWORD *)(v10 + 24) )
    {
      sub_10229FA0(Src, Size, a4, a5 + 1);
    }
    else
    {
      switch ( *(_BYTE *)(v10 + 16) )
      {
        case 1:
          v11 = *(_BYTE **)(v10 + 4);
          if ( v11 && *v11 )
          {
            sub_10229EA0((int)Src, Size, a4, a5 + 1);
            if ( Src )
              (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
            if ( a4 )
              sub_1022ECB0("\"", 1u);
            v12 = KeyValuesSystem();
            v13 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 16))(v12, *(_DWORD *)i);
            sub_10229F00(v31, (int)Src, Size, a4, v13);
            if ( Src )
              (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\t\t\"", 4, Size);
            if ( a4 )
              sub_1022ECB0("\"\t\t\"", 4u);
            sub_10229F00(v31, (int)Src, Size, a4, *((const char **)i + 1));
            goto LABEL_28;
          }
          break;
        case 2:
          sub_10229EA0((int)Src, Size, a4, a5 + 1);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
          if ( a4 )
            sub_1022ECB0("\"", 1u);
          v18 = KeyValuesSystem();
          Sizea = strlen((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 16))(v18, *(_DWORD *)i));
          v19 = KeyValuesSystem();
          Srca = (void *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 16))(v19, *(_DWORD *)i);
          if ( Src )
            (*(void (__thiscall **)(void *, void *, unsigned int, size_t))(*(_DWORD *)Src + 4))(Src, Srca, Sizea, Size);
          if ( a4 )
            sub_1022ECB0(Srca, Sizea);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\t\t\"", 4, Size);
          if ( a4 )
            sub_1022ECB0("\"\t\t\"", 4u);
          sub_10228370(Buffer, 0x20u, "%d", *((_DWORD *)i + 3));
          v20 = strlen(Buffer);
          if ( Src )
            (*(void (__thiscall **)(void *, char *, size_t, size_t))(*(_DWORD *)Src + 4))(Src, Buffer, v20, Size);
          if ( a4 )
            sub_1022ECB0(Buffer, v20);
          if ( !Src )
            goto LABEL_30;
          goto LABEL_29;
        case 3:
          sub_10229EA0((int)Src, Size, a4, a5 + 1);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
          if ( a4 )
            sub_1022ECB0("\"", 1u);
          v24 = KeyValuesSystem();
          Sizec = strlen((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 16))(v24, *(_DWORD *)i));
          v25 = KeyValuesSystem();
          Srcc = (void *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 16))(v25, *(_DWORD *)i);
          if ( Src )
            (*(void (__thiscall **)(void *, void *, unsigned int, size_t))(*(_DWORD *)Src + 4))(Src, Srcc, Sizec, Size);
          if ( a4 )
            sub_1022ECB0(Srcc, Sizec);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\t\t\"", 4, Size);
          if ( a4 )
            sub_1022ECB0("\"\t\t\"", 4u);
          sub_10228370(v29, 0x30u, "%f", i[3]);
          v26 = strlen(v29);
          if ( Src )
            (*(void (__thiscall **)(void *, char *, size_t, size_t))(*(_DWORD *)Src + 4))(Src, v29, v26, Size);
          if ( a4 )
            sub_1022ECB0(v29, v26);
          goto LABEL_28;
        case 5:
          v14 = *(const WCHAR **)(v10 + 8);
          if ( !v14 || !WideCharToMultiByte(0xFDE9u, 0, v14, -1, MultiByteStr, 1024, 0, 0) )
            break;
          sub_10229EA0((int)Src, Size, a4, a5 + 1);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
          if ( a4 )
            sub_1022ECB0("\"", 1u);
          v15 = KeyValuesSystem();
          strlen((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 16))(v15, *(_DWORD *)i));
          v16 = KeyValuesSystem();
          ArgList_4 = *(_DWORD *)i;
          v17 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 16))(v16);
          sub_10229BC0((int)Src, Size, a4, v17, ArgList_4);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\t\t\"", 4, Size);
          if ( a4 )
            sub_1022ECB0("\"\t\t\"", 4u);
          sub_10229F00(v31, (int)Src, Size, a4, MultiByteStr);
          if ( Src )
            goto LABEL_29;
          goto LABEL_30;
        case 6:
          DevMsg(1, "KeyValues::RecursiveSaveToFile: TODO, missing code for TYPE_COLOR.\n");
          break;
        case 7:
          sub_10229EA0((int)Src, Size, a4, a5 + 1);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"", 1, Size);
          if ( a4 )
            sub_1022ECB0("\"", 1u);
          v21 = KeyValuesSystem();
          Sizeb = strlen((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 16))(v21, *(_DWORD *)i));
          v22 = KeyValuesSystem();
          Srcb = (void *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v22 + 16))(v22, *(_DWORD *)i);
          if ( Src )
            (*(void (__thiscall **)(void *, void *, unsigned int, size_t))(*(_DWORD *)Src + 4))(Src, Srcb, Sizeb, Size);
          if ( a4 )
            sub_1022ECB0(Srcb, Sizeb);
          if ( Src )
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\t\t\"", 4, Size);
          if ( a4 )
            sub_1022ECB0("\"\t\t\"", 4u);
          sub_10228370(Buffer, 0x20u, "0x%016I64X", *(_QWORD *)*((_DWORD *)i + 1));
          v23 = strlen(Buffer);
          if ( Src )
            (*(void (__thiscall **)(void *, char *, size_t, size_t))(*(_DWORD *)Src + 4))(Src, Buffer, v23, Size);
          if ( a4 )
            sub_1022ECB0(Buffer, v23);
LABEL_28:
          if ( Src )
LABEL_29:
            (*(void (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "\"\n", 2, Size);
LABEL_30:
          if ( a4 )
            sub_1022ECB0("\"\n", 2u);
          break;
        default:
          break;
      }
    }
    v10 = *((_DWORD *)i + 5);
  }
  result = sub_10229EA0((int)Src, Size, a4, a5);
  if ( Src )
    result = (*(int (__thiscall **)(void *, const char *, int, size_t))(*(_DWORD *)Src + 4))(Src, "}\n", 2, Size);
  if ( a4 )
    return sub_1022ECB0("}\n", 2u);
  return result;
}
