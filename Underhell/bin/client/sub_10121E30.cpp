int __userpurge sub_10121E30@<eax>(int *p_j@<edi>, int **a2, int j)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int k; // ebx
  _DWORD *v8; // edi
  int v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int *v14; // [esp+18h] [ebp+8h]

  v3 = j;
  (*(void (__thiscall **)(int))(*(_DWORD *)j + 28))(j);
  v4 = *((unsigned __int16 *)a2[2] + 8) - 1;
  v14 = *a2;
  for ( i = v4; i >= 0; --i )
  {
    v5 = *v14;
    v12 = *v14;
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 28))(v3, p_j);
    (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 20))(v3, v5, &dword_103E5728);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
    v6 = dword_103E5788 - 1;
    for ( j = 0; v6 >= 0; --v6 )
    {
      if ( **(_DWORD **)(dword_103E577C + 4 * v6) == v5 )
        ++j;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 28))(v3, v11);
    v11 = 1;
    p_j = &j;
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
    for ( k = dword_103E5788 - 1; k >= 0; --k )
    {
      v8 = *(_DWORD **)(dword_103E577C + 4 * k);
      if ( *v8 == v12 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
        (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v3 + 20))(v3, v8, &dword_103E5740);
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
    ++v14;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
}
