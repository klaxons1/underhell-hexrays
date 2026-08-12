unsigned int __cdecl sub_10170960(int a1, int a2, int a3, int a4)
{
  unsigned int result; // eax
  unsigned int i; // esi
  _DWORD *v6; // ebx
  int v7; // edx
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // esi
  int v11; // edi
  int v12; // eax
  int *v13; // ecx
  int v14; // esi
  _DWORD *v15; // [esp+8h] [ebp-4h]

  result = sub_101FD460();
  for ( i = result; i; i = *(_DWORD *)(i + 848) )
    result = sub_101FD8C0(0);
  v6 = (_DWORD *)dword_1062975C;
  if ( dword_1062975C )
  {
    do
    {
      v7 = *v6;
      v15 = (_DWORD *)v6[2];
      v8 = *(_DWORD *)(*v6 + 804);
      if ( v8 != -1
        && (v9 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 804) & 0xFFF) + 1],
            off_1061BE18[4 * (*(_DWORD *)(v7 + 804) & 0xFFF) + 2] == v8 >> 12)
        && (result = *v9) != 0 )
      {
        if ( (*(_DWORD *)(result + 192) & 0x20) == 0 )
        {
          v10 = result + 12;
          result = sub_102357F0(*(_DWORD *)(a1 + 24), a3, a4);
          if ( (_BYTE)result )
          {
            v11 = *(_DWORD *)dword_106B31D0;
            v12 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v10 + 20))(v10);
            result = (*(int (__thiscall **)(int, int, int))(v11 + 252))(dword_106B31D0, a2, v12);
            if ( result )
            {
              result = *(_DWORD *)(*v6 + 800);
              if ( result != -1 )
              {
                v13 = &off_1061BE18[4 * (*(_DWORD *)(*v6 + 800) & 0xFFF) + 1];
                result >>= 12;
                if ( off_1061BE18[4 * (*(_DWORD *)(*v6 + 800) & 0xFFF) + 2] == result )
                {
                  v14 = *v13;
                  if ( *v13 )
                  {
                    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
                      sub_100DAE60(*v13);
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 236))(dword_106B31D0, v14 + 580);
                    result = sub_101FD8C0(1);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        result = sub_1025FAC0(v7);
      }
      v6 = v15;
    }
    while ( v15 );
  }
  return result;
}
