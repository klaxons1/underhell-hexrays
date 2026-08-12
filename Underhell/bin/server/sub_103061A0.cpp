int __thiscall sub_103061A0(int this)
{
  int v2; // eax
  float *v3; // edi
  float v5; // [esp+8h] [ebp-30h]
  float v6; // [esp+18h] [ebp-20h]
  float v7; // [esp+18h] [ebp-20h]
  float v8; // [esp+28h] [ebp-10h]
  float v9; // [esp+2Ch] [ebp-Ch]
  float v10; // [esp+30h] [ebp-8h]
  float v11; // [esp+34h] [ebp-4h]

  if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v2 = sub_10261B20(), (v3 = (float *)v2) != 0) )
  {
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = *(float *)(this + 580) - v3[145];
    v9 = *(float *)(this + 584) - v3[146];
    v10 = *(float *)(this + 588) - v3[147];
    v11 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(1.0, 3.0);
    v5 = v8 * v8 + v9 * v9 + v10 * v10;
    v7 = sub_10134630(v5, 160000.0, 25000000.0, 1.0, 5.0) * v11 + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v7, 0);
  }
  else
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.5,
           3.0)
       + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v6, 0);
  }
}
