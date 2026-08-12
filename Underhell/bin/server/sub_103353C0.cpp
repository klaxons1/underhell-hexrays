void __thiscall sub_103353C0(_BYTE *this, int a2, int a3, int a4, int a5)
{
  unsigned __int8 (*v6)(void); // edx
  __int64 v7; // [esp-4h] [ebp-10h]

  v6 = *(unsigned __int8 (**)(void))(*(_DWORD *)this + 2336);
  this[4164] = 1;
  if ( !v6()
    && ((*((_DWORD *)this + 62) & 0x100000) != 0
     || (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 1080))(this, a2) == 4) )
  {
    HIDWORD(v7) = this;
    LODWORD(v7) = this;
    sub_1010DD80((_DWORD *)this + 826, v7, 0.0);
  }
  this[4164] = 0;
}
