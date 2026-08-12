void __usercall sub_101E97E0(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  float v8; // [esp+4h] [ebp-Ch]

  if ( !*(_BYTE *)(a1 + 2124) )
  {
    v3 = sub_100CF460((_DWORD *)a1);
    if ( !v3 || *(_DWORD *)(v3 + 1160) != 183 )
    {
      v4 = *(_DWORD *)(a1 + 4028);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 836))(v5, 4);
      *(_BYTE *)(a1 + 2123) = 1;
      v6 = *(_DWORD *)(a1 + 4028);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
      sub_100D18C0(v7);
      v8 = a2 * 0.5 + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)a1, v8, (int)"FlashLightContext");
    }
  }
}
