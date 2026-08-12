int __stdcall sub_100B38B0(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // eax
  double v8; // st7
  double v9; // st5
  int v10; // [esp+8h] [ebp-4h] BYREF

  v1 = a1;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v2);
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 12))(v3, v1 + 64, 1);
    v5 = *(char *)(v1 + 130);
    *(_DWORD *)(v1 + 132) = v4;
    *(_DWORD *)(v1 + 164) = 0;
    *(_DWORD *)(v1 + 156) = 0;
    *(_DWORD *)(v1 + 160) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 284))(
                              dword_1047CA6C,
                              v4,
                              v5);
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
               dword_1047CA6C,
               *(_DWORD *)(v1 + 132));
    *(_DWORD *)(v1 + 168) = result;
  }
  else
  {
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(v1 + 136) = v7;
    (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v7,
      v1 + 64,
      0,
      0);
    result = (*(int (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
               dword_1047CA6C,
               *(_DWORD *)(v1 + 136),
               &a1,
               &v10);
    v8 = (double)a1;
    *(float *)(v1 + 140) = ((double)*(int *)(v1 + 156) + 0.5) / v8;
    v9 = (double)v10;
    *(float *)(v1 + 144) = ((double)*(int *)(v1 + 164) + 0.5) / v9;
    *(float *)(v1 + 148) = ((double)*(int *)(v1 + 160) - 0.5) / v8;
    *(float *)(v1 + 152) = ((double)*(int *)(v1 + 168) - 0.5) / v9;
  }
  return result;
}
