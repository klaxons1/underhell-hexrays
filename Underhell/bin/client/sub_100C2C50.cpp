int __thiscall sub_100C2C50(int *this)
{
  int *v1; // ebx
  int result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int v8; // [esp+10h] [ebp-4h]

  v1 = this;
  result = 0;
  v6 = 0;
  if ( this[8] > 0 )
  {
    v8 = 0;
    do
    {
      v3 = v8 + v1[5];
      v4 = 0;
      v5 = *(unsigned __int16 *)(v3 + 18);
      if ( *(_WORD *)(v3 + 18) )
      {
        do
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v1[4] + 32))(
            v1[4],
            *(_DWORD *)(*(_DWORD *)(v3 + 4) + 20 * (unsigned __int16)v4 + 16),
            0,
            0,
            1);
          v1 = this;
          ++v4;
        }
        while ( v4 < v5 );
      }
      sub_100C1A20(v3);
      v8 += 84;
      result = v6 + 1;
      v6 = result;
    }
    while ( result < v1[8] );
  }
  return result;
}
