void __usercall sub_101AE630(int a1@<ecx>, int a2@<esi>)
{
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // edx
  float *v10; // ecx
  double v11; // st7
  unsigned __int8 v12; // bl
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  double v17; // st7
  int v18; // ebx
  unsigned __int16 v20[256]; // [esp+8h] [ebp-220h] BYREF
  float *v21; // [esp+208h] [ebp-20h]
  int v22; // [esp+20Ch] [ebp-1Ch]
  int v23; // [esp+210h] [ebp-18h]
  int v24; // [esp+214h] [ebp-14h] BYREF
  int v25; // [esp+218h] [ebp-10h]
  int v26; // [esp+21Ch] [ebp-Ch]
  int v27; // [esp+220h] [ebp-8h] BYREF
  int v28; // [esp+224h] [ebp-4h]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 276) )
  {
    sub_10132120((int)&v24, (int)&v27);
    sub_102361A0(v24, v27);
    v22 = 0;
    if ( *(int *)(a1 + 276) > 0 )
    {
      v26 = 0;
      do
      {
        v4 = v26 + *(_DWORD *)(a1 + 264);
        if ( v4 )
        {
          v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(
                 dword_1047CA7C,
                 "ClientScheme");
          v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v5);
          v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 12))(v6, v4 + 256, 1);
          v8 = *(_DWORD *)dword_1047CA6C;
          v23 = v7;
          v9 = (*(int (__thiscall **)(int, int))(v8 + 268))(dword_1047CA6C, v7);
          v28 = -v9;
          v10 = (float *)(v4 + 512);
          v21 = (float *)(v4 + 512);
          *(_BYTE *)(v4 + 520) = (double)-v9 <= *(float *)(v4 + 512) && (double)v27 >= *v10;
          v28 = *(_DWORD *)(a1 + 257);
          if ( v3 == *(_DWORD *)(a1 + 276) - 1 )
          {
            if ( *(_BYTE *)(a1 + 296) )
            {
              if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(a1 + 292) )
              {
                v25 = *(_DWORD *)(a1 + 300);
                if ( v25 > 0 )
                {
                  v13 = (int)((double)v25 - (*(float *)(a1 + 284) + *(float *)(a1 + 284)) * *((float *)off_103DC81C + 4));
                  *(_DWORD *)(a1 + 300) = v13;
                  if ( v13 <= 0 )
                  {
                    *(_BYTE *)(v4 + 520) = 0;
                    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(
                      dword_1041315C,
                      "creditsdone");
                  }
                }
              }
              v12 = *(int *)(a1 + 300) < 0 ? 0 : *(_DWORD *)(a1 + 300);
            }
            else
            {
              v11 = *v10 - (double)dword_1044ECA8 / *(float *)(a1 + 284) * *((float *)off_103DC81C + 4);
              *v10 = v11;
              v12 = HIBYTE(v28);
              if ( (int)v11 + v9 / 2 <= v27 / 2 )
              {
                *(_BYTE *)(a1 + 296) = 1;
                *(float *)(a1 + 292) = *((float *)off_103DC81C + 3) + 10.0;
              }
            }
          }
          else
          {
            v12 = HIBYTE(v28);
            *v10 = *v10 - (double)dword_1044ECA8 / *(float *)(a1 + 284) * *((float *)off_103DC81C + 4);
          }
          if ( *(_BYTE *)(v4 + 520) )
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v23, a2);
            (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 76))(
              dword_1047CA6C,
              (unsigned __int8)v28,
              BYTE1(v28),
              BYTE2(v28),
              v12);
            if ( *(_BYTE *)v4 == 35 )
            {
              v14 = *(_DWORD *)dword_1047CA78;
              v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v4);
              (*(void (__cdecl **)(int, unsigned __int16 *, int, int))(v14 + 32))(dword_1047CA78, v20, 512, v15);
            }
            else
            {
              (*(void (__thiscall **)(int, int, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
                dword_1047CA78,
                v4,
                v20,
                512);
            }
            v16 = sub_101AE310(v20, v23);
            v17 = *v21;
            v18 = *(_DWORD *)dword_1047CA6C;
            v25 = v16;
            a2 = (int)v17;
            (*(void (__thiscall **)(int, int))(v18 + 80))(dword_1047CA6C, v24 / 2 - v16 / 2);
            (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
              dword_1047CA6C,
              v20,
              0);
          }
        }
        v26 += 540;
        v3 = v22 + 1;
        v22 = v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 276) );
    }
  }
}
