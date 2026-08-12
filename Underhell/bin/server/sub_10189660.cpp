bool __stdcall sub_10189660(int a1)
{
  float v2; // [esp+0h] [ebp-8h]

  if ( !*(_DWORD *)(dword_106B2F34 + 48) )
    return 0;
  if ( (unsigned __int8)sub_101E45E0(a1) )
    return 1;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v2 = *(float *)(a1 + 480) * *(float *)(a1 + 480) + *(float *)(a1 + 476) * *(float *)(a1 + 476);
  return off_10689708(v2) > 220.0;
}
