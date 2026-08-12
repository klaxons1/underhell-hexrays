int __thiscall sub_1042D930(void *this)
{
  int i; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  char v12; // dl

  if ( *((_BYTE *)this + 20) )
    return 0;
  for ( i = 0; ; i += v6 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *((_DWORD *)this + 7);
    v6 = 128;
    if ( v4 + i >= v5 )
      goto LABEL_24;
    if ( v4 + i + 128 > v5 )
      v6 = v5 - v4 - i;
    if ( (*((_BYTE *)this + 20) & 2) == 0 )
    {
      v7 = v6 + i;
      if ( v5 >= v6 + i + v4 )
      {
        v8 = *((_DWORD *)this + 8);
        if ( (v4 < v8 || *((_DWORD *)this + 1) < v4 + v7 - v8)
          && !(*((unsigned __int8 (__thiscall **)(void *, int))this + 9))(this, v7) )
        {
          *((_BYTE *)this + 20) |= 2u;
        }
      }
      else
      {
        *((_BYTE *)this + 20) |= 2u;
      }
      *((_BYTE *)this + 20) &= ~2u;
    }
    v9 = *((_DWORD *)this + 3);
    if ( *((_DWORD *)this + 7) - v9 < v6 )
      v6 = *((_DWORD *)this + 7) - v9;
    if ( !v6 )
    {
LABEL_24:
      if ( i )
        return i + 1;
      else
        return 0;
    }
    v10 = 0;
    v11 = i + *(_DWORD *)this + v9 - *((_DWORD *)this + 8);
    if ( v6 > 0 )
      break;
LABEL_23:
    ;
  }
  while ( 1 )
  {
    v12 = *(_BYTE *)(v10 + v11);
    if ( v12 == 10 || v12 == 13 )
      return v10 + i + 2;
    if ( !v12 )
      return v10 + i + 1;
    if ( ++v10 >= v6 )
      goto LABEL_23;
  }
}
