void __thiscall sub_103A48A0(int this, float *a2, int a3)
{
  int v3; // edx
  bool v5; // c0
  bool v6; // c3
  float *v7; // edi
  unsigned int v8; // eax

  v3 = (int)a2;
  v5 = *(float *)(a3 + 20) > 0.5;
  v6 = 0.5 == *(float *)(a3 + 20);
  v7 = *(float **)(a3 + 4 * (a2 == 0) + 104);
  a2 = v7;
  if ( v5 || v6 || v7 != (float *)this )
  {
    sub_100DA500((_BYTE *)this, v3, a3);
    if ( *(_BYTE *)(this + 3808)
      || (v8 = *(_DWORD *)(this + 3812), v8 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 2] == v8 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 1]
      || !sub_1039E530((void *)this, (int)v7) )
    {
      if ( *(_BYTE *)(this + 3828) )
      {
        *(_BYTE *)(this + 3828) = 0;
        sub_103A1150(&dword_106B9EC0, this, (int)sub_1039F190, 0, &a2);
      }
    }
    else
    {
      sub_103A30B0(this, v7);
    }
  }
}
