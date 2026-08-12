char __thiscall sub_1039A770(_DWORD *this, _DWORD *a2, float *a3, float a4, float *a5)
{
  char result; // al

  sub_1039A510(this, (int)a2);
  if ( !byte_106EA248 || (result = sub_10044110(this, a2, a3, a4, a5), byte_106EA248 = 0, !result) )
    result = sub_10044110(this, a2, a3, a4, a5);
  dword_106EA24C = 0;
  dword_106EA38C = 0;
  return result;
}
