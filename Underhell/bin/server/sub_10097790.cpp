int __thiscall sub_10097790(int this)
{
  int result; // eax

  sub_100E33C0(1);
  *(_DWORD *)this = &CAI_AllySpeechManager::`vftable';
  *(float *)(this + 800) = -1.0;
  *(float *)(this + 804) = -1.0;
  *(float *)(this + 808) = -1.0;
  *(_DWORD *)(this + 812) = 0;
  *(_DWORD *)(this + 816) = 0;
  *(_DWORD *)(this + 820) = 0;
  *(_DWORD *)(this + 824) = 0;
  *(_BYTE *)(this + 828) = -1;
  *(_BYTE *)(this + 829) = 0;
  *(_BYTE *)(this + 830) = -1;
  *(_BYTE *)(this + 831) = -1;
  *(_DWORD *)(this + 832) = *(_DWORD *)(this + 816);
  result = this;
  if ( !*(_DWORD *)(this + 812) )
    *(_DWORD *)(this + 812) = sub_10092E60;
  dword_10693788 = (char *)this;
  return result;
}
