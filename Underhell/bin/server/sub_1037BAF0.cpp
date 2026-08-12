int __cdecl sub_1037BAF0(int *a1)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_10227650(a1, dword_106E95A4);
  result = 0;
  for ( i = 0; result < dword_106E95A4; i = result )
  {
    v2 = *(_DWORD *)(dword_106E9598 + 4 * result);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
    {
      if ( *(_BYTE *)(v2 + 4536) )
      {
        if ( !sub_10050FC0((_DWORD *)(v2 + 4292))
          || (v3 = sub_10050FC0((_DWORD *)(v2 + 4292)),
              !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3)) )
        {
          v4 = a1[3];
          v5 = a1[1];
          if ( v4 + 1 > v5 )
            sub_102ABFC0(a1, v4 - v5 + 1);
          ++a1[3];
          v6 = *a1;
          v7 = a1[3] - v4 - 1;
          a1[4] = *a1;
          if ( v7 > 0 )
            memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
          v8 = (_DWORD *)(*a1 + 4 * v4);
          if ( v8 )
            *v8 = v2;
        }
      }
    }
    result = i + 1;
  }
  return result;
}
