float *__thiscall sub_103F2AB0(void *this, float *a2, int a3, char a4)
{
  int v5; // eax
  _BYTE v7[48]; // [esp+24h] [ebp-30h] BYREF

  v5 = sub_100BEF30((int)this, "vehicle_driver_eyes");
  (*(void (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 796))(this, v5, v7);
  sub_10421CE0(v7, 3, a2);
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
