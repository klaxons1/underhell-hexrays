int *__stdcall sub_102368D0(_DWORD *a1, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  int *v5; // ecx
  int *v6; // esi
  int v7; // eax
  int *v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+4h] [ebp-4h]

  if ( a2 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1240))(a2) )
    return 0;
  v3 = -1;
  v8 = 0;
  v4 = a1 + 477;
  v9 = 48;
  do
  {
    if ( *v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 )
      {
        v6 = (int *)*v5;
        if ( *v5 )
        {
          if ( !a2 || (*(unsigned __int8 (__thiscall **)(int))(*v6 + 1236))(*v5) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*a1 + 972))(a1, v6) )
            {
              if ( (*(int (__thiscall **)(int *))(*v6 + 1232))(v6) > v3 )
              {
                if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 1272))(v6)
                  || v6[300] > 0
                  || (v7 = (*(int (__thiscall **)(int *))(*v6 + 1284))(v6), sub_100CF5D0(a1, v7)) )
                {
                  v3 = (*(int (__thiscall **)(int *))(*v6 + 1232))(v6);
                  v8 = v6;
                }
              }
            }
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
