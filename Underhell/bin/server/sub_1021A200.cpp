int __thiscall sub_1021A200(int this)
{
  int v1; // esi
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  int v12; // eax
  int *v13; // eax
  int i; // [esp+8h] [ebp-4h]

  v1 = this + 8;
  *(_DWORD *)(this + 20) = 0;
  result = 1;
  for ( i = 1; result <= *(_DWORD *)(dword_106B31C8 + 20); i = result )
  {
    v3 = sub_1025FB50(result);
    v4 = v3;
    if ( v3 )
    {
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v3 + 24));
      if ( !*(_BYTE *)(this + 28) || (dword_10646078 > 0 ? 0 : dword_10646074) != v4 )
      {
        v6 = *(_DWORD *)(v1 + 12);
        v7 = 0;
        if ( v6 <= 0 )
          goto LABEL_11;
        v8 = *(_DWORD **)v1;
        while ( *v8 != v5 )
        {
          ++v7;
          ++v8;
          if ( v7 >= v6 )
            goto LABEL_11;
        }
        if ( v7 == -1 )
        {
LABEL_11:
          v9 = *(_DWORD *)(v1 + 4);
          v10 = *(_DWORD *)(v1 + 12);
          if ( v6 + 1 > v9 )
            sub_102ABFC0(v10 - v9 + 1);
          ++*(_DWORD *)(v1 + 12);
          v11 = *(_DWORD **)v1;
          v12 = *(_DWORD *)(v1 + 12) - v10 - 1;
          *(_DWORD *)(v1 + 16) = *(_DWORD *)v1;
          if ( v12 > 0 )
            memcpy(&v11[v10 + 1], &v11[v10], 4 * v12);
          v13 = (int *)(*(_DWORD *)v1 + 4 * v10);
          if ( v13 )
            *v13 = v5;
        }
      }
    }
    result = i + 1;
  }
  return result;
}
