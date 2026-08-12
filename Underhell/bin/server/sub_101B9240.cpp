int __fastcall sub_101B9240(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // edi
  int v5; // ebx
  int v6; // ebx
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-8h]
  _DWORD *v9; // [esp+8h] [ebp-4h]

  result = 0;
  v9 = a1;
  v7 = 0;
  if ( (int)a1[65] > 0 )
  {
    v8 = 0;
    do
    {
      v2 = (_DWORD *)(v8 + a1[62]);
      v3 = (2 * (*(_BYTE *)(*v2 + 252) & 1))
         | ((*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v2 + 264))(*v2) != 0);
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(*v2 + 320) + 48))(*v2 + 320) & 4 | v3;
      sub_100D9E70((int *)*v2, (int)v2, v2 + 2);
      v5 = (2 * (*(_BYTE *)(*v2 + 252) & 1))
         | ((*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v2 + 264))(*v2) != 0);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(*v2 + 320) + 48))(*v2 + 320) & 4 | v5;
      if ( *((_BYTE *)v2 + 88) && v4 != v6 )
        sub_101B8050(v9, v2[1]);
      v8 += 92;
      ++v7;
      a1 = v9;
    }
    while ( v7 < v9[65] );
    result = 0;
  }
  a1[65] = 0;
  a1[70] = 0;
  return result;
}
