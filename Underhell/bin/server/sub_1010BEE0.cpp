int __stdcall sub_1010BEE0(int *a1, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  bool v8; // zf
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]
  int v12; // [esp+1Ch] [ebp+8h]

  v2 = *a1;
  result = *(unsigned __int16 *)(a1[2] + 16);
  v12 = *a1;
  if ( result )
  {
    v9 = result;
    do
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
      result = (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 12))(
                 a2,
                 "Value",
                 v2,
                 0,
                 dword_10614A14,
                 dword_10614A18);
      if ( result )
      {
        v4 = 0;
        *(_DWORD *)(v2 + 20) = 0;
        v11 = 0;
        if ( v10 > 0 )
        {
          do
          {
            v5 = sub_1042FCC0(28);
            if ( v5 )
            {
              *(_DWORD *)(v5 + 24) = 0;
              v6 = ++dword_1069A898;
              *(float *)(v5 + 12) = 0.0;
              *(_DWORD *)(v5 + 20) = v6;
              *(_DWORD *)v5 = 0;
              *(_DWORD *)(v5 + 8) = 0;
              *(_DWORD *)(v5 + 4) = 0;
              *(_DWORD *)(v5 + 16) = -1;
              v7 = v5;
            }
            else
            {
              v7 = 0;
            }
            result = (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 12))(
                       a2,
                       "EntityOutput",
                       v7,
                       0,
                       dword_106149FC,
                       dword_10614A00);
            if ( !result )
              break;
            if ( v4 )
              *(_DWORD *)(v4 + 24) = v7;
            else
              *(_DWORD *)(v12 + 20) = v7;
            result = v11 + 1;
            *(_DWORD *)(v7 + 24) = 0;
            v4 = v7;
            v11 = result;
          }
          while ( result < v10 );
          v2 = v12;
        }
      }
      v2 += 24;
      v8 = v9-- == 1;
      v12 = v2;
    }
    while ( !v8 );
  }
  return result;
}
