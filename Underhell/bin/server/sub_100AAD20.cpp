int __thiscall sub_100AAD20(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = this[5];
  if ( v2 == -1 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    *a2 = v2;
    return sub_1023C740(v2);
  }
}
