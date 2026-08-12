int __stdcall sub_101B6BC0(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  int v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch]
  _DWORD *v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  result = sub_100422D0();
  if ( result )
  {
    v3 = (_DWORD *)(result + 3152);
    v11 = 0;
    v4 = 6;
    v14 = 20;
    v13 = v3;
    v12 = 48;
    do
    {
      v5 = *v3;
      if ( v5 != -1 )
      {
        v6 = (int *)((char *)off_103DCD74 + 16 * (v5 & 0xFFF) + 4);
        if ( *((_DWORD *)off_103DCD74 + 4 * (v5 & 0xFFF) + 2) == v5 >> 12 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            if ( (unsigned __int8)sub_1014FAE0(v7) )
            {
              v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1160))(v7);
              v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1164))(v7);
              if ( (v8 > a1 || v8 == a1 && v9 > a2) && (v8 < v4 || v8 == v4 && v9 < v14) )
              {
                v4 = v8;
                v14 = v9;
                v11 = v7;
              }
            }
          }
        }
      }
      v3 = v13 + 1;
      v10 = v12-- == 1;
      ++v13;
    }
    while ( !v10 );
    return v11;
  }
  return result;
}
