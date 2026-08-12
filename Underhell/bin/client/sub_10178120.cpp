char __cdecl sub_10178120(int a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  double v9; // st7
  int v10; // edi
  int v11; // ebx
  _BYTE v13[512]; // [esp+34h] [ebp-214h] BYREF
  float v14[3]; // [esp+234h] [ebp-14h] BYREF
  _DWORD *v15; // [esp+240h] [ebp-8h]
  int v16; // [esp+244h] [ebp-4h]
  int savedregs; // [esp+248h] [ebp+0h] BYREF

  v14[0] = 1.0;
  v1 = off_103DCD78;
  v14[1] = 1.0;
  v14[2] = 1.0;
  v2 = sub_1009B7F0((int *)a1);
  v3 = sub_1007A6A0(v1, v2);
  v15 = (_DWORD *)v3;
  if ( v3 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 164))(v3);
    v4 = (_DWORD *)v3;
    if ( v3 )
    {
      v5 = *(_DWORD *)dword_10413178;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 4) + 36))(v3 + 4);
      v3 = (*(int (__thiscall **)(int, int))(v5 + 112))(dword_10413178, v6);
      v7 = v3;
      if ( v3 )
      {
        v3 = 3 * sub_10025760(v4);
        v8 = v7 + *(_DWORD *)(v7 + 176) + 4 * v3;
        if ( v8 )
        {
          LOBYTE(v3) = sub_10028810((int)v4, v13);
          if ( (_BYTE)v3 )
          {
            v9 = *(float *)(a1 + 60) + 0.5;
            v3 = (int)v9;
            if ( (int)v9 > 0 )
            {
              v16 = (int)v9;
              do
              {
                v10 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 8))(
                        dword_10413198,
                        1,
                        *(_DWORD *)(v8 + 4));
                v11 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 8))(
                        dword_10413198,
                        1,
                        *(_DWORD *)(v8 + 4));
                ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.050000001,
                  0.2);
                LOBYTE(v3) = sub_10177C80((int)&savedregs, v10, v8, v15, v10, v11, COERCE_INT(*(float *)(a1 + 56)), v14);
                --v16;
              }
              while ( v16 );
            }
          }
        }
      }
    }
  }
  return v3;
}
