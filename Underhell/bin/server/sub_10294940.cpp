void __thiscall sub_10294940(int *this)
{
  int v2; // ebx
  int v3; // edi
  __int64 v4; // [esp-4h] [ebp-20h]
  __int64 v5; // [esp-4h] [ebp-20h]
  float v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h] BYREF

  sub_102944E0(&v8, &v7);
  v2 = v8;
  if ( !v8 && this[202] )
  {
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    sub_1010DD80(this + 270, v4, 0.0);
  }
  v3 = v7;
  if ( !v7 && this[203] )
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80(this + 276, v5, 0.0);
  }
  this[202] = v2;
  this[203] = v3;
  v6 = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_100EC4A0(this, v6, 0);
  if ( *(_DWORD *)(dword_106DB03C + 48) )
    DevMsg("Ally manager counts %d allies, %d of which are medics\n", v2, v3);
}
