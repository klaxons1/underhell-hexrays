bool __thiscall sub_10235520(int this, _DWORD *a2)
{
  int v3; // edi
  bool v4; // zf
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // esi
  __int16 v9; // ax
  int v11; // esi
  _WORD *i; // edi
  int v13; // [esp+Ch] [ebp-4h]
  int *v14; // [esp+18h] [ebp+8h]

  v3 = 0;
  v13 = this;
  if ( *(_WORD *)(this + 26) )
  {
    v4 = a2[2052] == 0;
    if ( (int)a2[2052] > 0 )
    {
      v14 = a2 + 2053;
      while ( 1 )
      {
        v7 = *(__int16 *)(this + 24);
        v8 = *v14;
        if ( *v14 == v7 || v8 == *(__int16 *)(this + 26) )
          goto LABEL_17;
        if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 252))(dword_106B31D0, v8, v7)
          || (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 252))(v8, *(__int16 *)(v13 + 26))
          || (++v14, ++v3, v3 >= a2[2052]) )
        {
LABEL_16:
          this = v13;
          goto LABEL_17;
        }
        this = v13;
      }
    }
  }
  else
  {
    v4 = a2[2052] == 0;
    if ( (int)a2[2052] > 0 )
    {
      v5 = a2 + 2053;
      do
      {
        v6 = *(__int16 *)(this + 24);
        if ( *v5 == v6 )
          break;
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 252))(dword_106B31D0, *v5, v6) )
          goto LABEL_16;
        this = v13;
        ++v3;
        ++v5;
      }
      while ( v3 < a2[2052] );
LABEL_17:
      v4 = v3 == a2[2052];
    }
  }
  if ( v4 )
    return 0;
  v9 = *(_WORD *)(this + 18);
  if ( v9 < 0 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)dword_106B31D0 + 248))(
             dword_106B31D0,
             *(__int16 *)(this + 16),
             a2 + 1,
             a2[2049]) != 0;
  v11 = v9 - 1;
  if ( v11 < 0 )
    return 0;
  for ( i = (_WORD *)(*(_DWORD *)(this + 20) + 2 * v11);
        ((unsigned __int8)(1 << (*i & 7)) & *((_BYTE *)a2 + ((int)(unsigned __int16)*i >> 3) + 4)) == 0;
        --i )
  {
    if ( --v11 < 0 )
      return 0;
  }
  return 1;
}
