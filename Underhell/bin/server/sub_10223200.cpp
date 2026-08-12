char __cdecl sub_10223200(int a1, int a2, int a3, char *String2, char *Destination, size_t Count)
{
  int v6; // esi
  int v7; // edi
  int *v8; // esi
  char result; // al
  int v10; // eax
  double ArgList; // [esp+0h] [ebp-1Ch]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v12 = 0;
  if ( a3 <= 0 )
    return 0;
  v6 = a2 + 20;
  v13 = a2 + 20;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v6 - 12);
    if ( *(_DWORD *)(v6 - 20) == 10 && *(_WORD *)(v6 - 4) == 1 )
      break;
LABEL_9:
    if ( (*(_BYTE *)(v6 - 2) & 4) != 0 && !_stricmp(*(const char **)v6, String2) )
    {
      switch ( *(_DWORD *)(v6 - 20) )
      {
        case 1:
        case 0x10:
          ArgList = *(float *)(v7 + a1);
          sub_10429A00(Destination, Count, "%f", SLOBYTE(ArgList));
          return 1;
        case 2:
        case 0x12:
        case 0x13:
          sub_104299C0(Destination, (char *)(a1 + v7), Count);
          return 1;
        case 3:
        case 0xF:
          sub_10429A00(Destination, Count, "%f %f %f", *(_BYTE *)(v7 + a1));
          return 1;
        case 5:
        case 0x11:
          v10 = *(_DWORD *)(v7 + a1);
          goto LABEL_19;
        case 6:
          LOBYTE(v10) = *(_BYTE *)(v7 + a1) != 0;
          goto LABEL_19;
        case 7:
          LOWORD(v10) = *(_WORD *)(v7 + a1);
          goto LABEL_19;
        case 8:
          LOBYTE(v10) = *(_BYTE *)(v7 + a1);
LABEL_19:
          sub_10429A00(Destination, Count, "%d", v10);
          result = 1;
          break;
        case 9:
          sub_10429A00(Destination, Count, "%d %d %d %d", *(_BYTE *)(v7 + a1));
          result = 1;
          break;
        case 0xB:
        case 0x16:
        case 0x17:
        case 0x18:
          return 0;
        default:
          Warning("Bad field in entity!!\n");
          goto LABEL_13;
      }
      return result;
    }
LABEL_13:
    v6 += 52;
    ++v12;
    v13 = v6;
    if ( v12 >= a3 )
      return 0;
  }
  v8 = *(int **)(v6 + 12);
  if ( !v8 )
  {
LABEL_8:
    v6 = v13;
    goto LABEL_9;
  }
  while ( !(unsigned __int8)sub_10223200(v7 + a1, *v8, v8[1], String2, Destination, Count) )
  {
    v8 = (int *)v8[3];
    if ( !v8 )
      goto LABEL_8;
  }
  return 1;
}
