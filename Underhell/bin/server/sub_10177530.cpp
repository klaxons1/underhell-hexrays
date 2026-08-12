void __thiscall sub_10177530(unsigned __int16 *this, int a2, int a3)
{
  __int64 v4; // [esp-8h] [ebp-10h]

  HIDWORD(v4) = this - 560;
  LODWORD(v4) = a2;
  sub_1010DD80((_DWORD *)this + 15, v4, 0.0);
  if ( !a3 )
  {
    sub_10112D90(this - 400, 1, 48.0);
    if ( *((_DWORD *)this + 27) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *((_DWORD *)this + 27));
      *((_DWORD *)this + 27) = 0;
    }
  }
}
