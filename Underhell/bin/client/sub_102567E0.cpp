void __thiscall sub_102567E0(int this)
{
  int v2; // eax
  int (__thiscall ***v3)(void *, int *, _BYTE *); // ecx
  int v4; // eax
  int v5; // eax
  int i; // edi
  __int16 v7; // cx
  bool v8; // cc
  int v9; // ebx
  wint_t v10; // di
  int v11; // ebp
  int v12; // edx
  int *v13; // ecx
  int v14; // [esp-10h] [ebp-40h]
  _BYTE v15[3]; // [esp+9h] [ebp-27h]
  int v16; // [esp+Ch] [ebp-24h] BYREF
  int v17; // [esp+10h] [ebp-20h] BYREF
  int v18; // [esp+14h] [ebp-1Ch] BYREF
  int v19; // [esp+18h] [ebp-18h]
  int v20; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  int v22; // [esp+24h] [ebp-Ch] BYREF
  int v23; // [esp+28h] [ebp-8h] BYREF
  int v24; // [esp+2Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 341) && !*(_BYTE *)(this + 293) && *(int *)(this + 232) >= 1 )
  {
    v20 = *(_DWORD *)(this + 332);
    v2 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
    v3 = *(int (__thiscall ****)(void *, int *, _BYTE *))(this + 344);
    v19 = v2 - 2;
    if ( v3 )
      v19 = v2 - 2 - sub_102374C0(v3);
    v4 = *(_DWORD *)(this + 396);
    v16 = 3;
    v24 = 1;
    v17 = 0;
    v15[0] = 0;
    *(_WORD *)&v15[1] = 257;
    if ( v4 > 0 )
    {
      for ( i = v4 + 1; i < *(_DWORD *)(this + 272); --*(_DWORD *)(this + 272) )
      {
        if ( *(_DWORD *)(this + 272) - i - 1 > 0 )
          memcpy(
            (void *)(*(_DWORD *)(this + 260) + 4 * i),
            (const void *)(*(_DWORD *)(this + 260) + 4 * i + 4),
            4 * (*(_DWORD *)(this + 272) - i - 1));
      }
      v5 = *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * *(_DWORD *)(this + 396));
    }
    else
    {
      *(_DWORD *)(this + 272) = 0;
      v5 = 0;
    }
    v7 = *(_WORD *)(*(_DWORD *)(this + 220) + 2 * v5);
    if ( v7 == 13 || v7 == 10 )
      ++v5;
    v8 = v5 < *(_DWORD *)(this + 232);
    v9 = v5;
    v18 = v5;
    if ( v8 )
    {
      while ( 1 )
      {
        v10 = *(_WORD *)(*(_DWORD *)(this + 220) + 2 * v9);
        if ( iswspace(v10) )
        {
          v15[0] = 0;
        }
        else if ( !v15[0] )
        {
          v17 = v9;
          v15[0] = 1;
          v15[2] = v15[1];
        }
        if ( iswcntrl(v10) )
        {
          v11 = 0;
        }
        else
        {
          (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
            dword_1047CA6C,
            v20,
            v10,
            &v22,
            &v23,
            &v21);
          v11 = v23 + v22 + v21;
        }
        if ( !iswcntrl(v10) )
          v15[1] = 0;
        if ( v16 + v11 < v19 && v10 != 13 && v10 != 10 )
          goto LABEL_35;
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)this + 1012))(this, &v16, &v24);
        *(_WORD *)v15 = 256;
        if ( v10 == 13 || v10 == 10 )
          break;
        v12 = *(_DWORD *)(this + 272);
        v13 = (int *)(this + 260);
        if ( v15[2] )
          goto LABEL_34;
        sub_100C2010(v13, v12, &v17);
        v9 = v17;
LABEL_35:
        v16 += v11;
        v8 = ++v9 < *(_DWORD *)(this + 232);
        v18 = v9;
        if ( !v8 )
          goto LABEL_36;
      }
      v12 = *(_DWORD *)(this + 272);
      v13 = (int *)(this + 260);
LABEL_34:
      sub_100C2010(v13, v12, &v18);
      goto LABEL_35;
    }
LABEL_36:
    *(_DWORD *)(this + 324) = v9 - 1;
    v14 = *(_DWORD *)(this + 272);
    v23 = 999999;
    sub_100C2010((int *)(this + 260), v14, &v23);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 976))(this);
  }
}
