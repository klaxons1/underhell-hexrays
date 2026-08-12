void __thiscall sub_103F2900(int this, _DWORD *a2)
{
  __int64 v3; // [esp-8h] [ebp-10h]
  __int64 v4; // [esp-8h] [ebp-10h]

  if ( *a2 == 1 )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = this;
    sub_1010DD80((_DWORD *)(this + 2184), v3, 0.0);
    *(_BYTE *)(this + 2112) = 0;
  }
  else if ( *a2 == 2 )
  {
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    sub_1010DD80((_DWORD *)(this + 2208), v4, 0.0);
    *(_BYTE *)(this + 2112) = 1;
  }
}
