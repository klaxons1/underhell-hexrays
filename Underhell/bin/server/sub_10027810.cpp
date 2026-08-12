void __usercall sub_10027810(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  bool v3; // c0
  bool v5; // zf
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall *v11)(int, float *); // edx
  int v12; // eax
  unsigned __int8 (__thiscall *v13)(int); // edx
  _BYTE *v14; // ebx
  int v15; // edi
  int v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  int (__thiscall *v20)(int); // edx
  _BYTE v22[8]; // [esp+28h] [ebp-40h] BYREF
  float v23; // [esp+30h] [ebp-38h]
  float v24[3]; // [esp+34h] [ebp-34h] BYREF
  float v25; // [esp+40h] [ebp-28h] BYREF
  float v26; // [esp+44h] [ebp-24h]
  float v27; // [esp+48h] [ebp-20h]
  float v28; // [esp+4Ch] [ebp-1Ch]
  float v29; // [esp+50h] [ebp-18h]
  int v30; // [esp+54h] [ebp-14h]
  int v31; // [esp+58h] [ebp-10h]
  int v32; // [esp+5Ch] [ebp-Ch]
  float v33; // [esp+60h] [ebp-8h]
  char v34; // [esp+67h] [ebp-1h]

  v3 = *(float *)(dword_106B31C8 + 16) > 0.0;
  v31 = a1;
  if ( v3 )
  {
    if ( *(_DWORD *)(dword_10690F3C + 48) )
    {
      v5 = *(_BYTE *)(a1 + 306) == 3;
      *(_BYTE *)(a1 + 3545) = 0;
      if ( v5 )
      {
        v6 = *(_DWORD *)(a1 + 424);
        v32 = v6;
        if ( v6 )
        {
          v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 316))(v6, a3, a2);
          v8 = sub_101C5260(a1);
          v9 = *(_DWORD *)(a1 + 252) >> 11;
          v30 = v8;
          if ( (v9 & 1) != 0 )
            sub_100DAE60(a1);
          v10 = sub_10073730(*(_DWORD *)(a1 + 1676));
          v11 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 204);
          v28 = *(float *)(a1 + 588) + *(float *)(v10 + 8);
          v11(v6, v24);
          v12 = *(_DWORD *)v7;
          v33 = 0.0;
          v13 = *(unsigned __int8 (__thiscall **)(int))(v12 + 4);
          v14 = 0;
          v34 = 0;
          if ( v13(v7) )
          {
            while ( 1 )
            {
              v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 8))(v7, 1);
              v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 68))(v15);
              v14 = (_BYTE *)v16;
              if ( v16 )
              {
                if ( v30 != v16 )
                {
                  v29 = sub_101B4DE0(v16);
                  if ( v14[306] == 6 )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 40))(v15) )
                    {
                      if ( v29 < 500.0 && !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v14 + 340))(v14) )
                      {
                        *(_BYTE *)(v31 + 3545) = 1;
                        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v15 + 204))(v15, &v25, 0);
                        (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 16))(v7, v22);
                        v17 = v25 - v24[0];
                        v25 = v17;
                        v18 = v26 - v24[1];
                        v26 = v18;
                        v19 = v27 - v24[2];
                        v27 = v19;
                        if ( v19 * v19 + v18 * v18 + v17 * v17 < 25.0 )
                        {
                          v33 = 4.0;
                          if ( fabs(v23 - v28) < 2.0 )
                            break;
                        }
                      }
                    }
                  }
                }
              }
              (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 48))(v7);
              if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7) )
                goto LABEL_21;
            }
            v20 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 76);
            v33 = 0.5;
            if ( (v20(v15) & 4) != 0 )
              v33 = 0.25;
            v34 = 1;
LABEL_21:
            v6 = v32;
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6);
          if ( v34 )
          {
            sub_101CABB0(v31, (int)v14, 1, v33);
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 108))(v6);
          }
        }
      }
    }
  }
}
