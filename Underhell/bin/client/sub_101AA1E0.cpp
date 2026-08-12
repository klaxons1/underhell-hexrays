void *__cdecl sub_101AA1E0(float *a1, char a2, int a3, int a4, int a5)
{
  void *result; // eax
  int v6; // esi
  double v7; // st7

  result = (void *)dword_104451A4;
  if ( *(_DWORD *)(dword_104451A4 + 48) )
  {
    result = (void *)sub_1007A9F0(off_103DCD78, a5);
    if ( (int)result >= 0 )
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 20))(dword_10413164, (int)result + 0x40000000);
      *(float *)(v6 + 4) = *a1;
      *(float *)(v6 + 8) = a1[1];
      *(float *)(v6 + 12) = a1[2];
      *(_WORD *)(v6 + 20) = -16129;
      *(_BYTE *)(v6 + 22) = 64;
      *(_BYTE *)(v6 + 23) = a2;
      v7 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, a3, a4);
      *(float *)(v6 + 16) = v7;
      *(float *)(v6 + 28) = v7 * 20.0;
      result = off_103DC81C;
      *(float *)(v6 + 24) = *((float *)off_103DC81C + 3) + 0.1;
    }
  }
  return result;
}
