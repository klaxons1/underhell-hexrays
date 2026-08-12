void __thiscall sub_101A5210(int this, char a2)
{
  double v3; // st7

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3868) )
  {
    sub_1004AE20((_DWORD *)this, 8, 9);
    sub_1007DD70(dword_106B9108);
    v3 = 3.5;
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 3.5, 5.5);
    if ( a2 == 1 )
      v3 = 9999.0;
    *(float *)(this + 3868) = v3 + *(float *)(dword_106B31C8 + 12);
    *(float *)(this + 3872) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                2.5,
                                5.0)
                            + *(float *)(this + 3868);
    sub_1023C380((int)"Zombine.Charge", 0.0, 0);
  }
}
