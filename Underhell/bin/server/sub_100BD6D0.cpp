char __thiscall sub_100BD6D0(void *this, int a2, int a3, float *a4, float *a5, float *a6)
{
  char v6; // bl
  float v8[12]; // [esp+4h] [ebp-30h] BYREF

  v6 = (*(int (__thiscall **)(void *, int, float *))(*(_DWORD *)this + 796))(this, a2, v8);
  sub_10421CE0(v8, 3, a3);
  if ( a4 )
  {
    *a4 = v8[0];
    a4[1] = v8[4];
    a4[2] = v8[8];
  }
  if ( a5 )
  {
    *a5 = v8[1];
    a5[1] = v8[5];
    a5[2] = v8[9];
  }
  if ( a6 )
  {
    *a6 = v8[2];
    a6[1] = v8[6];
    a6[2] = v8[10];
  }
  return v6;
}
