void __thiscall sub_101A2200(float *this, char a2)
{
  double v3; // st7

  if ( *(float *)(dword_106B31C8 + 12) >= (double)this[967] )
  {
    sub_1007DD70(dword_106B9108);
    v3 = 3.5;
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 3.5, 5.5);
    if ( a2 == 1 )
      v3 = 9999.0;
    this[967] = v3 + *(float *)(dword_106B31C8 + 12);
    this[968] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  2.5,
                  5.0)
              + this[967];
    sub_1023C380((int)"NPC_Butcher.Charge", 0.0, 0);
  }
}
