int __usercall sub_101AF560@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // ebx
  bool v10; // zf
  int v11; // eax
  _BYTE v13[512]; // [esp+8h] [ebp-218h] BYREF
  int v14; // [esp+208h] [ebp-18h] BYREF
  int v15; // [esp+20Ch] [ebp-14h] BYREF
  int v16; // [esp+210h] [ebp-10h]
  int v17; // [esp+214h] [ebp-Ch]
  float v18; // [esp+218h] [ebp-8h]
  int v19; // [esp+21Ch] [ebp-4h]

  result = sub_101AF410((_DWORD *)a1, "OutroCreditsNames");
  if ( *(_DWORD *)(a1 + 276) )
  {
    sub_10132120((int)&v14, (int)&v15);
    sub_102361A0(v14, v15);
    v19 = v15;
    v16 = 0;
    if ( *(int *)(a1 + 276) > 0 )
    {
      v17 = 0;
      do
      {
        v4 = v17 + *(_DWORD *)(a1 + 264);
        if ( v4 )
        {
          v5 = (*(int (__thiscall **)(int, const char *, _BYTE *))(*(_DWORD *)dword_1047CA7C + 20))(
                 dword_1047CA7C,
                 "ClientScheme",
                 a2);
          v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v5);
          v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 12))(v6, v4 + 256, 1);
          v8 = (double)v19;
          *(_BYTE *)(v4 + 520) = 0;
          v9 = v7;
          v18 = v8;
          *(float *)(v4 + 512) = v8;
          v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v7);
          v10 = *(_BYTE *)v4 == 35;
          v19 = (int)((double)v19 + *(float *)(a1 + 288) + v18);
          if ( v10 )
          {
            v18 = *(float *)dword_1047CA78;
            v11 = (*(int (__thiscall **)(int, int))(LODWORD(v18) + 8))(dword_1047CA78, v4);
            (*(void (__cdecl **)(int, _BYTE *, int, int))(LODWORD(v18) + 32))(dword_1047CA78, v13, 512, v11);
          }
          else
          {
            (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
              dword_1047CA78,
              v4,
              v13,
              512);
          }
          a2 = v13;
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 496))(dword_1047CA6C, v9);
        }
        v17 += 540;
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 276) );
    }
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 44))(a1, 1);
    dword_1044ECA8 = v19;
  }
  return result;
}
