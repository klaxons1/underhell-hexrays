void __thiscall sub_10120480(int this)
{
  int v2; // eax
  int (__thiscall *v3)(int); // eax
  char v4; // al
  __int64 v5; // [esp-8h] [ebp-10h]
  float v6; // [esp+0h] [ebp-8h]

  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    v2 = *(_DWORD *)(this + 800);
    if ( v2 != 2 && v2 != 3 )
      sub_101200D0((_DWORD *)this);
  }
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)this + 728);
  *(_DWORD *)(this + 800) = 3;
  *(_DWORD *)(this + 4) = sub_10120230;
  v4 = v3(this);
  v6 = *(float *)(this + 108);
  if ( v4 )
    sub_10246BC0(this + 852, v6);
  else
    sub_10246AC0(this + 816, v6);
  HIDWORD(v5) = this;
  LODWORD(v5) = this;
  sub_1010DD80((_DWORD *)(this + 1152), v5, 0.0);
}
