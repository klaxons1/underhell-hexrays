void __cdecl sub_10424970(float a1, float a2, float a3, int a4, char a5, char a6, char a7, char a8)
{
  int CPUInformation; // eax
  bool v9; // zf

  if ( !byte_106F1C98 )
  {
    CPUInformation = GetCPUInformation();
    off_10689708 = sub_10421990;
    off_1068970C[0] = (double (__cdecl *)(float))sub_104219A0;
    off_10689710 = (double (__cdecl *)(float))sub_104219A0;
    off_10689714 = sub_104219B0;
    off_10689718 = sub_104219F0;
    off_1068971C = (double (__cdecl *)(_DWORD))sub_10421A30;
    off_10689720 = (int (__cdecl *)(float, int, int))sub_1001F0C0;
    off_10689724 = (double (__cdecl *)(float))sub_1001EDB0;
    if ( !a8 || (v9 = (*(_BYTE *)(CPUInformation + 4) & 0x40) == 0, byte_106F1C9A = 1, v9) )
      byte_106F1C9A = 0;
    if ( a5 && (*(_BYTE *)(CPUInformation + 4) & 0x20) != 0 )
    {
      byte_106F1C99 = 1;
      off_10689714 = (double (__thiscall *)(float *))sub_10426FC0;
      off_10689718 = (void (__thiscall *)(float *))sub_10427040;
      off_1068971C = (double (__cdecl *)(_DWORD))sub_10427050;
      off_10689708 = (double (__cdecl *)(float))sub_10426F70;
      off_1068970C[0] = (double (__cdecl *)(float))sub_10426FA0;
      off_10689710 = (double (__cdecl *)(float))sub_10426FA0;
    }
    else
    {
      byte_106F1C99 = 0;
    }
    if ( a6 && (*(_BYTE *)(CPUInformation + 4) & 8) != 0 )
    {
      byte_106F1C9B = 1;
      off_10689714 = sub_104219B0;
      off_10689718 = (void (__thiscall *)(float *))sub_10426AA0;
      off_1068971C = (double (__cdecl *)(_DWORD))sub_10426B30;
      off_10689708 = (double (__cdecl *)(float))sub_10426A10;
      off_1068970C[0] = (double (__cdecl *)(float))sub_10426A30;
      off_10689710 = (double (__cdecl *)(float))sub_10426A80;
      off_10689720 = (int (__cdecl *)(float, int, int))sub_10426B70;
      off_10689724 = (double (__cdecl *)(float))sub_10426CB0;
    }
    else
    {
      byte_106F1C9B = 0;
    }
    if ( a7 && (*(_BYTE *)(CPUInformation + 4) & 0x10) != 0 )
    {
      byte_106F1C9C = 1;
      off_10689720 = (int (__cdecl *)(float, int, int))sub_10426D80;
      off_10689724 = (double (__cdecl *)(float))sub_10426EA0;
    }
    else
    {
      byte_106F1C9C = 0;
    }
    byte_106F1C98 = 1;
    sub_10421A60();
    sub_10426140(a1, a2, a3, a4);
  }
}
