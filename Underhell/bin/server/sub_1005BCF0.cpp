int __thiscall sub_1005BCF0(int this)
{
  float v2; // edx
  int v3; // eax
  float v5; // [esp+10h] [ebp-18h]
  float v6; // [esp+1Ch] [ebp-Ch] BYREF
  float v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  sub_100E0970(5, 0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(float *)(this + 480);
  v3 = *(_DWORD *)(this + 484);
  v6 = *(float *)(this + 476);
  v8 = v3;
  v7 = v2;
  v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -30.0,
         30.0);
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -30.0,
         30.0);
  sub_100DD660(&v6);
  sub_100EC3F0((int)sub_1005BBA0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 3.0;
  return sub_100EC4A0(v5, 0);
}
