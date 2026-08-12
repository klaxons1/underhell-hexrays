_DWORD *__stdcall sub_10155CC0(int a1, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int i; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // eax
  bool v19; // zf
  void (__thiscall *v20)(int, int, int); // eax
  _DWORD *v21; // esi
  unsigned int v22; // eax
  _BYTE *v23; // edx
  int v24; // esi
  int v25; // [esp+4h] [ebp-14h]
  int v26; // [esp+8h] [ebp-10h]
  int v27; // [esp+Ch] [ebp-Ch]
  int v28; // [esp+10h] [ebp-8h]
  int v29; // [esp+14h] [ebp-4h]
  char v30; // [esp+23h] [ebp+Bh]

  v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  result = *(_DWORD **)a1;
  if ( !*(_DWORD *)a1 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( !result )
      return result;
  }
  result = (_DWORD *)result[3];
  if ( !result )
    return result;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 20))(result);
  v5 = result;
  if ( !result )
    return result;
  v6 = dword_10700AC8;
  v25 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v7 = 0;
  v28 = v5[590];
  v30 = *((_BYTE *)v5 + 3280);
  v27 = 0;
  if ( a3 <= 0 )
    return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  do
  {
    v8 = *(unsigned __int16 *)(a2 + 2 * v7);
    v9 = *(_DWORD *)(v26 + 20 * v8) & 0x38;
    v29 = v26 + 20 * v8;
    if ( (*(_BYTE *)v29 & 0x10) == 0
      && ((1 << (v8 & 0x1F)) & *(_DWORD *)(*(_DWORD *)(a1 + 8200) + 4 * ((unsigned int)v8 >> 5))) == 0 )
    {
      if ( (*(_BYTE *)(v26 + 20 * v8) & 8) != 0 )
      {
        for ( i = v26 + 20 * v8;
              ;
              v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, i) )
        {
          v11 = v8 >> 5;
          v12 = 1 << (v8 & 0x1F);
          v13 = 4 * v11;
          *(_DWORD *)(*(_DWORD *)(a1 + 8200) + v13) |= v12;
          if ( v30 )
            *(_DWORD *)(*(_DWORD *)(a1 + 8204) + v13) |= v12;
          v14 = *(_DWORD *)(i + 8);
          if ( !v14 )
            break;
          v15 = sub_10235750(v14);
          if ( !v15 )
            break;
          i = *(_DWORD *)(v15 + 12);
        }
      }
      else
      {
        v16 = *(_DWORD *)(v29 + 12);
        if ( !v9 )
        {
          LOBYTE(v9) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 80))(v16, a1);
          if ( (v9 & 8) != 0 )
            goto LABEL_17;
        }
        if ( (v9 & 0x20) != 0 )
        {
          v17 = *(_DWORD *)(v29 + 8);
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 20))(v17);
          if ( v30 )
          {
            v19 = v18 == v28;
            v20 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 88);
            if ( v19 )
              v20(v16, a1, 1);
            else
              v20(v16, a1, 0);
          }
          else
          {
            if ( v18 == v28 )
              goto LABEL_17;
            if ( (unsigned __int8)sub_10235520(a1) || *(_DWORD *)(dword_106B330C + 48) )
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 88))(v16, a1, 0);
            }
            else
            {
              v21 = (_DWORD *)sub_10235750(v17);
              if ( v21 )
              {
                while ( 1 )
                {
                  v22 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v21[3]);
                  if ( ((1 << (v22 & 0x1F)) & *(_DWORD *)(*(_DWORD *)(a1 + 8200) + 4 * (v22 >> 5))) != 0 )
                    break;
                  v23 = (_BYTE *)v21[3];
                  if ( (*v23 & 0x10) != 0 )
                    goto LABEL_39;
                  if ( (*v23 & 8) != 0 )
                    break;
                  if ( (*(_DWORD *)v23 & 0x38) == 0 )
                  {
                    v24 = (*(int (__thiscall **)(_DWORD *))(*v21 + 28))(v21);
                    if ( ((*(int (__thiscall **)(int, int))(*(_DWORD *)v24 + 80))(v24, a1) & 8) == 0 )
                      goto LABEL_39;
                    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 88))(v24, a1, 1);
                    break;
                  }
                  if ( (*v23 & 0x20) != 0 )
                  {
                    sub_102357B0(v21);
                    if ( (unsigned __int8)sub_10235520(a1) )
                      break;
                  }
                  v21 = (_DWORD *)sub_10235750(v21);
                  if ( !v21 )
                    goto LABEL_39;
                }
LABEL_17:
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 88))(v16, a1, 1);
              }
            }
          }
        }
      }
    }
LABEL_39:
    v7 = v27 + 1;
    v27 = v7;
  }
  while ( v7 < a3 );
  v6 = v25;
  return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
}
