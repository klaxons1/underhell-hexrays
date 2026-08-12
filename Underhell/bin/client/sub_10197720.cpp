void __thiscall sub_10197720(float **this, int a2)
{
  float v3; // [esp+0h] [ebp-Ch]

  sub_1003CD40(this, a2);
  if ( !a2 )
  {
    v3 = *((float *)off_103DC81C + 3) + 0.1;
    (*((void (__thiscall **)(float **, _DWORD))*(this - 2) + 102))(this - 2, LODWORD(v3));
    sub_10197690(this - 2);
  }
}
