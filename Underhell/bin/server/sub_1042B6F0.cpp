char *__thiscall sub_1042B6F0(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  char *result; // eax
  float *v9; // esi
  char *v10; // eax
  char *v11; // ebx
  unsigned int v12; // edi
  double v13; // st7
  size_t v14; // edi
  void *v15; // eax
  int v16; // ebx
  char *v17; // eax
  __int64 v18; // kr10_8
  char v19; // al
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // kr04_4
  char v25; // al
  unsigned __int64 v26; // kr08_8
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rcx
  __int64 *v30; // eax
  float *v31; // ecx
  int v32; // eax
  char *v33; // [esp+Ch] [ebp-28h] BYREF
  char *EndPtr; // [esp+10h] [ebp-24h] BYREF
  unsigned int v35; // [esp+14h] [ebp-20h]
  float *v36; // [esp+18h] [ebp-1Ch]
  int v37; // [esp+1Ch] [ebp-18h]
  int v38; // [esp+20h] [ebp-14h]
  _BYTE *v39; // [esp+24h] [ebp-10h]
  char *v40; // [esp+28h] [ebp-Ch]
  char *v41; // [esp+2Ch] [ebp-8h]
  bool v42; // [esp+31h] [ebp-3h]
  char v43; // [esp+32h] [ebp-2h] BYREF
  char v44; // [esp+33h] [ebp-1h] BYREF

  v3 = dword_1068E274;
  v4 = this;
  v39 = this;
  if ( dword_1068E274 < 64 )
  {
    dword_1068E170[dword_1068E274] = *(_DWORD *)this;
    v3 = dword_1068E274;
  }
  v5 = v3 + 1;
  dword_1068E274 = v5;
  if ( dword_1068E278 <= v5 - 1 )
    dword_1068E278 = v5 - 1;
  if ( v5 < 64 )
  {
    dword_1068E170[v5] = -1;
    v5 = dword_1068E274;
  }
  v6 = v5 + 1;
  v7 = v6 - 1;
  dword_1068E274 = v6;
  v38 = v6 - 1;
  if ( dword_1068E278 <= v6 - 1 )
    dword_1068E278 = v6 - 1;
  v42 = 1;
  result = sub_1042A090(this, a3, &v43, &v44);
  if ( result )
  {
    while ( 1 )
    {
      if ( !*result )
      {
        result = (char *)sub_10429FD0((int)dword_1068E170, "RecursiveLoadFromBuffer:  got empty keyname");
        goto LABEL_70;
      }
      if ( *result == 125 && !v43 )
        goto LABEL_70;
      v9 = (float *)sub_1042B3D0((int)v4, (int)result);
      dword_1068E170[v7] = *(_DWORD *)v9;
      v36 = v9;
      v10 = sub_1042A090(v4, a3, &v43, &v44);
      v11 = v10;
      v40 = v10;
      if ( v44 )
      {
        if ( !v10 )
          goto LABEL_67;
        v42 = _stricmp("[$WIN32]", v10) == 0;
        v40 = sub_1042A090(v4, a3, &v43, &v44);
        v11 = v40;
      }
      if ( !v11 )
      {
LABEL_67:
        result = (char *)sub_10429FD0((int)dword_1068E170, "RecursiveLoadFromBuffer:  got NULL key");
        goto LABEL_70;
      }
      if ( *v11 == 125 && !v43 )
      {
        result = (char *)sub_10429FD0((int)dword_1068E170, "RecursiveLoadFromBuffer:  got } in key");
        goto LABEL_70;
      }
      if ( *v11 == 123 && !v43 )
      {
        dword_1068E170[v38] = -1;
        sub_1042B6F0(a2, a3);
        goto LABEL_62;
      }
      if ( v44 )
      {
        result = (char *)sub_10429FD0(
                           (int)dword_1068E170,
                           "RecursiveLoadFromBuffer:  got conditional between key and value");
        goto LABEL_70;
      }
      if ( *((_DWORD *)v9 + 1) )
      {
        sub_10184660(*((_DWORD *)v9 + 1));
        v9[1] = 0.0;
      }
      v12 = strlen(v11);
      v35 = v12;
      v37 = strtol(v11, &v33, 10);
      v13 = strtod(v11, &EndPtr);
      if ( *v11 )
      {
        if ( v12 == 18 && *v11 == 48 && v11[1] == 120 )
        {
          v41 = v11 + 3;
          v37 = 4;
          v18 = 0;
          do
          {
            v19 = *(v41 - 1);
            if ( v19 < 97 )
            {
              if ( v19 >= 65 )
                v19 -= 7;
            }
            else
            {
              v19 -= 39;
            }
            v20 = v19 - 48;
            v21 = *v41;
            v22 = 16 * v18 + v20;
            if ( *v41 < 97 )
            {
              if ( v21 >= 65 )
                v21 -= 7;
            }
            else
            {
              v21 -= 39;
            }
            v23 = v21 - 48;
            v24 = v23;
            v25 = v41[1];
            v26 = 16 * v22 + __PAIR64__(HIDWORD(v23), v24);
            if ( v25 < 97 )
            {
              if ( v25 >= 65 )
                v25 -= 7;
            }
            else
            {
              v25 -= 39;
            }
            v27 = v25 - 48;
            v28 = v41[2];
            v29 = 16 * v26 + v27;
            if ( v28 < 97 )
            {
              if ( v28 >= 65 )
                v28 -= 7;
            }
            else
            {
              v28 -= 39;
            }
            v18 = 16 * v29 + v28 - 48;
            v41 += 4;
            --v37;
          }
          while ( v37 );
          v30 = (__int64 *)sub_10184390(8);
          v31 = v36;
          v11 = v40;
          *((_DWORD *)v36 + 1) = v30;
          *v30 = v18;
          v12 = v35;
          *((_BYTE *)v31 + 16) = 7;
          v9 = v31;
          goto LABEL_29;
        }
        if ( EndPtr > v33 && EndPtr == &v11[v12] )
        {
          v9[3] = v13;
          *((_BYTE *)v9 + 16) = 3;
          goto LABEL_29;
        }
        if ( v33 == &v11[v12] )
        {
          *((_DWORD *)v9 + 3) = v37;
          *((_BYTE *)v9 + 16) = 2;
          goto LABEL_29;
        }
      }
      *((_BYTE *)v9 + 16) = 1;
LABEL_29:
      if ( *((_BYTE *)v9 + 16) == 1 )
      {
        v14 = v12 + 1;
        v15 = (void *)sub_10184390(v14);
        *((_DWORD *)v9 + 1) = v15;
        memcpy_0(v15, v11, v14);
      }
      v16 = *(_DWORD *)(a3 + 12);
      v17 = sub_1042A090(v39, a3, &v43, &v44);
      if ( v44 )
        v42 = _stricmp("[$WIN32]", v17) == 0;
      else
        sub_1042D280(0, v16);
      v4 = v39;
LABEL_62:
      if ( !v42 )
      {
        sub_1042A290(v4, (int)v9);
        sub_1042B290((int *)v9);
        v32 = KeyValuesSystem();
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v32 + 8))(v32, v9);
      }
      v42 = 1;
      result = sub_1042A090(v4, a3, &v43, &v44);
      if ( !result )
        break;
      v7 = v38;
    }
  }
  result = (char *)sub_10429FD0((int)dword_1068E170, "RecursiveLoadFromBuffer:  got EOF instead of keyname");
LABEL_70:
  dword_1068E274 -= 2;
  return result;
}
