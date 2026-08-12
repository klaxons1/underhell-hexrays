char __cdecl sub_10222FD0(int a1, int a2, int a3, char *String2, char *String)
{
  int v5; // esi
  int v6; // edi
  int *v7; // esi
  char result; // al
  int v9; // eax
  _DWORD v10[3]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v12 = 0;
  if ( a3 <= 0 )
    return 0;
  v5 = a2 + 20;
  v13 = a2 + 20;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 - 12);
    if ( *(_DWORD *)(v5 - 20) == 10 && *(_WORD *)(v5 - 4) == 1 )
      break;
LABEL_9:
    if ( (*(_BYTE *)(v5 - 2) & 4) != 0 && !_stricmp(*(const char **)v5, String2) )
    {
      switch ( *(_DWORD *)(v5 - 20) )
      {
        case 1:
        case 0x10:
          *(float *)(v6 + a1) = atof(String);
          result = 1;
          break;
        case 2:
        case 0x12:
        case 0x13:
          *(_DWORD *)(v6 + a1) = *sub_10162BE0(&v11, String);
          return 1;
        case 3:
        case 0xF:
          sub_10264F10(a1 + v6, String);
          result = 1;
          break;
        case 5:
        case 0x11:
          *(_DWORD *)(v6 + a1) = atoi(String);
          result = 1;
          break;
        case 6:
          *(_BYTE *)(v6 + a1) = atoi(String) != 0;
          result = 1;
          break;
        case 7:
          *(_WORD *)(v6 + a1) = atoi(String);
          result = 1;
          break;
        case 8:
          *(_BYTE *)(v6 + a1) = atoi(String);
          result = 1;
          break;
        case 9:
          sub_10264FB0(a1 + v6, String);
          result = 1;
          break;
        case 0xB:
          v10[1] = a1;
          v10[2] = v5 - 20;
          v9 = *(_DWORD *)(v5 - 20 + 24);
          v10[0] = a1 + v6;
          (*(void (__thiscall **)(int, _DWORD *, char *))(*(_DWORD *)v9 + 16))(v9, v10, String);
          result = 1;
          break;
        case 0x16:
        case 0x17:
          sub_10264E70(a1 + v6, 16, String);
          result = 1;
          break;
        case 0x18:
          sub_10264E70(a1 + v6, 12, String);
          result = 1;
          break;
        default:
          Warning("Bad field in entity!!\n");
          goto LABEL_13;
      }
      return result;
    }
LABEL_13:
    v5 += 52;
    ++v12;
    v13 = v5;
    if ( v12 >= a3 )
      return 0;
  }
  v7 = *(int **)(v5 + 12);
  if ( !v7 )
  {
LABEL_8:
    v5 = v13;
    goto LABEL_9;
  }
  while ( !(unsigned __int8)sub_10222FD0(v6 + a1, *v7, v7[1], String2, String) )
  {
    v7 = (int *)v7[3];
    if ( !v7 )
      goto LABEL_8;
  }
  return 1;
}
