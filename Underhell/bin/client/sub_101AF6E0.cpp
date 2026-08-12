int __usercall sub_101AF6E0@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, int a3@<esi>)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  bool v10; // cc
  bool v11; // zf
  int (__thiscall *v12)(int, int); // edx
  int v13; // eax
  _BYTE v17[512]; // [esp+4h] [ebp-210h] BYREF
  int v18; // [esp+204h] [ebp-10h]
  int v19; // [esp+208h] [ebp-Ch]
  int v20; // [esp+20Ch] [ebp-8h]
  int v21; // [esp+210h] [ebp-4h]

  sub_101AF410((_DWORD *)a1, "IntroCreditsNames");
  v21 = 0;
  v20 = 0;
  if ( *(int *)(a1 + 276) > 0 )
  {
    v19 = 0;
    do
    {
      v4 = v19 + *(_DWORD *)(a1 + 264);
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int, const char *, int, _BYTE *))(*(_DWORD *)dword_1047CA7C + 20))(
               dword_1047CA7C,
               "ClientScheme",
               a3,
               a2);
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v5);
        v7 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, v4 + 256, 0);
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v7);
        v9 = v21;
        v10 = v20 < 3;
        v21 *= v8;
        *(float *)(v4 + 512) = (double)v21 + *(float *)(a1 + 348);
        *(float *)(v4 + 516) = *(float *)(a1 + 344);
        if ( v10 )
        {
          *(_BYTE *)(v4 + 520) = 1;
          *(_DWORD *)(v4 + 536) = v9;
          *(float *)(v4 + 524) = *((float *)off_103DC81C + 3)
                               + *(float *)(a1 + 312)
                               + *(float *)(a1 + 320)
                               + *(float *)(a1 + 316);
          *(float *)(v4 + 532) = *((float *)off_103DC81C + 3);
          *(float *)(a1 + 336) = *(float *)(a1 + 332) + *(float *)(v4 + 524);
        }
        else
        {
          *(_BYTE *)(v4 + 520) = 0;
          *(float *)(v4 + 524) = 0.0;
        }
        v11 = *(_BYTE *)v4 == 35;
        v21 = (v9 + 1) % 3;
        if ( v11 )
        {
          v12 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 8);
          v18 = *(_DWORD *)dword_1047CA78;
          v13 = v12(dword_1047CA78, v4);
          (*(void (__cdecl **)(int, _BYTE *, int, int))(v18 + 32))(dword_1047CA78, v17, 512, v13);
        }
        else
        {
          (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
            dword_1047CA78,
            v4,
            v17,
            512);
        }
        a2 = v17;
        a3 = v7;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 496))(dword_1047CA6C);
      }
      v19 += 540;
      ++v20;
    }
    while ( v20 < *(_DWORD *)(a1 + 276) );
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 44))(a1, 1);
}
