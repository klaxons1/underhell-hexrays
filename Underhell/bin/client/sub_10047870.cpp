int __thiscall sub_10047870(float *this, float *a2)
{
  int result; // eax

  sub_100250B0(this, a2);
  result = sub_10033760();
  if ( result )
    return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)result + 1296))(result, this, a2);
  return result;
}
