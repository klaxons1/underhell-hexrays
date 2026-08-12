int __stdcall sub_10220E00(int a1, char a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // eax
  const char *v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  const char *v10; // ecx
  int v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v14; // ebx
  _DWORD *v15; // esi
  unsigned int v16; // eax
  int v17; // edi
  int v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]
  int v21; // [esp+18h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 148))(a1);
  v3 = 0;
  v18 = result;
  v20 = 0;
  if ( *(int *)(result + 1372) > 0 )
  {
    v19 = 0;
    while ( 1 )
    {
      v4 = (_DWORD *)(v19 + *(_DWORD *)(result + 1376));
      if ( v4[8] )
      {
        if ( v4[6] )
        {
          v5 = v4[7];
          if ( (v5 & 0x40000000) == 0 )
            break;
        }
      }
      v4[4] = -1;
      v4[3] = -1;
LABEL_35:
      result = v18;
      v19 += 56;
      v3 = v20 + 1;
      v20 = v3;
      if ( v3 >= *(_DWORD *)(v18 + 1372) )
        goto LABEL_36;
    }
    v6 = v4[1];
    if ( !v6 )
    {
      v7 = (const char *)v4[8];
      if ( !v7 )
        v7 = String;
      v8 = (_DWORD *)sub_101811E0(v7, -1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, v4[5]);
      if ( sub_102209A0((int)v8, a1, (int)v4) >= 0 )
      {
        sub_10156710((int)v8);
      }
      else
      {
        v4[4] = -1;
        v4[3] = -1;
        sub_1025FAE0(v8);
      }
      goto LABEL_26;
    }
    if ( v6 <= 0 || v6 > *(_DWORD *)(dword_106B31C8 + 20) )
    {
      v12 = (const char *)v4[8];
      if ( !v12 )
        v12 = String;
      v11 = sub_101811E0(v12, -1);
    }
    else
    {
      if ( v5 >= 0 )
        Warning("ENTITY IS NOT A PLAYER: %d\n", v3);
      v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v4[1]);
      if ( !v9 || !a2 )
      {
        v8 = 0;
        goto LABEL_26;
      }
      v10 = (const char *)v4[8];
      if ( !v10 )
        v10 = String;
      v11 = sub_101E1C00(v10, v9);
    }
    v8 = (_DWORD *)v11;
LABEL_26:
    if ( v8 )
    {
      v4[4] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
      v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v8[6]);
    }
    else
    {
      v13 = -1;
      v4[4] = -1;
    }
    v4[3] = v13;
    if ( v8 && !v13 && (const char *)v8[23] != "worldspawn" && !sub_100D6240(v8, "worldspawn") )
      v4[3] = -1;
    goto LABEL_35;
  }
LABEL_36:
  v14 = 0;
  v21 = 0;
  if ( *(int *)(result + 1372) > 0 )
  {
    do
    {
      v15 = (_DWORD *)(v14 + *(_DWORD *)(result + 1376));
      if ( v15[1] )
      {
        v16 = v15[4];
        if ( v16 == -1 || off_1061BE18[4 * (v15[4] & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (v15[4] & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, v15[5]);
        if ( v17 )
        {
          if ( sub_102209A0(v17, a1, (int)v15) >= 0 )
          {
            sub_10156710(v17);
          }
          else
          {
            v15[4] = -1;
            v15[3] = -1;
            sub_1025FAE0(v17);
          }
        }
      }
      result = v18;
      v14 += 56;
      ++v21;
    }
    while ( v21 < *(_DWORD *)(v18 + 1372) );
  }
  return result;
}
