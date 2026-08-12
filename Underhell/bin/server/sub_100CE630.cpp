int __thiscall sub_100CE630(char *this)
{
  unsigned int v2; // eax
  unsigned int *v3; // ecx
  int *v4; // edx
  int v5; // edi
  char *v6; // edi
  _DWORD *v7; // ebx
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int *v11; // ecx
  int result; // eax
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 525);
  v3 = (unsigned int *)(this + 2100);
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        sub_100C9FD0(v3, 0);
        (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)this + 1132))(this, v5, 0);
      }
    }
  }
  v6 = this + 1908;
  v14 = 0;
  v7 = this + 1908;
  v13 = -1908 - (_DWORD)this;
  do
  {
    if ( *v7 != -1 )
    {
      v8 = &off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      v9 = *v7 >> 12;
      if ( off_1061BE18[4 * (*v7 & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          v10 = off_1061BE18[4 * (*v7 & 0xFFF) + 2] == v9 ? *v8 : 0;
          (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 1356))(v10);
          if ( *(_DWORD *)&v6[(_DWORD)v7 + v13] != -1 )
          {
            if ( this[84] )
            {
              this[88] |= 1u;
            }
            else
            {
              v11 = (int *)*((_DWORD *)this + 6);
              if ( v11 )
                sub_100194B0(v11, 4 * v14 + 1908);
            }
            *(_DWORD *)&v6[(_DWORD)v7 + v13] = -1;
          }
        }
      }
    }
    result = v14 + 1;
    ++v7;
    v14 = result;
  }
  while ( result < 48 );
  return result;
}
