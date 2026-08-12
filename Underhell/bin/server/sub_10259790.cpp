int __cdecl sub_10259790(char *a1, int a2)
{
  int v2; // esi
  bool v3; // zf
  int v4; // eax
  char *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ebx
  int j; // edi
  int v13; // eax
  int v15[512]; // [esp+8h] [ebp-1034h] BYREF
  int v16[512]; // [esp+808h] [ebp-834h] BYREF
  _DWORD *v17; // [esp+1008h] [ebp-34h] BYREF
  int v18[9]; // [esp+100Ch] [ebp-30h] BYREF
  int v19; // [esp+1030h] [ebp-Ch]
  char *i; // [esp+1034h] [ebp-8h]
  int v21; // [esp+1038h] [ebp-4h]

  v2 = sub_10256390(a1, a2);
  v3 = *(_DWORD *)(dword_106B31C8 + 44) == 0;
  v19 = v2;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(dword_106B31C8 + 44);
    if ( *(_DWORD *)(v4 + 1396) )
    {
      sub_10221130(&v17, v4);
      v21 = 0;
      if ( v2 > 0 )
      {
        v5 = a1 + 32;
        for ( i = a1 + 32; ; v5 = i )
        {
          if ( ((v6 = *((_DWORD *)v5 + 8)) != 0
             || (v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
            && (v7 = *(_DWORD *)(v6 + 12)) != 0 )
          {
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
          }
          else
          {
            v8 = 0;
          }
          v9 = sub_10259660(v8, v5, (int)v16, (int)v15, 512);
          v10 = 0;
          v11 = v9;
          for ( j = __ROL4__(1, v21); v10 < v11; ++v10 )
          {
            v13 = sub_10221290(&v17, v16[v10]);
            sub_1021D480(&v17, v13, j | v15[v10]);
          }
          i += 80;
          if ( ++v21 >= v19 )
            break;
        }
        v2 = v19;
      }
      sub_102375F0(v18);
    }
  }
  return v2;
}
