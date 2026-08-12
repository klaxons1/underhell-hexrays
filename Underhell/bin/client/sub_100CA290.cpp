char __userpurge sub_100CA290@<al>(int a1@<ecx>, int a2@<ebx>, char *a3)
{
  int v4; // esi
  int v5; // ecx
  char *v7; // eax
  int v8; // edi
  char v9; // cl
  wchar_t *v10; // eax
  wchar_t *v11; // edx
  wchar_t *v12; // esi
  wchar_t *v14; // esi
  wchar_t *v15; // eax
  size_t v16; // edi
  wchar_t *v17; // eax
  wchar_t v18; // cx
  int v19; // eax
  _DWORD *v20; // ebx
  int v21; // esi
  char *v22; // eax
  const char *v23; // eax
  const unsigned __int16 *v24; // eax
  void (__thiscall *v25)(int, const unsigned __int16 *, _DWORD, char *); // eax
  void (__thiscall *v26)(int); // edx
  int v27; // edi
  _DWORD *v28; // ebx
  int v29; // edi
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int *v33; // edi
  wchar_t *v34; // edi
  int v35; // ebx
  int v36; // esi
  int v37; // eax
  int v38; // edi
  int v39; // ebx
  int v40; // esi
  int v41; // eax
  int v42; // ebx
  double v43; // st7
  int v44; // esi
  int v45; // kr00_4
  int v46; // edi
  char v47; // al
  int v48; // edi
  int v49; // eax
  int v50; // eax
  const unsigned __int16 *v51; // [esp-Ch] [ebp-134h]
  int v52; // [esp-4h] [ebp-12Ch]
  int v53; // [esp-4h] [ebp-12Ch]
  int v54; // [esp-4h] [ebp-12Ch]
  wchar_t Destination[64]; // [esp+8h] [ebp-120h] BYREF
  char String; // [esp+88h] [ebp-A0h] BYREF
  char v57[63]; // [esp+89h] [ebp-9Fh] BYREF
  char v58; // [esp+C8h] [ebp-60h] BYREF
  char v59; // [esp+C9h] [ebp-5Fh] BYREF
  int v60; // [esp+108h] [ebp-20h]
  int v61; // [esp+10Ch] [ebp-1Ch] BYREF
  int v62; // [esp+110h] [ebp-18h] BYREF
  int v63; // [esp+114h] [ebp-14h] BYREF
  int v64; // [esp+118h] [ebp-10h]
  char v65; // [esp+11Fh] [ebp-9h]
  wchar_t *Source; // [esp+120h] [ebp-8h]
  int i; // [esp+124h] [ebp-4h]
  int v68; // [esp+130h] [ebp+8h]
  int v69; // [esp+130h] [ebp+8h]
  char v70; // [esp+133h] [ebp+Bh]

  v4 = 0;
  for ( i = a1; v4 < *(_DWORD *)(a1 + 264); ++v4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 252) + 4 * v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 300))(v5);
  }
  *(_DWORD *)(a1 + 264) = 0;
  if ( !a3 )
  {
    *(_BYTE *)(a1 + 280) = 0;
    return 0;
  }
  v7 = a3;
  v8 = a1 - (_DWORD)a3;
  do
  {
    v9 = *v7;
    v7[v8 + 280] = *v7;
    ++v7;
  }
  while ( v9 );
  v10 = (wchar_t *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, a3);
  v11 = v10;
  Source = v10;
  if ( !v10 )
    return 0;
  v12 = v10 + 1;
  while ( *v10++ )
    ;
  if ( !(v10 - v12) )
    return 0;
  v52 = a2;
  if ( *v11 )
  {
    do
    {
      v14 = Source;
      v70 = 0;
      if ( *Source == 37 )
      {
        v70 = 1;
        v14 = Source + 1;
      }
      v15 = wcschr(v14, 0x25u);
      if ( v15 )
      {
        v16 = v15 - v14;
        wcsncpy(Destination, v14, v16);
        Destination[v16] = 0;
      }
      else
      {
        v17 = v14;
        do
        {
          v18 = *v17;
          *(wchar_t *)((char *)v17 + (char *)Destination - (char *)v14) = *v17;
          ++v17;
        }
        while ( v18 );
      }
      Source = &v14[wcslen(Destination)];
      if ( v70 )
        ++Source;
      v19 = sub_100DDA40(284);
      v20 = (_DWORD *)i;
      if ( v19 )
        v21 = sub_1024B320(i, 0, (int)Destination);
      else
        v21 = 0;
      sub_10236050(v21, v52);
      v65 = 0;
      if ( v70 )
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 816))(v21, v20[69], v53);
        (*(void (__thiscall **)(int, wchar_t *, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          Destination,
          &v58,
          64);
        v22 = &v59;
        if ( v58 != 43 )
          v22 = &v58;
        v23 = (const char *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 88))(dword_1041315C, v22);
        if ( !v23 )
          v23 = "< not bound >";
        sub_10228370(&String, 0x40u, "#%s", (char)v23);
        _strupr(&String);
        v24 = (const unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78);
        if ( v24 && wcslen(v24) )
        {
          v51 = v24;
          v25 = *(void (__thiscall **)(int, const unsigned __int16 *, _DWORD, char *))(*(_DWORD *)v21 + 768);
          v65 = 1;
          v25(v21, v51, 0, &String);
        }
        else
        {
          (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v21 + 772))(v21, v57, &String);
        }
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 816))(v21, v20[68], v53);
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 264))(v21, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 260))(v21, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 872))(v21);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 788))(v21, 3);
      if ( v65 && v70 )
      {
        v26 = *(void (__thiscall **)(int))(*(_DWORD *)v21 + 220);
        v64 = -1;
        v54 = -1;
        v26(v21);
      }
      else
      {
        v27 = *(_DWORD *)v21;
        v54 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v20 + 228))(v20, &v61);
        (*(void (__thiscall **)(int))(v27 + 220))(v21);
      }
      sub_10236050(v21, v54);
      v28 = (_DWORD *)i;
      v29 = *(_DWORD *)(i + 264);
      v30 = *(_DWORD *)(i + 256);
      if ( v29 + 1 > v30 )
        sub_1010AFF0(v29 - v30 + 1);
      ++v28[66];
      v31 = v28[63];
      v32 = v28[66] - v29 - 1;
      v28[67] = v31;
      if ( v32 > 0 )
        memcpy((void *)(v31 + 4 * v29 + 4), (const void *)(v31 + 4 * v29), 4 * v32);
      v33 = (int *)(v28[63] + 4 * v29);
      if ( v33 )
        *v33 = v21;
    }
    while ( *Source );
  }
  v34 = 0;
  v35 = 0;
  Source = 0;
  v64 = 0;
  if ( *(int *)(i + 264) > 0 )
  {
    do
    {
      v36 = *(_DWORD *)(*(_DWORD *)(i + 252) + 4 * v35);
      v37 = sub_102374C0(v36);
      if ( (v35 & 1) != 0 )
      {
        if ( v37 > v64 )
          v64 = sub_102374C0(v36);
      }
      else if ( v37 > (int)v34 )
      {
        v34 = (wchar_t *)sub_102374C0(v36);
      }
      ++v35;
    }
    while ( v35 < *(_DWORD *)(i + 264) );
    Source = v34;
  }
  v38 = 0;
  v39 = 0;
  v68 = 0;
  if ( *(int *)(i + 264) <= 0 )
    goto LABEL_62;
  do
  {
    v40 = *(_DWORD *)(*(_DWORD *)(i + 252) + 4 * v39);
    v41 = sub_102374F0(v40);
    if ( (v39 & 1) != 0 )
    {
      if ( v41 > v68 )
        v68 = sub_102374F0(v40);
    }
    else if ( v41 > v38 )
    {
      v38 = sub_102374F0(v40);
    }
    ++v39;
  }
  while ( v39 < *(_DWORD *)(i + 264) );
  if ( v38 <= v68 )
LABEL_62:
    v61 = v68;
  else
    v61 = v38;
  v42 = i;
  v60 = (int)*(float *)(i + 416);
  v43 = *(float *)(i + 424);
  Source = (wchar_t *)(int)((double)(int)Source + *(float *)(i + 416) + *(float *)(i + 432));
  v44 = (int)v43;
  v45 = v38 - v68;
  v46 = (v38 - v68) / 2;
  if ( v45 / 2 < 0 )
    v44 -= v46;
  v47 = 0;
  v69 = 0;
  if ( *(int *)(i + 264) > 0 )
  {
    while ( 1 )
    {
      if ( (v47 & 1) != 0 )
      {
        sub_10236140(Source, v46 + v44);
        i = v61 + v44;
        v44 = (int)((double)(v61 + v44) + *(float *)(v42 + 440));
      }
      else
      {
        sub_10236140(v60, v44);
      }
      if ( ++v69 >= *(_DWORD *)(v42 + 264) )
        break;
      v47 = v69;
    }
  }
  v48 = (int)((double)((int)Source + v64) + *(float *)(v42 + 416));
  sub_10236170(&v62, &v63);
  if ( (unsigned __int8)sub_102364F0(v42) )
  {
    v49 = sub_102374C0(v42);
    v62 -= v48 - v49;
  }
  if ( (unsigned __int8)sub_10236500(v42) )
  {
    v50 = sub_102374F0(v42);
    v63 -= v44 - v50;
  }
  sub_10236140(v62, v63);
  sub_102361A0(v48, v44);
  *(_DWORD *)(v42 + 408) = v63;
  return 1;
}
