char __thiscall sub_100C9C00(int *this, wchar_t *Str)
{
  int *v2; // ebx
  int v3; // esi
  int v4; // ecx
  wchar_t *v5; // esi
  int *v6; // edi
  wchar_t *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int *v16; // ebx
  int v18; // [esp+0h] [ebp-414h]
  int v19; // [esp+0h] [ebp-414h]
  unsigned __int16 v20[512]; // [esp+Ch] [ebp-408h] BYREF
  _BYTE v21[4]; // [esp+40Ch] [ebp-8h] BYREF
  int *i; // [esp+410h] [ebp-4h]
  wchar_t *Stra; // [esp+41Ch] [ebp+8h]

  v2 = this;
  v3 = 0;
  for ( i = this; v3 < v2[69]; ++v3 )
  {
    v4 = *(_DWORD *)(v2[66] + 4 * v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 300))(v4);
  }
  v5 = Str;
  v6 = v2 + 66;
  v2[69] = 0;
  if ( Str )
  {
    while ( 1 )
    {
      v7 = wcschr(v5, 0xAu);
      v8 = 0;
      if ( v7 )
      {
        Stra = v7 + 1;
        v8 = 2 * (v7 - v5);
      }
      else
      {
        Stra = 0;
      }
      sub_10076CC0((char *)v5, v5, v8, v20);
      if ( sub_100DDA40(284) )
        v9 = sub_1024B320((int)v2, 0, (int)v20);
      else
        v9 = 0;
      sub_10236050(v9, v18);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 816))(v9, v2[63]);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 264))(v9, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 260))(v9, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 872))(v9);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 788))(v9, 3);
      v10 = *(_DWORD *)v9;
      v11 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*i + 228))(i, v21);
      (*(void (__thiscall **)(int, _DWORD))(v10 + 220))(v9, *v11);
      sub_10236050(v9, v19);
      v12 = v6[3];
      v13 = v6[1];
      if ( v12 + 1 > v13 )
        sub_1010AFF0(v12 - v13 + 1);
      ++v6[3];
      v14 = *v6;
      v15 = v6[3] - v12 - 1;
      v6[4] = *v6;
      if ( v15 > 0 )
        memcpy((void *)(v14 + 4 * v12 + 4), (const void *)(v14 + 4 * v12), 4 * v15);
      v16 = (int *)(*v6 + 4 * v12);
      if ( v16 )
        *v16 = v9;
      v2 = i;
      if ( !Stra )
        break;
      v5 = Stra;
    }
  }
  (*(void (__thiscall **)(int *, int, _DWORD))(*v2 + 244))(v2, 1, 0);
  return 1;
}
