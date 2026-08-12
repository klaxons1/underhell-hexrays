char __thiscall sub_1001E230(void *this, int a2, int a3, int a4)
{
  if ( a2 == dword_106E50A8 )
  {
    sub_10044510("Grabbed by a barnacle");
    return 1;
  }
  else if ( a2 == dword_106E50AC )
  {
    sub_1025FAC0(this);
    return 1;
  }
  else
  {
    return sub_10038420(a2, a3, a4);
  }
}
