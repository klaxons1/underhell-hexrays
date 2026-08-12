void __thiscall sub_102693F0(int this)
{
  int *v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // [esp+Ch] [ebp-4h]

  v2 = (int *)(this + 248);
  *(_DWORD *)(this + 260) = 0;
  v3 = *(_DWORD *)(this + 224);
  v17 = v3;
  if ( v3 != -1 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(this + 268) )
      {
        v4 = 0;
        if ( *(int *)(this + 260) > 0 )
        {
          v5 = 12 * v3;
          do
          {
            if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(this + 268))(
                   *(_DWORD *)(*(_DWORD *)(v5 + *(_DWORD *)(this + 212)) + 312),
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 212) + 12 * *(_DWORD *)(*v2 + 4 * v4)) + 312)) )
            {
              break;
            }
            ++v4;
          }
          while ( v4 < *(_DWORD *)(this + 260) );
          v3 = v17;
        }
        if ( v4 == *(_DWORD *)(this + 260) )
        {
          v4 = v2[3];
          v6 = v2[1];
          if ( v4 + 1 > v6 )
            sub_1010AFF0(v2, v4 - v6 + 1);
        }
        else
        {
          v11 = v2[3];
          v12 = v2[1];
          if ( v11 + 1 > v12 )
            sub_1010AFF0(v2, v11 - v12 + 1);
        }
        ++v2[3];
        v7 = *v2;
        v8 = v2[3] - v4 - 1;
        v9 = v2[3] - v4 == 1;
        v2[4] = *v2;
        if ( v8 >= 0 && !v9 )
          memcpy((void *)(v7 + 4 * v4 + 4), (const void *)(v7 + 4 * v4), 4 * v8);
        v10 = (_DWORD *)(*v2 + 4 * v4);
      }
      else
      {
        v13 = v2[3];
        v14 = v2[1];
        if ( v13 + 1 > v14 )
          sub_1010AFF0(v2, v13 - v14 + 1);
        ++v2[3];
        v15 = *v2;
        v16 = v2[3] - v13 - 1;
        v9 = v2[3] - v13 == 1;
        v2[4] = *v2;
        if ( v16 >= 0 && !v9 )
          memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
        v10 = (_DWORD *)(*v2 + 4 * v13);
      }
      if ( v10 )
        *v10 = v3;
      v17 = *(_DWORD *)(*(_DWORD *)(this + 212) + 12 * v3 + 8);
      if ( v17 == -1 )
        break;
      v3 = *(_DWORD *)(*(_DWORD *)(this + 212) + 12 * v3 + 8);
    }
  }
}
