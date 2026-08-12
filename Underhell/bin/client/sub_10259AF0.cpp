void __thiscall sub_10259AF0(int this)
{
  int v2; // ebp
  bool v3; // zf
  int v4; // eax
  int *v5; // ecx
  int v6; // edx
  int v7; // eax
  int *v8; // edi
  int i; // edi
  int v10; // eax
  __int16 v11; // ax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  bool v16; // cc
  int v17; // ecx
  int v18; // ebx
  wint_t v19; // bp
  char v20; // al
  int *v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ebx
  int *v25; // eax
  int v26; // ebp
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int *v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  _DWORD *v35; // ebp
  char v36; // [esp+Dh] [ebp-3Fh]
  char v37; // [esp+Eh] [ebp-3Eh]
  char v38; // [esp+Fh] [ebp-3Dh]
  int v39; // [esp+10h] [ebp-3Ch]
  int v40; // [esp+14h] [ebp-38h]
  int v41; // [esp+18h] [ebp-34h]
  int v42; // [esp+1Ch] [ebp-30h] BYREF
  int v43; // [esp+20h] [ebp-2Ch]
  int v44; // [esp+24h] [ebp-28h] BYREF
  int *v45; // [esp+28h] [ebp-24h] BYREF
  int v46; // [esp+2Ch] [ebp-20h]
  int v47; // [esp+30h] [ebp-1Ch]
  _DWORD v48[4]; // [esp+34h] [ebp-18h] BYREF
  char v49; // [esp+44h] [ebp-8h]
  int v50; // [esp+48h] [ebp-4h]

  v2 = 0;
  v3 = *(_DWORD *)(this + 236) == 0;
  *(_BYTE *)(this + 284) = 0;
  *(_BYTE *)(this + 388) = 1;
  if ( !v3 )
  {
    v47 = *(_DWORD *)(this + 320);
    v4 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
    v5 = *(int **)(this + 212);
    v6 = *v5;
    v43 = v4;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(v6 + 128))(v5) )
      v43 -= sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 212));
    v7 = *(_DWORD *)(this + 288);
    v40 = *(_DWORD *)(this + 368);
    v44 = 0;
    v36 = 0;
    v37 = 1;
    v38 = 1;
    if ( v7 > 0 )
    {
      for ( i = v7 + 1; i < *(_DWORD *)(this + 256); --*(_DWORD *)(this + 256) )
      {
        v10 = *(_DWORD *)(this + 256) - i - 1;
        if ( v10 > 0 )
          memcpy(
            (void *)(*(_DWORD *)(this + 244) + 4 * i),
            (const void *)(*(_DWORD *)(this + 244) + 4 * i + 4),
            4 * v10);
      }
      v2 = *(_DWORD *)(*(_DWORD *)(this + 244) + 4 * *(_DWORD *)(this + 288));
      v8 = (int *)(this + 244);
    }
    else
    {
      v8 = (int *)(this + 244);
      *(_DWORD *)(this + 256) = 0;
    }
    v11 = *(_WORD *)(*(_DWORD *)(this + 224) + 2 * v2);
    if ( v11 == 13 || v11 == 10 )
      ++v2;
    v39 = sub_102580F0((_DWORD *)this, v2) + 1;
    v12 = sub_102581D0((_DWORD *)this, v2);
    v13 = *(_DWORD *)(this + 264);
    v50 = v12;
    v12 *= 32;
    v14 = *(_DWORD *)(v12 + v13);
    v15 = v13 + v12;
    v16 = v2 < *(_DWORD *)(this + 236);
    v17 = *(_DWORD *)(v15 + 4);
    v48[2] = v14;
    LOBYTE(v14) = *(_BYTE *)(v15 + 8);
    v18 = v2;
    v48[3] = v17;
    v49 = v14;
    *(_BYTE *)(this + 336) = 0;
    v42 = v2;
    if ( v16 )
    {
      v41 = 4 * v39;
      do
      {
        v19 = *(_WORD *)(*(_DWORD *)(this + 224) + 2 * v18);
        v48[0] = v40;
        if ( sub_10258140((_DWORD *)this, v18, (int)v48) )
        {
          v20 = v49;
          v40 = v48[0];
          if ( v49 != *(_BYTE *)(this + 336) )
          {
            if ( v49 )
            {
              if ( v39 >= *(_DWORD *)(this + 352) )
              {
                v21 = (int *)sub_100DDA40(212);
                if ( v21 )
                  v45 = sub_10257940(v21, (int (***)(void))this);
                else
                  v45 = 0;
                sub_10258C50((int *)(this + 340), *(_DWORD *)(this + 352), &v45);
              }
              ++v39;
              v22 = v41;
              v41 += 4;
              v23 = *(_DWORD *)(*(_DWORD *)(this + 340) + v22);
              v20 = v49;
              *(_DWORD *)(v23 + 208) = v18;
            }
            *(_BYTE *)(this + 336) = v20;
          }
        }
        if ( iswspace(v19) )
        {
          v36 = 0;
        }
        else if ( !v36 )
        {
          v44 = v18;
          v36 = 1;
          v38 = v37;
        }
        v46 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v47, v19);
        if ( !iswcntrl(v19) )
          v37 = 0;
        if ( v40 + v46 >= v43 || v19 == 13 || v19 == 10 )
        {
          v40 = *(_DWORD *)(this + 368) + *(_DWORD *)(this + 312);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
            dword_1047CA6C,
            *(_DWORD *)(this + 320));
          v37 = 1;
          v36 = 0;
          if ( v19 == 13 || v19 == 10 )
          {
            v26 = v8[3];
            v27 = v8[1];
            if ( v26 + 1 > v27 )
              sub_1010AFF0(v8, v26 - v27 + 1);
            ++v8[3];
            v28 = *v8;
            v29 = v8[3] - v26 - 1;
            v3 = v8[3] - v26 == 1;
            v8[4] = *v8;
            if ( v29 >= 0 && !v3 )
              memcpy((void *)(v28 + 4 * v26 + 4), (const void *)(v28 + 4 * v26), 4 * v29);
            v30 = (int *)(*v8 + 4 * v26);
            if ( v30 )
              *v30 = v18;
          }
          else if ( v38 || iswspace(v19) )
          {
            sub_100C2010(v8, v8[3], &v42);
            if ( v49 )
            {
              v24 = *(_DWORD *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 340) - 4) + 208);
              if ( v39 >= *(_DWORD *)(this + 352) )
              {
                v25 = (int *)sub_100DDA40(212);
                if ( v25 )
                  v45 = sub_10257940(v25, (int (***)(void))this);
                else
                  v45 = 0;
                sub_10258C50((int *)(this + 340), *(_DWORD *)(this + 352), &v45);
              }
              ++v39;
              *(_DWORD *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 340)) + 208) = v24;
              v18 = v42;
              v41 += 4;
            }
          }
          else
          {
            sub_100C2010(v8, v8[3], &v44);
            v42 = v44;
            v18 = v44;
          }
        }
        v40 += v46;
        v16 = ++v18 < *(_DWORD *)(this + 236);
        v42 = v18;
      }
      while ( v16 );
    }
    v31 = v8[3];
    v32 = v8[1];
    if ( v31 + 1 > v32 )
      sub_1010AFF0(v8, v31 - v32 + 1);
    ++v8[3];
    v33 = *v8;
    v34 = v8[3] - v31 - 1;
    v3 = v8[3] - v31 == 1;
    v8[4] = *v8;
    if ( v34 >= 0 && !v3 )
      memcpy((void *)(v33 + 4 * v31 + 4), (const void *)(v33 + 4 * v31), 4 * v34);
    v35 = (_DWORD *)(*v8 + 4 * v31);
    if ( v35 )
      *v35 = 999999;
    *(_BYTE *)(this + 292) = 1;
  }
}
