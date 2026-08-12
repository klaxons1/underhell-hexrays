void __cdecl sub_101F0370(float a1, float a2, float a3, int a4, char a5, char a6, char a7, char a8)
{
  int CPUInformation; // eax
  bool v9; // zf

  if ( !byte_10459230 )
  {
    CPUInformation = GetCPUInformation();
    off_103EDFE0 = sub_101ED6B0;
    off_103EDFE4[0] = (double (__cdecl *)(float))sub_101ED6C0;
    off_103EDFE8 = (double (__cdecl *)(float))sub_101ED6C0;
    off_103EDFEC = sub_101ED6D0;
    off_103EDFF0 = sub_101ED710;
    off_103EDFF4 = (double (__cdecl *)(_DWORD))sub_101ED750;
    off_103EDFF8 = (int (__cdecl *)(float, int, int))sub_10016970;
    off_103EDFFC = sub_10008F50;
    if ( !a8 || (v9 = (*(_BYTE *)(CPUInformation + 4) & 0x40) == 0, byte_10459232 = 1, v9) )
      byte_10459232 = 0;
    if ( a5 && (*(_BYTE *)(CPUInformation + 4) & 0x20) != 0 )
    {
      byte_10459231 = 1;
      off_103EDFEC = (double (__thiscall *)(float *))sub_101F4120;
      off_103EDFF0 = (void (__thiscall *)(float *))sub_101F41A0;
      off_103EDFF4 = (double (__cdecl *)(_DWORD))sub_101F41B0;
      off_103EDFE0 = (double (__cdecl *)(float))sub_101F40D0;
      off_103EDFE4[0] = (double (__cdecl *)(float))sub_101F4100;
      off_103EDFE8 = (double (__cdecl *)(float))sub_101F4100;
    }
    else
    {
      byte_10459231 = 0;
    }
    if ( a6 && (*(_BYTE *)(CPUInformation + 4) & 8) != 0 )
    {
      byte_10459233 = 1;
      off_103EDFEC = sub_101ED6D0;
      off_103EDFF0 = (void (__thiscall *)(float *))sub_101F3C00;
      off_103EDFF4 = (double (__cdecl *)(_DWORD))sub_101F3C90;
      off_103EDFE0 = (double (__cdecl *)(float))sub_101F3B70;
      off_103EDFE4[0] = (double (__cdecl *)(float))sub_101F3B90;
      off_103EDFE8 = (double (__cdecl *)(float))sub_101F3BE0;
      off_103EDFF8 = (int (__cdecl *)(float, int, int))sub_101F3CD0;
      off_103EDFFC = (long double (__cdecl *)(float))sub_101F3E10;
    }
    else
    {
      byte_10459233 = 0;
    }
    if ( a7 && (*(_BYTE *)(CPUInformation + 4) & 0x10) != 0 )
    {
      byte_10459234 = 1;
      off_103EDFF8 = (int (__cdecl *)(float, int, int))sub_101F3EE0;
      off_103EDFFC = (long double (__cdecl *)(float))sub_101F4000;
    }
    else
    {
      byte_10459234 = 0;
    }
    byte_10459230 = 1;
    sub_101ED780();
    sub_101F2A10(a1, a2, a3, a4);
  }
}
