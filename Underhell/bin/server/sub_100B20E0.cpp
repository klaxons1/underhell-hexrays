void __thiscall sub_100B20E0(int this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v4; // ecx
  int v5; // edi
  _DWORD *i; // eax
  int v7; // ecx
  _DWORD *v8; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 264))(a2) )
    {
      v4 = (_DWORD *)v2[699];
      if ( v4 != (_DWORD *)this )
      {
        if ( v4 )
          sub_100B1AB0(v4, (int)v2, 0);
        if ( *(_DWORD *)(this + 72) == 16 )
        {
          DevMsg("Error!! Squad %s is too big!!! Replacing last member\n", *(const char **)(this + 4));
          sub_100B1250((_DWORD *)(this + 8), *(_DWORD *)(this + 72) - 1);
        }
        a2 = *(_DWORD **)(*(int (__thiscall **)(_DWORD *))(*v2 + 8))(v2);
        sub_100B1C30((_DWORD *)(this + 8), &a2);
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 1912))(v2, this);
        v2[700] = *(_DWORD *)(this + 4);
        if ( *(int *)(this + 72) > 1 )
        {
          v5 = sub_1026A890(this + 8);
          v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1868))(v5);
          for ( i = sub_10077AB0(v8, (unsigned __int8 *)&a2); i; i = (_DWORD *)sub_10077340(v8, (unsigned __int8 *)&a2) )
          {
            if ( *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 )
              v7 = 0;
            else
              v7 = off_1061BE18[4 * (*i & 0xFFF) + 1];
            (*(void (__thiscall **)(_DWORD *, int, _DWORD *, int))(*v2 + 1876))(v2, v7, i + 1, v5);
          }
        }
      }
    }
  }
}
