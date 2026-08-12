void __thiscall sub_1004BCA0(char *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // [esp-4h] [ebp-Ch]

  sub_1002B830((int)this, a2);
  if ( !a2 )
  {
    if ( this == (char *)8 )
      v3 = 0;
    else
      v3 = this + 1952;
    v4 = v3;
    sub_100F0920();
    sub_100F0010(this + 1956, v4);
  }
  if ( *((_DWORD *)this + 544) != *((_DWORD *)this + 450) )
    sub_1004BB80(this - 8);
}
