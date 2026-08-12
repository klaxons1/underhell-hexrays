int __cdecl sub_1021FDF0(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // eax
  const char *v5; // ecx
  bool v6; // bl
  int v7; // edi
  _DWORD *v8; // eax
  const char *v9; // ecx
  int v10; // eax
  _DWORD *v11; // [esp+0h] [ebp-Ch]
  int i; // [esp+4h] [ebp-8h]
  int v13; // [esp+8h] [ebp-4h]

  result = a1;
  v13 = 0;
  if ( *(int *)(a1 + 1396) > 0 )
  {
    for ( i = 0; ; i += 56 )
    {
      v3 = (_DWORD *)(i + *(_DWORD *)(result + 1400));
      v3[4] = -1;
      if ( !v3[6] )
        goto LABEL_23;
      v4 = v3[1];
      if ( !v4 )
        goto LABEL_23;
      v5 = (const char *)v3[8];
      if ( v5 )
        break;
      Warning("Entity with data saved, but with no classname\n");
LABEL_23:
      result = a1;
      if ( ++v13 >= *(_DWORD *)(a1 + 1396) )
        return result;
    }
    v6 = (a2 & v3[7]) != 0;
    v7 = 0;
    if ( v4 <= 0 || v4 > *(_DWORD *)(dword_106B31C8 + 20) )
    {
      if ( (a2 & v3[7]) == 0 )
        goto LABEL_20;
      v10 = sub_101811E0(v5, -1);
    }
    else
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v3[1]);
      v11 = v8;
      if ( !v6 || !v8 || (*v8 & 2) != 0 )
        goto LABEL_20;
      if ( (int)v3[7] >= 0 )
      {
        Warning("ENTITY IS NOT A PLAYER: %d\n", v13);
        v8 = v11;
      }
      v9 = (const char *)v3[8];
      if ( !v9 )
        v9 = String;
      v10 = sub_101E1C00(v9, (int)v8);
    }
    v7 = v10;
LABEL_20:
    if ( v7 )
      v3[4] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    else
      v3[4] = -1;
    goto LABEL_23;
  }
  return result;
}
