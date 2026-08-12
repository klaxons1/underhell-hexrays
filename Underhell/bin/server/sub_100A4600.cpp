int __thiscall sub_100A4600(int this, const char *ArgList)
{
  __int16 v3; // ax
  int v4; // edi
  int v5; // edi
  __int16 v6; // di
  int v7; // eax
  __int16 v8; // ax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _WORD *v13; // edi
  size_t v14; // kr00_4
  const char *v15; // eax
  size_t v16; // kr04_4
  void *v17; // eax
  const char *v18; // edi
  int v20; // esi
  float v21; // [esp+Ch] [ebp-178h]
  char Destination[128]; // [esp+1Ch] [ebp-168h] BYREF
  char Src[128]; // [esp+9Ch] [ebp-E8h] BYREF
  int v24; // [esp+11Ch] [ebp-68h] BYREF
  int v25; // [esp+120h] [ebp-64h]
  int v26; // [esp+124h] [ebp-60h]
  __int16 v27; // [esp+128h] [ebp-5Ch]
  char v28; // [esp+12Ah] [ebp-5Ah]
  float v29; // [esp+12Bh] [ebp-59h]
  float v30; // [esp+12Fh] [ebp-55h]
  char v31; // [esp+133h] [ebp-51h]
  int v32; // [esp+134h] [ebp-50h]
  int v33; // [esp+138h] [ebp-4Ch]
  int v34; // [esp+13Ch] [ebp-48h]
  int v35; // [esp+140h] [ebp-44h]
  int v36; // [esp+144h] [ebp-40h]
  int v37; // [esp+148h] [ebp-3Ch]
  const char *v38; // [esp+14Ch] [ebp-38h] BYREF
  void *v39; // [esp+150h] [ebp-34h]
  __int16 v40; // [esp+154h] [ebp-30h]
  char v41; // [esp+156h] [ebp-2Eh]
  float v42[2]; // [esp+157h] [ebp-2Dh] BYREF
  char v43; // [esp+15Fh] [ebp-25h]
  int v44; // [esp+160h] [ebp-24h]
  int v45; // [esp+164h] [ebp-20h] BYREF
  int v46; // [esp+168h] [ebp-1Ch]
  int v47; // [esp+16Ch] [ebp-18h]
  int v48; // [esp+170h] [ebp-14h]
  int v49; // [esp+174h] [ebp-10h]
  __int16 v50; // [esp+17Ah] [ebp-Ah]
  void *v51; // [esp+17Ch] [ebp-8h]
  char v52; // [esp+183h] [ebp-1h]

  v42[0] = 0.0;
  v42[1] = 0.0;
  v43 &= 0x80u;
  v44 = -1;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v38 = 0;
  v39 = 0;
  v3 = sub_10065220(1.0);
  v50 = v3;
  v41 = 0;
  v52 = 0;
LABEL_2:
  v40 = v3;
  while ( sub_1009AD20((_DWORD *)this) || !v52 )
  {
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v4 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v4 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v4 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    if ( sub_1009A600((const char *)this) )
    {
      *(_BYTE *)(this + 1320) = 1;
      break;
    }
    if ( !_stricmp((const char *)(this + 116), "{") )
    {
      v52 = 1;
      while ( 1 )
      {
        if ( *(_BYTE *)(this + 1320) )
        {
          *(_BYTE *)(this + 1320) = 0;
        }
        else if ( *(int *)(this + 1336) > 0 )
        {
          v5 = *(_DWORD *)(this + 1324);
          *(_DWORD *)(v5 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                  dword_106B31D0,
                                  *(_DWORD *)(v5 + 8),
                                  this + 116,
                                  1204);
          ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
        }
        if ( !_stricmp((const char *)(this + 116), "}") )
          break;
        if ( this == -116 )
        {
          v8 = -1;
        }
        else
        {
          v29 = 0.0;
          v30 = 0.0;
          v31 &= 0x80u;
          v32 = -1;
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v25 = 0;
          v26 = 0;
          v27 = v50;
          v28 = 0;
          v24 = this + 116;
          v6 = sub_1009CE50((_WORD *)(this + 32), (int)&v24);
          sub_10184660(v25);
          sub_10184660(v26);
          v7 = v33;
          v36 = 0;
          if ( v35 >= 0 )
          {
            if ( v33 )
            {
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v33);
              v7 = 0;
              v33 = 0;
            }
            v34 = 0;
          }
          v37 = v7;
          if ( v35 >= 0 && v7 )
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
          v8 = v6;
        }
        v51 = (void *)v8;
        if ( v8 == -1 )
        {
          sub_1009AEC0(this, "Skipping unrecongized subcriterion '%s' in '%s'\n", (const char *)(this + 116), ArgList);
        }
        else
        {
          v9 = v48;
          v10 = v48;
          if ( v48 + 1 > v46 )
          {
            sub_1009A780(&v45, v48 - v46 + 1);
            v10 = v48;
          }
          v11 = v45;
          v48 = v10 + 1;
          v12 = v10 - v9;
          v49 = v45;
          if ( v12 > 0 )
          {
            memcpy((void *)(v45 + 2 * v9 + 2), (const void *)(v45 + 2 * v9), 2 * v12);
            v11 = v45;
          }
          v13 = (_WORD *)(v11 + 2 * v9);
          if ( v13 )
            *v13 = (_WORD)v51;
        }
      }
    }
    else if ( !_stricmp((const char *)(this + 116), "required") )
    {
      v41 = 1;
    }
    else
    {
      if ( !_stricmp((const char *)(this + 116), "weight") )
      {
        sub_1009ACB0(this);
        v21 = atof((const char *)(this + 116));
        v3 = sub_10065220(v21);
        goto LABEL_2;
      }
      sub_104299C0(Src, (char *)(this + 116), 0x80u);
      sub_1009ACB0(this);
      sub_104299C0(Destination, (char *)(this + 116), 0x80u);
      v14 = strlen(Src);
      v51 = (void *)sub_10184390(v14 + 1);
      memcpy_0(v51, Src, v14);
      v15 = (const char *)v51;
      *((_BYTE *)v51 + v14) = 0;
      v38 = v15;
      v16 = strlen(Destination);
      v51 = (void *)sub_10184390(v16 + 1);
      memcpy_0(v51, Destination, v16);
      v17 = v51;
      *((_BYTE *)v51 + v16) = 0;
      v39 = v17;
      v52 = 1;
    }
  }
  if ( v48 <= 0 )
    sub_100A2730((void *)this, (int)&v38, (int)v42);
  v18 = ArgList;
  if ( !ArgList || sub_100A2200((_WORD *)(this + 32), (int *)&ArgList) == -1 )
  {
    v20 = sub_100A4540((void *)(this + 32), v18, &v38);
    sub_10184660(v38);
    sub_10184660(v39);
    sub_102375F0(&v45);
    return v20;
  }
  else
  {
    sub_1009AEC0(this, "Multiple definitions for criteria '%s'\n", v18);
    sub_10184660(v38);
    sub_10184660(v39);
    sub_102375F0(&v45);
    return -1;
  }
}
