int __thiscall sub_1027D830(int this, int *a2, int *a3)
{
  int result; // eax
  int v6; // ebp
  int (__thiscall **v7)(int, int); // esi
  int v8; // eax
  int v9; // eax
  const unsigned __int16 *v11; // esi
  int j; // ecx
  int v13; // [esp+18h] [ebp-18h]
  const unsigned __int16 *v14; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-8h] BYREF
  signed int v18; // [esp+2Ch] [ebp-4h]
  int v19; // [esp+34h] [ebp+4h]
  signed int i; // [esp+38h] [ebp+8h]

  *a2 = 0;
  *a3 = 0;
  result = *(_DWORD *)(this + 32);
  v19 = 0;
  v14 = *(const unsigned __int16 **)(this + 24);
  v15 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(this + 52) & 2) != 0 || *(_BYTE *)(this + 76) )
      sub_1027D430((int *)this);
    v6 = dword_1047CA6C;
    v7 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 132))(this);
    v9 = (*v7)(v6, v8);
    v11 = v14;
    v13 = v9;
    *a3 = v9;
    v18 = wcslen(v11);
    for ( i = 0; i < v18; ++i )
    {
      if ( *v11 == 38 && v11[1] )
      {
        ++i;
        ++v11;
      }
      (*(void (__stdcall **)(int, _DWORD, int *, const unsigned __int16 **, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        v15,
        *v11,
        &v16,
        &v14,
        &v17);
      *a2 += (int)v14 + v16 + v17;
      if ( *v11 == 10 )
      {
        *a3 += v13;
        if ( *a2 > v19 )
          v19 = *a2;
        *a2 = 0;
      }
      if ( (*(_BYTE *)(this + 52) & 2) != 0 || *(_BYTE *)(this + 76) )
      {
        for ( j = 0; j < *(_DWORD *)(this + 68); ++j )
        {
          if ( v11 == *(const unsigned __int16 **)(*(_DWORD *)(this + 56) + 4 * j) )
          {
            *a3 += v13;
            if ( *a2 > v19 )
              v19 = *a2;
            *a2 = 0;
          }
        }
      }
      ++v11;
    }
    result = v19;
    if ( *a2 < v19 )
      *a2 = v19;
  }
  return result;
}
