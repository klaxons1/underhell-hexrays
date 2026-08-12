void __thiscall sub_10415BC0(int this, int a2)
{
  _DWORD *v3; // eax
  _BYTE v4[80]; // [esp+14h] [ebp-50h] BYREF

  if ( !*(_BYTE *)(this + 2136)
    && a2
    && *(_BYTE *)(a2 + 225)
    && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 2124) )
  {
    v3 = (_DWORD *)sub_10248110((int)v4, this, *(_DWORD *)(this + 2104), 1.0, 10, 0);
    sub_100D9E70((int *)a2, this, v3);
    *(float *)(this + 2124) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
