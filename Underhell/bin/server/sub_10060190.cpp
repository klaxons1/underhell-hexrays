char *__thiscall sub_10060190(char *this, int a2)
{
  int v3; // edx
  double v4; // st7
  double v5; // st6
  int v6; // eax
  char *result; // eax

  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &CAI_MappedActivityBehavior_Temporary::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v3 = *((_DWORD *)this + 5);
  *((_DWORD *)this + 8) = 0xFFFF;
  *((_DWORD *)this + 9) = -1;
  *((_DWORD *)this + 10) = v3;
  if ( !*((_DWORD *)this + 4) )
    *((_DWORD *)this + 4) = sub_1005D140;
  *(_DWORD *)this = &CAI_StandoffBehavior::`vftable';
  if ( dword_10605770 != dword_10694898 )
  {
    sub_1005F8D0();
    byte_1060576C = 1;
    dword_10605770 = dword_10694898;
  }
  *((_DWORD *)this + 25) = -1;
  *((float *)this + 29) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 31) = 0.0;
  *((float *)this + 32) = -1.0;
  *((float *)this + 33) = -1.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 36) = 0.0;
  *((float *)this + 35) = -1.0;
  *((float *)this + 37) = -1.0;
  v4 = -1.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 44) = -1.0;
  *((_DWORD *)this + 45) = 0;
  v5 = 3.4028235e38;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  this[45] = 0;
  qmemcpy(this + 64, &unk_10605700, 0x24u);
  *((_DWORD *)this + 25) = -1;
  *((float *)this + 12) = 3.4028235e38;
  *((float *)this + 13) = 3.4028235e38;
  *((float *)this + 14) = 3.4028235e38;
  v6 = *((_DWORD *)this + 1);
  if ( v6 && v6 != -2760 )
  {
    sub_100B8BE0(*((_DWORD *)this + 20), *((_DWORD *)this + 21));
    sub_100B8C00(*((float *)this + 18), *((float *)this + 19));
    v4 = -1.0;
    v5 = 3.4028235e38;
  }
  *((float *)this + 27) = v5;
  *((_DWORD *)this + 15) = 1;
  this[112] = 0;
  *((float *)this + 36) = 3.0;
  result = this;
  *((float *)this + 35) = v4;
  *((_WORD *)this + 100) = 0;
  return result;
}
