void __thiscall sub_103CFF40(int this, char a2)
{
  double v3; // st7
  unsigned int v4; // eax

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3840) )
  {
    sub_1004AE20((_DWORD *)this, 8, 9);
    sub_1007DD70(11);
    v3 = 3.5;
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 3.5, 5.5);
    v4 = *(_DWORD *)(this + 3860);
    if ( v4 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 1]
      || a2 == 1 )
    {
      v3 = 9999.0;
    }
    *(float *)(this + 3840) = v3 + *(float *)(dword_106B31C8 + 12);
    *(float *)(this + 3844) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                2.5,
                                5.0)
                            + *(float *)(this + 3840);
    sub_1023C380((_DWORD *)this, (int)"Zombine.Charge", 0.0, 0);
  }
}
