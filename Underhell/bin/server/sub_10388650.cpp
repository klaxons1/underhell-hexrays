void __thiscall sub_10388650(int this, int a2, int a3)
{
  float v4; // [esp+0h] [ebp-10h]

  if ( a2 )
    *(_DWORD *)(this + 104) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 104) = -1;
  *(float *)(this + 108) = *(float *)(dword_106B31C8 + 12);
  if ( a3 == 1 )
  {
    *(float *)(this + 164) = flt_10689730;
    *(float *)(this + 168) = flt_10689734;
    *(float *)(this + 172) = flt_10689738;
    *(float *)(this + 176) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 162) = 0;
    v4 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_100EC4A0((int *)(this - 3732), v4, 0);
    *(float *)(this + 72) = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_10387600(this - 3732, 3);
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this - 3732) + 76))(this - 3732, a2);
    *(_BYTE *)(this + 162) = 1;
  }
}
