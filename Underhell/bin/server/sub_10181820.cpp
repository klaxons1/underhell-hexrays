void __cdecl sub_10181820(int a1, int a2, char a3)
{
  int v3; // edi
  int v4; // esi
  char **v5; // ebx
  char *v6; // eax
  int v7; // esi
  char *v8; // edi
  int v9; // eax
  int v10; // eax
  char **v11; // eax
  int v12; // ecx
  bool v13; // zf
  int *v14; // ebx
  int v15; // edi
  int v16; // esi
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  char *v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+2Ch] [ebp+10h]

  v3 = a1;
  if ( a1 > 0 )
  {
    v4 = 1;
    v18 = 1;
    v5 = (char **)(a2 + 8);
    v17 = a1;
    do
    {
      v6 = *(v5 - 2);
      v19 = v6;
      if ( *v5 )
      {
        v7 = dword_10700AC8;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
        v8 = *v5;
        v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)*v5 + 208))(*v5);
        if ( v9 )
          v10 = sub_100BEF30(v9, v5[1]);
        else
          v10 = -1;
        (*(void (__thiscall **)(char *, char *, int))(*(_DWORD *)v19 + 140))(v19, v8, v10);
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
        v3 = a1;
        v6 = v19;
        v4 = v18;
      }
      if ( v6 && sub_10260750(v6) < 0 )
      {
        if ( v4 < v3 )
        {
          v11 = v5 + 2;
          v12 = v3 - v4;
          do
          {
            if ( *v11 && ((*v11)[252] & 1) != 0 )
              *v11 = 0;
            v11 += 4;
            --v12;
          }
          while ( v12 );
        }
        sub_1012CE60();
        *(v5 - 2) = 0;
      }
      ++v4;
      v5 += 4;
      v13 = v17-- == 1;
      v18 = v4;
    }
    while ( !v13 );
  }
  if ( a3 )
  {
    LOBYTE(a1) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, 0);
    if ( v3 > 0 )
    {
      v14 = (int *)a2;
      v20 = v3;
      do
      {
        v15 = *v14;
        if ( *v14 )
        {
          v16 = dword_10700AC8;
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 136))(v15);
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
        }
        v14 += 4;
        --v20;
      }
      while ( v20 );
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, a1);
  }
}
