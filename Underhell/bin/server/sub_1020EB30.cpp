void __thiscall sub_1020EB30(int this, int a2)
{
  sub_1020DA90(this, a2);
  if ( *(_DWORD *)(dword_106C1DF4 + 48) && (*(_DWORD *)(this + 248) & 4) == 0 )
  {
    if ( *(_BYTE *)(this + 1686) )
    {
      sub_100EBE30(this, 17);
    }
    else if ( *(_DWORD *)(this + 1692) == 2 )
    {
      sub_100EBE30(this, 1);
    }
    else
    {
      sub_100EBE30(this, 0);
    }
  }
}
