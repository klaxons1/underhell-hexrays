int __thiscall sub_1042B5F0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // edi
  int v7; // eax
  const char *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  v3 = a2[3];
  result = 0;
  v14 = this;
  v12 = v3;
  for ( i = 0; result < v3; i = result )
  {
    v5 = *(_DWORD **)(*(_DWORD *)(*a2 + 4 * result) + 24);
    if ( v5 )
    {
      do
      {
        v6 = (_DWORD *)this[6];
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = KeyValuesSystem();
            v8 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, *v6);
            v9 = KeyValuesSystem();
            if ( !strcmp((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 16))(v9, *v5), v8) )
              break;
            v6 = (_DWORD *)v6[5];
            if ( !v6 )
            {
              this = v14;
              goto LABEL_7;
            }
          }
          sub_1042B1C0(v6, (int)v5);
          this = v14;
        }
        else
        {
LABEL_7:
          v10 = sub_1042AFF0(v5);
          v11 = this[6];
          if ( v11 )
          {
            for ( ; *(_DWORD *)(v11 + 20); v11 = *(_DWORD *)(v11 + 20) )
              ;
            *(_DWORD *)(v11 + 20) = v10;
          }
          else
          {
            this[6] = v10;
          }
        }
        v5 = (_DWORD *)v5[5];
      }
      while ( v5 );
      result = i;
      v3 = v12;
    }
    ++result;
  }
  return result;
}
