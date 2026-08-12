int __thiscall sub_10058C20(_DWORD **this)
{
  int v2; // eax
  int result; // eax

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v2 = sub_10261B20();
  else
    v2 = 0;
  sub_100218B0(this[1], v2);
  result = (*(int (__thiscall **)(_DWORD *))(*this[1] + 1656))(this[1]);
  if ( result )
    return sub_100B0140("TLK_LEAD_ARRIVAL");
  return result;
}
