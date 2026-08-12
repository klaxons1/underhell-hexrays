void __thiscall sub_10227450(_DWORD *this, int a2)
{
  int *v2; // ebx
  int v3; // esi
  _DWORD *v4; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int i; // esi
  _DWORD *v10; // edx
  char v12; // [esp+13h] [ebp-1h]

  v2 = off_1061BE18;
  v12 = 0;
  v3 = 15;
  v4 = this + 236;
  do
  {
    if ( *v4 != -1 )
    {
      v5 = &v2[4 * (*v4 & 0xFFF) + 1];
      v6 = *v4 >> 12;
      if ( v2[4 * (*v4 & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( v12 )
          {
            sub_10226190(this, v3);
            v2 = off_1061BE18;
          }
          else
          {
            if ( v2[4 * (*v4 & 0xFFF) + 2] == v6 )
              v7 = *v5;
            else
              v7 = 0;
            if ( v7 == a2 )
              v12 = 1;
          }
        }
      }
    }
    --v4;
    --v3;
  }
  while ( v3 >= 0 );
  if ( v12 )
  {
    v8 = this[203];
    for ( i = 0; i < v8; ++i )
    {
      v10 = (_DWORD *)(this[200] + 4 * i);
      if ( *v10 != -1 && v2[4 * (*v10 & 0xFFF) + 2] == *v10 >> 12 )
      {
        if ( v2[4 * (*v10 & 0xFFF) + 1] )
        {
          sub_10227450(this);
          v2 = off_1061BE18;
        }
      }
    }
  }
}
