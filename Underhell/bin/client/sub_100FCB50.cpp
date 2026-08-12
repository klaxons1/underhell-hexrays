void __stdcall sub_100FCB50(int a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // eax
  int v5; // eax
  _DWORD v6[8]; // [esp+0h] [ebp-20h] BYREF

  if ( dword_10436254 )
  {
    v6[0] = a1;
    v6[2] = *a2;
    v4 = a2[1];
    v6[1] = a3;
    if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 2) != v4 >> 12 )
      v5 = 0;
    else
      v5 = *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 1);
    v6[3] = v5;
    v6[4] = a2[4];
    v6[5] = a4;
    v6[7] = off_103E2150;
    v6[6] = dword_10436254;
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)dword_10436254 + 212))(v6);
  }
}
