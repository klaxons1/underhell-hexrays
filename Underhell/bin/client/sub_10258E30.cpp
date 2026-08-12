int __thiscall sub_10258E30(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  bool v11; // cc
  char v12; // al
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // bp
  int v20; // ebp
  int result; // eax
  char v22; // [esp+13h] [ebp-2Dh]
  int v23; // [esp+14h] [ebp-2Ch]
  int v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+20h] [ebp-20h]
  _DWORD v27[3]; // [esp+28h] [ebp-18h] BYREF
  int v28; // [esp+34h] [ebp-Ch]
  int v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 320));
  v5 = *(_DWORD *)(this + 212);
  v6 = *(_DWORD *)(this + 368);
  v26 = v4;
  v7 = *(_DWORD *)(this + 372);
  v8 = 0;
  *(_DWORD *)(this + 312) = 0;
  v25 = v7;
  v24 = v7;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 772))(v5);
  v10 = *(_DWORD *)(this + 256);
  if ( v9 >= v10 )
    v9 = v10 - 1;
  if ( v9 && v9 < v10 )
    v8 = *(_DWORD *)(*(_DWORD *)(this + 244) + 4 * v9 - 4);
  if ( *(_BYTE *)(this + 388) )
    sub_10258A70(this, v8);
  v11 = v8 < *(_DWORD *)(this + 236);
  v12 = *(_BYTE *)(this + 408);
  v13 = *(_DWORD *)(this + 392);
  *(_DWORD *)(this + 312) = *(_DWORD *)(this + 404);
  v14 = *(_DWORD *)(this + 396);
  *(_BYTE *)(this + 336) = v12;
  v15 = *(_DWORD *)(this + 400);
  v27[0] = v13;
  v16 = *(_DWORD *)(this + 404);
  v27[1] = v14;
  v17 = *(_DWORD *)(this + 408);
  v27[2] = v15;
  v18 = *(_DWORD *)(this + 412);
  v28 = v16;
  v29 = v17;
  v30 = v18;
  v22 = 0;
  if ( v11 )
  {
    v23 = 4 * v9;
    while ( 1 )
    {
      v19 = *(_WORD *)(*(_DWORD *)(this + 224) + 2 * v8);
      v27[0] = v6;
      if ( sub_10258140((_DWORD *)this, v8, (int)v27) )
        v6 = v27[0];
      if ( *(_DWORD *)(v23 + *(_DWORD *)(this + 244)) == v8 )
      {
        v6 = *(_DWORD *)(this + 312) + *(_DWORD *)(this + 368);
        v23 += 4;
        v24 += *(_DWORD *)(this + 372)
             + (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                 dword_1047CA6C,
                 *(_DWORD *)(this + 320));
        if ( v22 )
          break;
      }
      if ( a3 < v25 || a3 >= v24 && a3 < *(_DWORD *)(this + 372) + v26 + v24 )
        v22 = 1;
      v20 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
              dword_1047CA6C,
              *(_DWORD *)(this + 320),
              v19);
      if ( v22 )
      {
        if ( a2 <= sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this)
          && (a2 < v28 + *(_DWORD *)(this + 368) || a3 < v25) )
        {
          return v8;
        }
        if ( a2 >= v6 && a2 < v6 + v20 )
        {
          result = v8 + 1;
          if ( (double)v20 * 0.5 + (double)v6 <= (double)a2 )
            return result;
          return v8;
        }
      }
      ++v8;
      v6 += v20;
      if ( v8 >= *(_DWORD *)(this + 236) )
        return v8;
    }
  }
  return v8;
}
