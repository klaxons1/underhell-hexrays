float *__thiscall sub_1026F030(void *this, float *a2, int a3, char a4)
{
  int v5; // eax

  v5 = sub_100BEF30((int)this, "vehicle_driver_eyes");
  sub_100BD6D0(this, v5, (int)a2, 0, 0, 0);
  if ( a4 )
  {
    *a2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -8.0,
            8.0)
        + *a2;
    a2[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -8.0,
              8.0)
          + a2[1];
    a2[2] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -8.0,
              8.0)
          + a2[2];
  }
  return a2;
}
