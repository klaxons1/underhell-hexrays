int __stdcall sub_1014FDB0(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // edi
  int *v5; // ecx
  int v6; // esi
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  v2 = 20;
  if ( a2 >= 20 )
    return 0;
  if ( a1 >= 6 )
    return 0;
  v8 = 0;
  v3 = sub_100422D0();
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)(v3 + 3152);
  v9 = 48;
  do
  {
    if ( *v4 != -1 )
    {
      v5 = (int *)((char *)off_103DCD74 + 16 * (*v4 & 0xFFF) + 4);
      if ( *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 2) == *v4 >> 12 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          if ( (unsigned __int8)sub_1014FAE0(v6)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1160))(v6) == a1
            && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6) <= v2
            && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6) >= a2 )
          {
            v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6);
            v8 = v6;
          }
        }
      }
    }
    ++v4;
    --v9;
  }
  while ( v9 );
  return v8;
}
