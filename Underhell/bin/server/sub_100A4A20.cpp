int __thiscall sub_100A4A20(int this)
{
  int v3; // edi
  int v4; // edi
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _WORD *v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _WORD *v16; // edi
  int v17; // edi
  __int16 v18; // ax
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  _WORD *v23; // eax
  const char *v24; // [esp+18h] [ebp-57Ch]
  char Src[1024]; // [esp+28h] [ebp-56Ch] BYREF
  char Buffer[128]; // [esp+428h] [ebp-16Ch] BYREF
  char Destination[128]; // [esp+4A8h] [ebp-ECh] BYREF
  int v28; // [esp+528h] [ebp-6Ch] BYREF
  int v29[2]; // [esp+52Ch] [ebp-68h] BYREF
  int v30; // [esp+534h] [ebp-60h]
  int v31; // [esp+538h] [ebp-5Ch]
  int v32; // [esp+53Ch] [ebp-58h]
  __int16 v33; // [esp+540h] [ebp-54h]
  __int16 v34; // [esp+542h] [ebp-52h]
  __int16 v35; // [esp+544h] [ebp-50h]
  __int16 v36; // [esp+546h] [ebp-4Eh]
  __int16 v37; // [esp+548h] [ebp-4Ch]
  __int16 v38; // [esp+54Ah] [ebp-4Ah]
  int v39; // [esp+54Ch] [ebp-48h]
  char v40; // [esp+550h] [ebp-44h]
  __int16 v41; // [esp+551h] [ebp-43h]
  __int16 v42; // [esp+553h] [ebp-41h]
  __int16 v43; // [esp+555h] [ebp-3Fh]
  char v44; // [esp+557h] [ebp-3Dh]
  char v45; // [esp+558h] [ebp-3Ch]
  int v46; // [esp+55Ch] [ebp-38h] BYREF
  int v47; // [esp+560h] [ebp-34h]
  int v48; // [esp+564h] [ebp-30h]
  int v49; // [esp+568h] [ebp-2Ch]
  int v50; // [esp+56Ch] [ebp-28h]
  int v51; // [esp+570h] [ebp-24h] BYREF
  int v52; // [esp+574h] [ebp-20h]
  int v53; // [esp+578h] [ebp-1Ch]
  int v54; // [esp+57Ch] [ebp-18h]
  int v55; // [esp+580h] [ebp-14h]
  char ArgList[4]; // [esp+584h] [ebp-10h]
  char v57; // [esp+588h] [ebp-Ch]
  int v58; // [esp+58Ch] [ebp-8h] BYREF
  char v59; // [esp+593h] [ebp-1h]

  sub_1009ACB0(this);
  sub_104299C0(Destination, (char *)(this + 116), 0x80u);
  sub_1009ACB0(this);
  if ( _stricmp((const char *)(this + 116), "{") )
    return sub_1009AEC0(this, "Expecting '{' in rule '%s', got '%s'\n", Destination, (const char *)(this + 116));
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  *(_DWORD *)ArgList = 0;
  v57 = v57 & 0xF8 | 4;
  v59 = 1;
  while ( 1 )
  {
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v3 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v3 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v3 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    if ( !_stricmp((const char *)(this + 116), "}") )
      break;
    if ( (int)strlen((const char *)(this + 116)) <= 0 )
    {
      sub_1009AEC0(this, "Expecting more tokens in rule '%s'\n", Destination);
      break;
    }
    if ( !_stricmp((const char *)(this + 116), "matchonce") )
    {
      v57 |= 2u;
    }
    else if ( !_stricmp((const char *)(this + 116), "applyContextToWorld") )
    {
      v57 |= 1u;
    }
    else if ( !_stricmp((const char *)(this + 116), "applyContext") )
    {
      sub_1009ACB0(this);
      v24 = (const char *)(this + 116);
      if ( *(_DWORD *)ArgList )
      {
        sub_1009A690(Src, "%s,%s", *(const char **)ArgList, v24);
        sub_1009A470(&v46, Src);
      }
      else
      {
        sub_1009A470(&v46, v24);
      }
    }
    else if ( !_stricmp((const char *)(this + 116), "response") )
    {
      while ( sub_1009AD20((_DWORD *)this) )
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
        if ( this == -116 )
        {
          v6 = -1;
        }
        else
        {
          v29[0] = 0;
          v29[1] = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v39 = 100;
          v33 = sub_10065220(0.0);
          v34 = v33;
          v35 = v33;
          v36 = v33;
          v37 = v33;
          v38 = v33;
          v41 = v33;
          v42 = v33;
          v40 = 0;
          v43 = 1;
          v44 = 1;
          v45 = v45 & 0xE0 | 1;
          v28 = this + 116;
          v5 = sub_1009CA60((_WORD *)(this + 4), (int)&v28);
          sub_1009CA00(v29);
          if ( v30 >= 0 && v29[0] )
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
          v6 = v5;
        }
        v58 = v6;
        if ( v6 == -1 )
        {
          v59 = 0;
          sub_1009AEC0(this, "No such response '%s' for rule '%s'\n", (const char *)(this + 116), Destination);
        }
        else
        {
          v7 = v54;
          v8 = v54;
          if ( v54 + 1 > v52 )
          {
            sub_1009A780(&v51, v54 - v52 + 1);
            v8 = v54;
          }
          v9 = v51;
          v54 = v8 + 1;
          v10 = v8 - v7;
          v55 = v51;
          if ( v10 > 0 )
          {
            memcpy((void *)(v51 + 2 * v7 + 2), (const void *)(v51 + 2 * v7), 2 * v10);
            v9 = v51;
          }
          v11 = (_WORD *)(v9 + 2 * v7);
          if ( v11 )
            *v11 = v58;
        }
      }
    }
    else if ( !_stricmp((const char *)(this + 116), "criteria") || !_stricmp((const char *)(this + 116), "criterion") )
    {
      while ( sub_1009AD20((_DWORD *)this) )
      {
        if ( *(_BYTE *)(this + 1320) )
        {
          *(_BYTE *)(this + 1320) = 0;
        }
        else if ( *(int *)(this + 1336) > 0 )
        {
          v17 = *(_DWORD *)(this + 1324);
          *(_DWORD *)(v17 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                   dword_106B31D0,
                                   *(_DWORD *)(v17 + 8),
                                   this + 116,
                                   1204);
          ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
        }
        v58 = this + 116;
        if ( this == -116 )
          v18 = -1;
        else
          v18 = sub_100A2200((_WORD *)(this + 32), &v58);
        v58 = v18;
        if ( v18 == -1 )
        {
          v59 = 0;
          sub_1009AEC0(this, "No such criterion '%s' for rule '%s'\n", (const char *)(this + 116), Destination);
        }
        else
        {
          v19 = v49;
          v20 = v49;
          if ( v49 + 1 > v47 )
          {
            sub_1009A780(&v46, v49 - v47 + 1);
            v20 = v49;
          }
          v21 = v46;
          v49 = v20 + 1;
          v22 = v20 - v19;
          v50 = v46;
          if ( v22 > 0 )
          {
            memcpy((void *)(v46 + 2 * v19 + 2), (const void *)(v46 + 2 * v19), 2 * v22);
            v21 = v46;
          }
          v23 = (_WORD *)(v21 + 2 * v19);
          if ( v23 )
            *v23 = v58;
        }
      }
    }
    else
    {
      ++dword_10694170;
      sub_10429A00(Buffer, 0x80u, "[%s%03i]", (char)Destination);
      *(_BYTE *)(this + 1320) = 1;
      v58 = sub_100A4600(this, Buffer);
      if ( v58 != -1 )
      {
        v12 = v49;
        v13 = v49;
        if ( v49 + 1 > v47 )
        {
          sub_1009A780(&v46, v49 - v47 + 1);
          v13 = v49;
        }
        v14 = v46;
        v49 = v13 + 1;
        v15 = v13 - v12;
        v50 = v46;
        if ( v15 > 0 )
        {
          memcpy((void *)(v46 + 2 * v12 + 2), (const void *)(v46 + 2 * v12), 2 * v15);
          v14 = v46;
        }
        v16 = (_WORD *)(v14 + 2 * v12);
        if ( v16 )
          *v16 = v58;
      }
    }
  }
  if ( v59 )
    sub_100A45A0((void *)(this + 60), Destination, &v46);
  else
    DevMsg("Discarded rule %s\n", Destination);
  sub_10184660(*(_DWORD *)ArgList);
  sub_102375F0(&v51);
  return sub_102375F0(&v46);
}
