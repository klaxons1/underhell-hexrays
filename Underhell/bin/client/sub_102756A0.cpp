int __thiscall sub_102756A0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // edx
  int v15[3]; // [esp+8h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v3 = this[67];
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  v17 = 0;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 852))(v3, v15);
  if ( v16 )
  {
    v4 = *(_DWORD *)v15[0];
    v5 = (_DWORD *)this[67];
    if ( *(int *)v15[0] >= 0
      && v4 < v5[54]
      && v4 <= v5[60]
      && ((v6 = 12 * v4 + v5[53], *(_DWORD *)(v6 + 4) != v4) || *(_DWORD *)(v6 + 8) == v4) )
    {
      v7 = *(_DWORD **)(12 * v4 + v5[53]);
    }
    else
    {
      v7 = 0;
    }
    v8 = sub_10273C00(v7);
    v9 = a2;
    v10 = v8;
    if ( a2 )
    {
      if ( v8 && a2[52] > *(_DWORD *)(v8 + 208) )
      {
        do
        {
          sub_10275580((int)v9, 0);
          v11 = v9[53];
          v12 = (_DWORD *)v9[67];
          if ( v11 < 0
            || v11 >= v12[54]
            || v11 > v12[60]
            || (v13 = v12[53], *(_DWORD *)(v13 + 12 * v11 + 4) == v11) && *(_DWORD *)(v13 + 12 * v11 + 8) != v11 )
          {
            v9 = 0;
          }
          else
          {
            v9 = *(_DWORD **)(v13 + 12 * v11);
          }
        }
        while ( v9[52] > *(_DWORD *)(v10 + 208) );
      }
    }
  }
  return sub_1011A810(v15);
}
