int __fastcall sub_100B1470(int a1)
{
  int v1; // ebx
  _DWORD *v2; // edi
  int *v3; // ecx
  int v4; // esi
  int v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v1 = 0;
  v6 = a1;
  v8 = 0;
  v7 = 0;
  if ( *(int *)(a1 + 72) > 0 )
  {
    v2 = (_DWORD *)(a1 + 8);
    do
    {
      if ( *v2 != -1
        && (v3 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1], off_1061BE18[4 * (*v2 & 0xFFF) + 2] == *v2 >> 12)
        && (v4 = *v3) != 0
        && (*(_BYTE *)(v4 + 306) || (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 320) + 44))(v4 + 320))
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1916))(v4) )
      {
        if ( !v1 )
        {
          if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
            v1 = 0;
          else
            v1 = off_1061BE18[4 * (*v2 & 0xFFF) + 1];
        }
      }
      else
      {
        ++v8;
      }
      a1 = v6;
      ++v2;
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v6 + 72) );
  }
  return *(_DWORD *)(a1 + 72) - v8 <= 1 ? 0 : v1;
}
