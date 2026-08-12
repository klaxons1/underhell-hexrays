char __usercall sub_1027CEA0@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int i; // eax
  int v7; // ebp
  int v8; // eax
  _WORD *v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  bool v13; // cc
  unsigned __int16 *v14; // esi
  int v15; // edi
  unsigned __int16 v16; // ax
  int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+28h] [ebp-Ch]
  int v22; // [esp+2Ch] [ebp-8h]
  int v23; // [esp+30h] [ebp-4h] BYREF

  v3 = a1;
  *(_BYTE *)(a1 + 52) &= ~1u;
  LOBYTE(v4) = *(_BYTE *)(a1 + 52);
  *(_DWORD *)(a1 + 48) = 0;
  if ( (v4 & 2) == 0 && !*(_BYTE *)(a1 + 76) )
  {
    v4 = (int)wcschr(*(const wchar_t **)(a1 + 24), 0xAu);
    if ( !v4 )
    {
      if ( !*(_DWORD *)(v3 + 40) )
        (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 12))(v3, v3 + 40, &v23);
      v5 = 0;
      v21 = 0;
      v4 = ((*(_BYTE *)(v3 + 52) & 4) != 0) + 1;
      if ( v4 > 0 )
      {
        for ( i = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 132))(v3, a2, a3);
              ;
              i = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 132))(v3, v7, 46) )
        {
          v7 = i;
          if ( v5 == 1 )
          {
            v8 = *(_DWORD *)(v3 + 36);
            if ( v8 )
            {
              *(_BYTE *)(v3 + 52) |= 8u;
              *(_DWORD *)(v3 + 48) = 0;
              v7 = v8;
            }
          }
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C);
          v20 = 0;
          v9 = *(_WORD **)(v3 + 24);
          v10 = 3 * v4;
          LOWORD(v4) = *v9;
          v22 = v10;
          if ( *v9 )
            break;
LABEL_28:
          if ( *(_DWORD *)(v3 + 48) )
          {
            v5 = v21 + 1;
            v21 = v5;
            if ( v5 < ((*(_BYTE *)(v3 + 52) & 4) != 0) + 1 )
              continue;
          }
          return v4;
        }
        while ( 1 )
        {
          if ( (_WORD)v4 != 13 )
          {
            if ( (_WORD)v4 == 38 )
            {
              if ( v9[1] != 38 )
                goto LABEL_25;
              ++v9;
            }
            if ( v9 != *(_WORD **)(v3 + 24) )
            {
              v11 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                      dword_1047CA6C,
                      v7,
                      (unsigned __int16)v4);
              v12 = v11 + v20;
              v13 = v11 + v20 + v22 <= *(_DWORD *)(v3 + 40);
              v23 = v11 + v20;
              if ( !v13 )
              {
                v14 = v9 + 1;
                v15 = v11;
                v16 = v9[1];
                if ( v16 )
                {
                  do
                  {
                    ++v14;
                    v15 += (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                             dword_1047CA6C,
                             v7,
                             v16);
                    v16 = *v14;
                  }
                  while ( *v14 );
                  v12 = v23;
                }
                LOBYTE(v4) = a1 + 40;
                if ( v20 + v15 > *(_DWORD *)(a1 + 40) )
                {
                  *(_DWORD *)(a1 + 48) = v9;
                  v3 = a1;
                  goto LABEL_28;
                }
                v3 = a1;
              }
              v20 = v12;
            }
          }
LABEL_25:
          LOWORD(v4) = v9[1];
          ++v9;
          if ( !(_WORD)v4 )
            goto LABEL_28;
        }
      }
    }
  }
  return v4;
}
