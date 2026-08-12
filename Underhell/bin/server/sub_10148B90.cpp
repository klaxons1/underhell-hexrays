void __thiscall sub_10148B90(int *this, int a2, float *a3, float *a4)
{
  float v5[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
  {
    if ( this[203] == 6 )
    {
      ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
        off_1061B7A0,
        a4 + 3,
        1,
        1,
        0);
      sub_1023C380((int)"Breakable.Computer", 0.0, 0);
    }
    else if ( this[203] == 7 )
    {
      v5[0] = *a3 * -1.0;
      v5[1] = a3[1] * -1.0;
      v5[2] = -1.0 * a3[2];
      ((void (__thiscall *)(int (__stdcall ***)(char), float *, float *))(*off_1061B7A0)[8])(off_1061B7A0, a4 + 3, v5);
    }
  }
  sub_100EAC20(this, a2, a3, a4);
}
