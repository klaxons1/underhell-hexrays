void __thiscall sub_101AECC0(int this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  void (__thiscall *v6)(int, int); // eax
  int v7; // ebx
  double v8; // st7
  int v9; // ebx
  float *v10; // edx
  int v11; // ecx
  double v12; // st7
  float v13; // [esp+1Ch] [ebp-22Ch]
  int v14; // [esp+20h] [ebp-228h]
  int v15; // [esp+20h] [ebp-228h]
  _BYTE v16[512]; // [esp+30h] [ebp-218h] BYREF
  int v17; // [esp+230h] [ebp-18h] BYREF
  int v18; // [esp+234h] [ebp-14h]
  int v19; // [esp+238h] [ebp-10h] BYREF
  int v20; // [esp+23Ch] [ebp-Ch]
  int v21; // [esp+240h] [ebp-8h]
  float v22; // [esp+244h] [ebp-4h]

  v2 = 0;
  if ( *(_DWORD *)(this + 276) )
  {
    sub_10132120((int)&v19, (int)&v17);
    sub_102361A0(v19, v17);
    v21 = 0;
    if ( *(int *)(this + 276) > 0 )
    {
      v20 = 0;
      do
      {
        v3 = v20 + *(_DWORD *)(this + 264);
        if ( v3 )
        {
          if ( *(_BYTE *)(v3 + 520) )
          {
            v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(
                   dword_1047CA7C,
                   "ClientScheme");
            v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v4);
            v14 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 12))(v5, v3 + 256, 0);
            v6 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68);
            v22 = *((float *)off_103DC81C + 3) - *(float *)(v3 + 532);
            v6(dword_1047CA6C, v14);
            v7 = *(_DWORD *)dword_1047CA6C;
            v13 = *(float *)(v3 + 528) + *(float *)(this + 316);
            v8 = sub_101AE360(*(float *)(this + 312), *(float *)(this + 320), v13, v22);
            LODWORD(v22) = *(unsigned __int8 *)(this + 867);
            (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(v7 + 76))(
              dword_1047CA6C,
              *(unsigned __int8 *)(this + 864),
              *(unsigned __int8 *)(this + 865),
              *(unsigned __int8 *)(this + 866),
              (int)(v8 * (double)SLODWORD(v22)));
            (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
              dword_1047CA78,
              v3,
              v16,
              512);
            v9 = *(_DWORD *)dword_1047CA6C;
            v18 = dword_1047CA6C;
            v22 = COERCE_FLOAT(sub_10076720());
            v15 = (int)((double)SLODWORD(v22) * 0.002083333333333333 * *(float *)(v3 + 512));
            v22 = COERCE_FLOAT(sub_10076740());
            (*(void (__thiscall **)(int, int, int))(v9 + 80))(
              v18,
              (int)((double)SLODWORD(v22) * 0.0015625 * *(float *)(v3 + 516)),
              v15);
            (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(dword_1047CA6C, v16, 0);
            v10 = (float *)off_103DC81C;
            v2 = v21;
            if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 336) )
            {
              if ( *(float *)(v3 + 524) - *(float *)(this + 324) <= *((float *)off_103DC81C + 3)
                && v21 + 3 >= 0
                && v21 + 3 < *(_DWORD *)(this + 276) )
              {
                v11 = *(_DWORD *)(this + 264) + v20 + 1620;
                if ( *(_DWORD *)(this + 264) + v20 != -1620 && 0.0 == *(float *)(*(_DWORD *)(this + 264) + v20 + 2144) )
                {
                  *(_BYTE *)(*(_DWORD *)(this + 264) + v20 + 2140) = 1;
                  if ( v2 >= 3 )
                  {
                    v12 = *(float *)(this + 328);
                    *(float *)(v11 + 528) = *(float *)(this + 328);
                  }
                  else
                  {
                    v12 = (double)v21 + 1.0;
                    *(float *)(v11 + 528) = v12;
                  }
                  *(float *)(v11 + 524) = v12
                                        + *((float *)off_103DC81C + 3)
                                        + *(float *)(this + 312)
                                        + *(float *)(this + 320)
                                        + *(float *)(this + 316);
                  *(float *)(v11 + 532) = *((float *)off_103DC81C + 3);
                  *(_DWORD *)(v11 + 536) = *(_DWORD *)(v3 + 536);
                  v10 = (float *)off_103DC81C;
                }
              }
              if ( v10[3] >= (double)*(float *)(v3 + 524) )
              {
                *(_BYTE *)(v3 + 520) = 0;
                if ( v2 == *(_DWORD *)(this + 276) - 1 )
                  sub_101AEFE0(this);
              }
            }
          }
        }
        v20 += 540;
        v21 = ++v2;
      }
      while ( v2 < *(_DWORD *)(this + 276) );
    }
  }
}
