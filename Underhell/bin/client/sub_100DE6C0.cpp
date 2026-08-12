int __thiscall sub_100DE6C0(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  int v8; // esi
  int result; // eax
  _DWORD *v10; // esi
  int v11; // ebx
  int i; // edi
  int v13; // eax
  int v14; // eax
  int v15; // [esp-8h] [ebp-3Ch]
  int v16; // [esp-8h] [ebp-3Ch]
  int v17; // [esp+Ch] [ebp-28h] BYREF
  int v18; // [esp+10h] [ebp-24h]
  int v19; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-18h]
  int v22; // [esp+20h] [ebp-14h]
  _DWORD *v23; // [esp+24h] [ebp-10h]
  int v24; // [esp+28h] [ebp-Ch]
  int v25; // [esp+2Ch] [ebp-8h]
  int v26; // [esp+30h] [ebp-4h] BYREF

  v1 = this;
  v2 = 0;
  v3 = 0;
  this[66] = 0;
  v4 = 0;
  v23 = this;
  this[68] = 0;
  this[69] = 0;
  v26 = 0;
  do
  {
    v5 = (unsigned __int16)word_104341D0[v2];
    if ( !(_WORD)v5 )
      break;
    if ( v2 == v3 && v5 == 45 && word_104341D2[v2] == 62 )
    {
      swscanf(&word_104341D4[v2], L"%d", &v26);
      v4 = v26;
      v2 += 2;
      v3 += 2;
    }
    else
    {
      do
      {
        v6 = (unsigned __int16)word_104341D0[v2];
        if ( !(_WORD)v6 )
          break;
        if ( v6 == 10 )
          break;
        ++v2;
      }
      while ( v2 < 512 );
      if ( v2 - v3 >= 1 )
      {
        v17 = v4;
        v20 = 0;
        v21 = 0;
        v19 = v2 - v3;
        v15 = v1[66];
        v18 = v3;
        sub_1011FE70(v15, &v17);
      }
      v4 = 0;
      v7 = word_104341D0[v2] == 10;
      v26 = 0;
      if ( v7 )
        ++v2;
      v3 = v2;
    }
  }
  while ( v2 < 512 );
  v8 = v2 - v3;
  if ( v8 >= 1 )
  {
    v20 = 0;
    v21 = 0;
    v17 = v4;
    v16 = v1[66];
    v18 = v3;
    v19 = v8;
    sub_1011FE70(v16, &v17);
  }
  result = v1[66];
  if ( result > 0 )
  {
    v24 = 0;
    v22 = result;
    while ( 1 )
    {
      v10 = (_DWORD *)(v24 + v1[63]);
      v11 = 0;
      if ( *v10 )
        v25 = v1[90];
      else
        v25 = v1[88];
      for ( i = 0; i < v10[2]; v11 += v13 )
      {
        v13 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                v25,
                (unsigned __int16)word_104341D0[i + v10[1]]);
        ++i;
      }
      v14 = v25;
      v10[3] = v11;
      v10[4] = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v14);
      result = (int)v23;
      if ( v11 > v23[68] )
        v23[68] = v11;
      *(_DWORD *)(result + 276) += v10[4];
      v24 += 20;
      if ( !--v22 )
        break;
      v1 = (_DWORD *)result;
    }
  }
  return result;
}
