void __thiscall sub_101A11A0(_BYTE *this, _DWORD *a2)
{
  if ( *a2 == 20 )
  {
    DevMsg("BLOCKING!\n");
    this[4992] = 1;
  }
  else
  {
    sub_10341730((int)this, (int)a2);
  }
}
