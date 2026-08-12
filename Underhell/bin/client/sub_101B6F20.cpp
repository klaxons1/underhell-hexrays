int __stdcall sub_101B6F20(int a1)
{
  int v1; // eax
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // [esp+0h] [ebp-4h]

  v1 = sub_100422D0();
  if ( !v1 )
    return -1;
  v3 = -1;
  v4 = (_DWORD *)(v1 + 3152);
  v7 = 48;
  do
  {
    if ( *v4 != -1 )
    {
      v5 = (_DWORD *)((char *)off_103DCD74 + 16 * (*v4 & 0xFFF) + 4);
      if ( *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 2) == *v4 >> 12 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 1160))(*v5) == a1
            && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6) > v3 )
          {
            v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1164))(v6);
          }
        }
      }
    }
    ++v4;
    --v7;
  }
  while ( v7 );
  return v3;
}
