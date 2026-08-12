char __thiscall sub_1039A720(_DWORD *this, _DWORD *a2, int a3)
{
  char result; // al

  sub_1039A510(this, (int)a2);
  if ( !byte_106EA248 || (result = sub_10044060(this, a2, a3), byte_106EA248 = 0, !result) )
    result = sub_10044060(this, a2, a3);
  dword_106EA24C = 0;
  dword_106EA38C = 0;
  return result;
}
