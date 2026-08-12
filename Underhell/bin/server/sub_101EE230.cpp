int __thiscall sub_101EE230(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int *v7; // edi
  _BYTE *v8; // esi
  float v9; // [esp+4h] [ebp-10h]

  sub_10260010(this + 116, *(float *)(this + 804), *(float *)(this + 808), 2);
  v9 = *(float *)(this + 800) + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v9, 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_101E33A0, 0.0, 0);
  result = sub_10261B20();
  v7 = (int *)result;
  if ( result )
  {
    v8 = (_BYTE *)(result + 3244);
    if ( *(_BYTE *)(result + 3244) != 1 )
    {
      (**(void (__thiscall ***)(int, int))(result + 3240))(result + 3240, result + 3244);
      *v8 = 1;
    }
    result = sub_100EA940(v7, 32800);
    flt_10627D1C = 0.0;
    flt_10627D20 = 0.0;
  }
  return result;
}
