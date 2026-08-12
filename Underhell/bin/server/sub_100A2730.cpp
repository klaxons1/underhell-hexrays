_WORD *__thiscall sub_100A2730(void *this, int a2, int a3)
{
  char *v3; // eax
  _WORD *result; // eax
  int v5; // edx
  char *v6; // esi
  int v7; // edi
  char v8; // bl
  int v9; // ecx
  char v10; // al
  char Source[128]; // [esp+0h] [ebp-10Ch] BYREF
  char String[128]; // [esp+80h] [ebp-8Ch] BYREF
  int v13; // [esp+100h] [ebp-Ch]
  char *v14; // [esp+104h] [ebp-8h]
  char v15; // [esp+109h] [ebp-3h]
  char v16; // [esp+10Ah] [ebp-2h]
  char v17; // [esp+10Bh] [ebp-1h]
  char v18; // [esp+117h] [ebp+Bh]

  v3 = *(char **)(a2 + 4);
  v13 = (int)this;
  if ( v3 )
  {
    v5 = 0;
    v6 = v3;
    v7 = a3;
    v14 = v3;
    String[0] = 0;
    Source[0] = 0;
    v16 = 0;
    v18 = 0;
    v8 = 0;
    v17 = 0;
    v15 = 0;
    do
    {
      switch ( *v6 )
      {
        case 0:
        case 44:
          v9 = v13;
          Source[v5] = 0;
          a3 = 0;
          sub_100A2690(v9, v7, String, 0x80u, Source);
          if ( v16 )
          {
            *(_BYTE *)(v7 + 8) = *(_BYTE *)(v7 + 8) ^ (*(_BYTE *)(v7 + 8) ^ (16 * v8)) & 0x10 | 8;
            *(float *)(v7 + 4) = atof(String);
            *(_BYTE *)(v7 + 8) |= 2u;
          }
          else if ( v18 )
          {
            *(_BYTE *)(v7 + 8) = *(_BYTE *)(v7 + 8) ^ (*(_BYTE *)(v7 + 8) ^ (v8 << 6)) & 0x40 | 0x20;
            *(float *)v7 = atof(String);
            *(_BYTE *)(v7 + 8) |= 2u;
          }
          else
          {
            *(_BYTE *)(v7 + 8) ^= (*(_BYTE *)(v7 + 8) ^ (4 * v17)) & 4;
            v10 = sub_1009A4D0(String);
            v6 = v14;
            *(_BYTE *)(v7 + 8) ^= (*(_BYTE *)(v7 + 8) ^ (2 * v10)) & 2;
          }
          v5 = a3;
          v8 = 0;
          v17 = 0;
          v18 = 0;
          v16 = 0;
          if ( !*v6 )
            v15 = 1;
          break;
        case 33:
          v17 = 1;
          break;
        case 60:
          v18 = 1;
          break;
        case 61:
          v8 = 1;
          break;
        case 62:
          v16 = 1;
          break;
        default:
          Source[v5++] = *v6;
          break;
      }
      v14 = ++v6;
    }
    while ( !v15 );
    *(_WORD *)(v7 + 9) = *(_WORD *)sub_1042F910((int)&a3 + 2, String);
    result = (_WORD *)sub_1042F910((int)&a3 + 2, Source);
    *(_WORD *)(v7 + 11) = *result;
    *(_BYTE *)(v7 + 8) |= 1u;
  }
  else
  {
    result = (_WORD *)a3;
    *(_BYTE *)(a3 + 8) &= ~1u;
  }
  return result;
}
