int __cdecl sub_100E3150(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float a12)
{
  int v12; // eax
  double v13; // st7
  _DWORD v15[6]; // [esp+2Ch] [ebp-18h] BYREF

  memset(v15, 0, 20);
  v12 = a8;
  if ( *(_DWORD *)(dword_106984AC + 48) )
  {
    v13 = 1.0 - *(float *)(dword_106984F4 + 44);
    v15[5] = a8 / 2;
    v12 = (int)(v13 * (double)(a8 / 2) + (double)a8 * *(float *)(dword_106984F4 + 44));
  }
  (*(void (__stdcall **)(int, int, int, int, _DWORD, int, int, int, int, int, _DWORD *, int, _DWORD, int))(*(_DWORD *)dword_106B31E8 + 24))(
    a1,
    a2,
    a3,
    a4,
    LODWORD(a5),
    a6,
    a7,
    v12,
    a9,
    a10,
    v15,
    a11,
    LODWORD(a12),
    -1);
  return sub_102375F0(v15);
}
