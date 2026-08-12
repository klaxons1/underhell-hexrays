int __thiscall sub_10237AF0(_DWORD *this)
{
  _DWORD *v1; // edi
  char *v2; // eax
  int *v3; // esi
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // edx
  char v7; // cl
  const char *v8; // ecx
  bool v9; // zf
  const char *v10; // esi
  char v11; // al
  int v12; // eax
  int v13; // ebx
  const char **v14; // edi
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  const char *v23; // ecx
  _BYTE *v24; // edx
  char v25; // al
  int v26; // ebx
  int v27; // esi
  const char **v28; // edi
  int v29; // eax
  _DWORD *v30; // esi
  int v31; // ecx
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int *v36; // eax
  _BYTE *v37; // edx
  const char *v38; // ecx
  char v39; // al
  char *v40; // eax
  char v42[260]; // [esp+4h] [ebp-528h] BYREF
  char Buffer[260]; // [esp+108h] [ebp-424h] BYREF
  _BYTE v44[252]; // [esp+20Ch] [ebp-320h] BYREF
  int v45; // [esp+308h] [ebp-224h] BYREF
  char v46[260]; // [esp+30Ch] [ebp-220h] BYREF
  char Destination[260]; // [esp+410h] [ebp-11Ch] BYREF
  int *i; // [esp+514h] [ebp-18h]
  int v49; // [esp+518h] [ebp-14h] BYREF
  int v50; // [esp+51Ch] [ebp-10h]
  const char *v51; // [esp+520h] [ebp-Ch]
  _DWORD *v52; // [esp+524h] [ebp-8h]
  const char *v53; // [esp+528h] [ebp-4h]

  v1 = this;
  v52 = this;
  memset(Destination, 0, sizeof(Destination));
  sub_10429A00(Buffer, 0x104u, "materials/vgui/%s/*.vmt", (_BYTE)this - 95);
  v2 = (char *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)dword_10700A38 + 108))(
                 dword_10700A38,
                 Buffer,
                 &v49);
  if ( v2 )
    sub_104299C0(Destination, v2, 0x104u);
  if ( Destination[0] )
  {
    v3 = &v45;
    for ( i = &v45; ; v3 = i )
    {
      sub_10429A00(v46, 0x104u, "vgui/%s/%s", (_BYTE)v1 - 95);
      *((_BYTE *)v3 + strlen(v46)) = 0;
      sub_10154360((int)v46);
      sub_10429A00(v42, 0x104u, "materials/vgui/%s/%s", (_BYTE)v1 - 95);
      if ( sub_1042A310(32) )
        sub_1042A330("material");
      if ( dword_10700A38 )
        v4 = dword_10700A38 + 4;
      else
        v4 = 0;
      if ( (unsigned __int8)sub_1042A380(v4, v42, 0) )
      {
        v5 = sub_1042B460("%keywords", (int)String);
        v6 = &v44[-v5];
        do
        {
          v7 = *(_BYTE *)v5;
          v6[v5] = *(_BYTE *)v5;
          ++v5;
        }
        while ( v7 );
        v8 = v44;
        v51 = v44;
        if ( v44[0] )
        {
          while ( 1 )
          {
            v9 = *v8 == 0;
            v10 = v8;
            v53 = v8;
            if ( !v9 )
            {
              do
              {
                if ( *v10 == 44 )
                  break;
                ++v10;
              }
              while ( *v10 );
              v53 = v10;
            }
            if ( *v10 )
            {
              *v10 = 0;
              v11 = *++v10;
              v53 = v10;
              if ( v11 )
              {
                do
                {
                  if ( v11 != 44 && v11 != 32 )
                    break;
                  v11 = *++v10;
                }
                while ( v11 );
                v53 = v10;
              }
            }
            v12 = v1[269];
            v13 = 0;
            v50 = v12;
            if ( v12 > 0 )
            {
              v14 = (const char **)v1[266];
              while ( strcmp(*v14, v8) )
              {
                ++v13;
                ++v14;
                if ( v13 >= v50 )
                  break;
                v8 = v51;
              }
              v12 = v50;
              v1 = v52;
            }
            if ( v13 >= v12 )
            {
              v15 = sub_10184390(64);
              v16 = v52;
              v17 = v52[269];
              v18 = v15;
              v19 = v52[267];
              if ( v17 + 1 > v19 )
                sub_102ABFC0(v17 - v19 + 1);
              ++v16[269];
              v20 = v16[266];
              v21 = v16[269] - v17 - 1;
              v16[270] = v20;
              if ( v21 > 0 )
                memcpy((void *)(v20 + 4 * v17 + 4), (const void *)(v20 + 4 * v17), 4 * v21);
              v22 = (int *)(4 * v17 + v16[266]);
              if ( v22 )
                *v22 = v18;
              v23 = v51;
              v24 = *(_BYTE **)(4 * v17 + v16[266]);
              do
              {
                v25 = *v23;
                *v24++ = *v23++;
              }
              while ( v25 );
              v10 = v53;
              v1 = v52;
            }
            v9 = *v10 == 0;
            v51 = v10;
            if ( v9 )
              break;
            v8 = v51;
          }
        }
      }
      v26 = v1[269];
      v27 = 0;
      if ( v26 > 0 )
      {
        v28 = (const char **)v1[266];
        do
        {
          if ( !strcmp(*v28, String) )
            break;
          ++v27;
          ++v28;
        }
        while ( v27 < v26 );
        v1 = v52;
      }
      if ( v27 >= v26 )
      {
        v29 = sub_10184390(64);
        v30 = v52;
        v31 = v52[267];
        v32 = v29;
        v33 = v52[269];
        if ( v33 + 1 > v31 )
          sub_102ABFC0(v33 - v31 + 1);
        ++v30[269];
        v34 = v30[266];
        v35 = v30[269] - 1;
        v30[270] = v34;
        if ( v35 > 0 )
          memcpy((void *)(v34 + 4), (const void *)v34, 4 * v35);
        v36 = (int *)v30[266];
        if ( v36 )
          *v36 = v32;
        v37 = *(_BYTE **)v30[266];
        v38 = String;
        do
        {
          v39 = *v38;
          *v37++ = *v38++;
        }
        while ( v39 );
        v1 = v30;
      }
      v40 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 112))(dword_10700A38, v49);
      if ( !v40 )
        break;
      sub_104299C0(Destination, v40, 0x104u);
      if ( !Destination[0] )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 120))(dword_10700A38, v49);
    }
    Destination[0] = 0;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 120))(dword_10700A38, v49);
}
