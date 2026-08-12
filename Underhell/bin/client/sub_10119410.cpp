int __stdcall sub_10119410(int a1)
{
  int v1; // ebx
  int v2; // edi
  int result; // eax
  _DWORD *v4; // esi
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edi
  int v8; // ebx
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v1 = a1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 188))(a1);
  result = 0;
  v11 = v2;
  v9 = 0;
  if ( *(int *)(v2 + 1372) > 0 )
  {
    v10 = 0;
    do
    {
      v4 = (_DWORD *)(v10 + *(_DWORD *)(v2 + 1376));
      v4[5] = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 12))(v1);
      v4[6] = 0;
      v5 = v4[4];
      if ( v5 != -1 )
      {
        v6 = (_DWORD *)((char *)off_103DCD74 + 16 * (v4[4] & 0xFFF) + 4);
        if ( *((_DWORD *)off_103DCD74 + 4 * (v4[4] & 0xFFF) + 2) == v5 >> 12 )
        {
          v7 = (_DWORD *)*v6;
          if ( *v6 )
          {
            if ( (*(int (__thiscall **)(_DWORD))(*v7 + 216))(*v6) >= 0 )
            {
              v8 = dword_1047CA8C;
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
              *(_DWORD *)(v11 + 1380) = v7;
              (*(void (__thiscall **)(_DWORD *, int))(*v7 + 220))(v7, a1);
              *(_DWORD *)(v11 + 1380) = 0;
              v4[6] = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1) - v4[5];
              v4[8] = v7[4];
              (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
              v1 = a1;
            }
          }
          v2 = v11;
        }
      }
      v10 += 56;
      result = v9 + 1;
      v9 = result;
    }
    while ( result < *(_DWORD *)(v2 + 1372) );
  }
  return result;
}
