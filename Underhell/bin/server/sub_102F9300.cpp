void __usercall sub_102F9300(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  void (__thiscall *v4)(int); // edx
  double v5; // st7

  sub_10399F00();
  v3 = *(_DWORD *)(a1 + 308);
  if ( v3 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == v3 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1] )
  {
    sub_100E0970(a1, (int)off_1061BE18, 0, 0);
    sub_100204A0((_DWORD *)a1);
    sub_10020460((_DWORD *)a1, 8392704);
    sub_10020460((_DWORD *)a1, 0x2000000);
  }
  else
  {
    sub_102F4760(a1);
    sub_102F8540(a1, a2);
  }
  *(_DWORD *)(a1 + 252) |= 0x58000000u;
  if ( *(_DWORD *)(a1 + 220) != 80 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *(_DWORD *)(a1 + 220) = 80;
  }
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 1164);
  *(_DWORD *)(a1 + 1680) = -1;
  v4(a1);
  *(_DWORD *)(a1 + 200) = sub_102F4660;
  *(_BYTE *)(a1 + 5700) = 1;
  v5 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(a1 + 5641) = 1;
  *(float *)(a1 + 5704) = v5;
  *(_WORD *)(a1 + 5708) = 257;
  *(float *)(a1 + 5732) = 0.0;
  *(float *)(a1 + 5736) = 0.0;
  *(float *)(a1 + 5628) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            3.0,
                            5.0)
                        + *(float *)(dword_106B31C8 + 12);
}
