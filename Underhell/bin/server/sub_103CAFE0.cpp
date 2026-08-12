void __thiscall sub_103CAFE0(int this, float a2)
{
  int v3; // eax
  int *v4; // ecx
  __int64 v5; // [esp-8h] [ebp-10h]
  float v6; // [esp+10h] [ebp+8h]

  *(_DWORD *)(this + 5732) = 0;
  *(_BYTE *)(this + 5753) = 0;
  *(_DWORD *)(this + 5720) = -1;
  sub_103CA280(this, 1);
  sub_1004AF00((_DWORD *)this);
  if ( LOBYTE(a2) )
  {
    sub_100C5470((_DWORD *)this, dword_106EBEB0);
    *(float *)(this + 5716) = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
  else
  {
    v3 = sub_100C4E40((_DWORD *)this, dword_106EBEB0);
    sub_100C4EE0((_DWORD *)this, v3, 1.0);
    *(float *)(this + 5716) = *(float *)(dword_106B31C8 + 12) + 30.0;
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80((_DWORD *)(this + 5788), v5, 0.0);
  }
  v6 = *(float *)(dword_106B31C8 + 12) + 2.0;
  if ( *(_DWORD *)(this + 1672) != LODWORD(v6) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1672) = v6;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 1672);
      *(float *)(this + 1672) = v6;
    }
  }
}
