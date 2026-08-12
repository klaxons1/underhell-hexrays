void __userpurge sub_10187480(unsigned int a1@<ecx>, int a2@<esi>, int a3)
{
  double v4; // st7
  const char *v5; // eax
  char *v6; // ebx
  char *v7; // ecx
  int v8; // eax
  int *v9; // ecx
  unsigned int v10; // edx
  int *v11; // ecx
  __int64 v12; // [esp+18h] [ebp-2Ch]
  char v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+34h] [ebp-10h]
  int v15; // [esp+34h] [ebp-10h]
  int v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+38h] [ebp-Ch] BYREF
  char *String1; // [esp+3Ch] [ebp-8h] BYREF
  char v19; // [esp+43h] [ebp-1h]

  if ( *(_DWORD *)(a1 + 944) || (v4 = *(float *)(a1 + 932), v19 = 1, v4 <= 0.1) )
    v19 = 0;
  while ( a3 )
  {
    --a3;
    if ( v19 )
    {
      if ( sub_10186050(a1, 1) )
      {
        v5 = *(const char **)(a1 + 940);
        String1 = 0;
        if ( !v5 )
          v5 = String;
        sub_101812F0(a1, a2, (int *)&String1, (int)v5, 0);
        v6 = String1;
        if ( String1 )
        {
          if ( sub_10185E70(a1, (int)String1) )
          {
            v7 = String1;
            v17 = -1;
            if ( String1 )
            {
              v17 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)String1 + 8))(String1);
              v7 = String1;
            }
            else
            {
              v17 = -1;
            }
            v14 = (int)v7;
            sub_1010C270((float *)(a1 + 812), 13, (__int16 *)&v17);
            sub_1010DA50(
              (_DWORD *)(a1 + 812),
              *(_DWORD *)(a1 + 812),
              *(_DWORD *)(a1 + 816),
              *(_DWORD *)(a1 + 820),
              *(_DWORD *)(a1 + 824),
              *(_DWORD *)(a1 + 828),
              __SPAIR64__(a1, v14),
              0.0);
            v8 = *((_DWORD *)v6 + 62) | 4;
            v15 = v8;
            if ( *((_DWORD *)v6 + 62) != v8 )
            {
              if ( v6[84] )
              {
                v6[88] |= 1u;
              }
              else
              {
                v9 = (int *)*((_DWORD *)v6 + 6);
                if ( v9 )
                {
                  sub_100194B0(v9, 248);
                  v8 = v15;
                }
              }
              *((_DWORD *)v6 + 62) = v8;
            }
            v10 = *((_DWORD *)v6 + 62) & 0xFFFFF7FF;
            v16 = v10;
            if ( *((_DWORD *)v6 + 62) != v10 )
            {
              if ( v6[84] )
              {
                v6[88] |= 1u;
              }
              else
              {
                v11 = (int *)*((_DWORD *)v6 + 6);
                if ( v11 )
                {
                  sub_100194B0(v11, 248);
                  v10 = v16;
                }
              }
              *((_DWORD *)v6 + 62) = v10;
            }
            (*(void (__thiscall **)(unsigned int, char *))(*(_DWORD *)a1 + 724))(a1, v6);
            sub_10260750(v6);
            (*(void (__thiscall **)(char *, unsigned int))(*(_DWORD *)v6 + 76))(v6, a1);
            v13 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, 0);
            (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 136))(v6);
            (*(void (__thiscall **)(int, int, char))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, v13);
            (*(void (__thiscall **)(unsigned int, char *))(*(_DWORD *)a1 + 728))(a1, v6);
            ++*(_DWORD *)(a1 + 908);
            if ( (*(_BYTE *)(a1 + 248) & 0x20) == 0 )
            {
              if ( *(int *)(dword_106B3E7C + 48) < 3 )
                --*(_DWORD *)(a1 + 800);
              else
                --*(_DWORD *)(a1 + 804);
              if ( (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 740))(a1) )
              {
                HIDWORD(v12) = a1;
                LODWORD(v12) = a1;
                sub_1010DD80((_DWORD *)(a1 + 836), v12, 0.0);
                sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
                *(_DWORD *)(a1 + 200) = 0;
              }
            }
          }
          else
          {
            sub_1025FAE0(v6);
          }
        }
        else
        {
          Warning("NULL Ent in NPCMaker!\n");
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 720))(a1);
    }
  }
}
