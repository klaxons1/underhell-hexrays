int __stdcall sub_1014FCF0(int a1)
{
  int v1; // ebx
  int result; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  int v5; // esi
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v1 = 20;
  v6 = 0;
  result = sub_100422D0();
  if ( result )
  {
    v3 = (_DWORD *)(result + 3152);
    v7 = 48;
    do
    {
      if ( *v3 != -1 )
      {
        v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (*v3 & 0xFFF) + 4);
        if ( *((_DWORD *)off_103DCD74 + 4 * (*v3 & 0xFFF) + 2) == *v3 >> 12 )
        {
          v5 = *v4;
          if ( *v4 )
          {
            if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 1160))(*v4) == a1
              && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 808))(v5)
              && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1164))(v5) <= v1 )
            {
              v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1164))(v5);
              v6 = v5;
            }
          }
        }
      }
      ++v3;
      --v7;
    }
    while ( v7 );
    return v6;
  }
  return result;
}
