char __thiscall sub_100C0720(_DWORD *this, unsigned __int16 *a2, unsigned int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // ebx
  const unsigned __int16 *v10; // edx
  unsigned __int16 *v11; // edi
  unsigned __int16 v12; // ax
  unsigned int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]
  unsigned int v16; // [esp+20h] [ebp+Ch]

  v3 = this;
  v4 = 0;
  *a2 = 0;
  v5 = this[5];
  v14 = v5;
  if ( v5 <= 0 )
  {
LABEL_5:
    v7 = 0;
    v8 = 0;
    v16 = a3 >> 1;
    if ( v5 > 0 )
    {
      while ( 1 )
      {
        v10 = *(const unsigned __int16 **)(*(_DWORD *)(v3[2] + 4 * v8) + 12);
        v13 = wcslen(v10) + v7 + 1;
        if ( v13 >= v16 )
          break;
        wcscat(a2, v10);
        if ( v8 < v14 - 1 )
        {
          v11 = a2 - 1;
          do
          {
            v12 = v11[1];
            ++v11;
          }
          while ( v12 );
          *(_DWORD *)v11 = 32;
        }
        v7 = v13;
        if ( ++v8 >= v14 )
          break;
        v3 = this;
      }
    }
    return 1;
  }
  else
  {
    v6 = this[2];
    while ( *(_DWORD *)(*(_DWORD *)v6 + 12) )
    {
      ++v4;
      v6 += 4;
      if ( v4 >= v5 )
        goto LABEL_5;
    }
    return 0;
  }
}
