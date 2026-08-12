int __usercall sub_10259060@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int result; // eax
  int i; // edi
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  bool v10; // cc
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  char v24; // al
  int v25; // eax
  int (__thiscall ***v26)(void *, int, int); // eax
  int v27; // ecx
  int (__thiscall *v28)(int, int); // edx
  int v29; // eax
  bool v30; // sf
  int v31; // eax
  int (__thiscall ***v32)(void *, int, int); // eax
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // eax
  int v37; // ebp
  int v38; // ecx
  int v39; // [esp+4h] [ebp-44h]
  int v40; // [esp+8h] [ebp-40h]
  int v41; // [esp+18h] [ebp-30h]
  int v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+20h] [ebp-28h]
  int j; // [esp+24h] [ebp-24h]
  int v45; // [esp+28h] [ebp-20h] BYREF
  int v46; // [esp+2Ch] [ebp-1Ch] BYREF
  int v47; // [esp+30h] [ebp-18h] BYREF
  int v48; // [esp+34h] [ebp-14h]
  int v49; // [esp+38h] [ebp-10h]
  int v50; // [esp+3Ch] [ebp-Ch]
  int v51; // [esp+40h] [ebp-8h]
  int v52; // [esp+44h] [ebp-4h]

  sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v46, (int)&v45);
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 320));
  for ( i = 0; i < *(_DWORD *)(a1 + 352); ++i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 340) + 4 * i);
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 124))(v5, 0);
  }
  if ( *(_DWORD *)(a1 + 236) )
  {
    v40 = a2;
    v6 = 0;
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 212) + 772))(*(_DWORD *)(a1 + 212));
    v8 = *(_DWORD *)(a1 + 256);
    if ( v7 >= v8 )
      v7 = v8 - 1;
    if ( v7 && v7 < v8 )
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 244) + 4 * v7 - 4);
    v9 = 0;
    v10 = *(_DWORD *)(a1 + 352) <= 0;
    *(_BYTE *)(a1 + 336) = 0;
    if ( v10 )
    {
LABEL_13:
      v12 = -1;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 340);
      while ( *(_DWORD *)(*(_DWORD *)v11 + 208) <= v6 )
      {
        ++v9;
        v11 += 4;
        if ( v9 >= *(_DWORD *)(a1 + 352) )
          goto LABEL_13;
      }
      v12 = v9 - 1;
    }
    v13 = *(_BYTE *)(a1 + 388) == 0;
    *(_DWORD *)(a1 + 360) = v12;
    if ( !v13 )
      sub_10258A70(a1, v6);
    v14 = *(_DWORD *)(a1 + 396);
    v15 = *(_DWORD *)(a1 + 400);
    v47 = *(_DWORD *)(a1 + 392);
    v16 = *(_DWORD *)(a1 + 404);
    v48 = v14;
    v17 = *(_DWORD *)(a1 + 408);
    v50 = v16;
    v18 = *(_DWORD *)(a1 + 412);
    v49 = v15;
    v19 = *(_DWORD *)(a1 + 404);
    v51 = v17;
    *(_BYTE *)(a1 + 336) = v17;
    v52 = v18;
    LOBYTE(v51) = v17;
    v20 = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(a1 + 312) = v19;
    v49 = *(_DWORD *)(32 * v18 + v20);
    sub_10258010(a1, (int)&v47);
    ++v52;
    if ( *(_BYTE *)(a1 + 336) )
      *(_DWORD *)(a1 + 360) = v6;
    v21 = *(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 368);
    result = *(_DWORD *)(a1 + 304);
    v48 = *(_DWORD *)(a1 + 372);
    v47 = v21;
    v42 = -1;
    v43 = -1;
    if ( result != -1 )
    {
      v42 = result;
      v43 = *(_DWORD *)(a1 + 308);
      if ( v43 < result )
      {
        v42 = *(_DWORD *)(a1 + 308);
        v43 = result;
      }
    }
    v41 = v6;
    if ( v6 < *(_DWORD *)(a1 + 236) )
    {
      v22 = 4 * v7;
      for ( j = v22; ; v22 = j )
      {
        result = v48;
        if ( v48 >= v45 )
          break;
        v23 = v21;
        v24 = sub_10258140((_DWORD *)a1, v41, (int)&v47);
        v21 = v47;
        if ( v24 && (_BYTE)v51 != *(_BYTE *)(a1 + 336) )
        {
          if ( (_BYTE)v51 )
          {
            ++*(_DWORD *)(a1 + 360);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
              dword_1047CA6C,
              *(_DWORD *)(a1 + 324));
            v25 = *(_DWORD *)(a1 + 360);
            if ( v25 >= 0 && v25 < *(_DWORD *)(a1 + 352) )
            {
              v26 = *(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(a1 + 340) + 4 * v25);
              if ( v26 )
                sub_10236140(v26, v21, v48);
            }
          }
          else
          {
            sub_10257F60((_DWORD *)a1, v47, v23, v48, v40);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
              dword_1047CA6C,
              *(_DWORD *)(a1 + 320));
          }
          *(_BYTE *)(a1 + 336) = v51;
        }
        v27 = v41;
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 244) + v22) == v41 )
        {
          if ( *(_BYTE *)(a1 + 336) )
            sub_10257F60((_DWORD *)a1, v21, v21, v48, v40);
          v21 = *(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 368);
          v28 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268);
          v39 = *(_DWORD *)(a1 + 320);
          v47 = v21;
          v29 = v28(dword_1047CA6C, v39);
          v22 += 4;
          v48 += *(_DWORD *)(a1 + 372) + v29;
          j = v22;
          if ( (_BYTE)v51 )
          {
            v30 = ++*(_DWORD *)(a1 + 360) < 0;
            v31 = *(_DWORD *)(a1 + 360);
            if ( !v30 && v31 < *(_DWORD *)(a1 + 352) )
            {
              v32 = *(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(a1 + 340) + 4 * v31);
              if ( v32 )
                sub_10236140(v32, v21, v48);
            }
          }
          v27 = v41;
        }
        v33 = *(_DWORD *)(*(_DWORD *)(a1 + 244) + v22);
        v34 = *(_DWORD *)(a1 + 236) - 1;
        if ( v33 <= v34 )
          v34 = v33 - 1;
        if ( v52 >= 0 && v52 < *(_DWORD *)(a1 + 276) )
        {
          v35 = *(_DWORD *)(32 * v52 + *(_DWORD *)(a1 + 264) + 28);
          if ( v35 <= v34 )
            v34 = v35 - 1;
        }
        v36 = v42;
        if ( v27 < v42 || (v36 = v43, v27 < v43) )
        {
          if ( v34 >= v36 )
            v34 = v36 - 1;
        }
        v37 = v27;
        if ( v41 > v34 )
          goto LABEL_71;
        while ( !iswcntrl(*(_WORD *)(*(_DWORD *)(a1 + 224) + 2 * v37)) )
        {
          if ( ++v37 > v34 )
            goto LABEL_59;
        }
        v34 = v37 - 1;
LABEL_59:
        if ( v34 >= v41 )
        {
          v21 += sub_10257E20((_DWORD *)a1, v41, v34, &v47, *(_DWORD *)(a1 + 320));
          v47 = v21;
          v41 = v34 + 1;
        }
        else
        {
LABEL_71:
          if ( *(_WORD *)(*(_DWORD *)(a1 + 224) + 2 * v41) == 9 )
          {
            v38 = 8
                * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 284))(
                    dword_1047CA6C,
                    *(_DWORD *)(a1 + 320),
                    32);
            if ( v38 < 1 )
              v38 = 1;
            v21 = v38 * (v21 / v38 + 1);
            v47 = v21;
          }
          ++v41;
        }
        result = v41;
        if ( v41 >= *(_DWORD *)(a1 + 236) )
          break;
      }
    }
    if ( (_BYTE)v51 )
      return sub_10257F60((_DWORD *)a1, v21, v21, v48, v40);
  }
  return result;
}
