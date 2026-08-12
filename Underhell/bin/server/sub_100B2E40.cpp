bool __thiscall sub_100B2E40(_DWORD **this, float *a2, float *a3)
{
  float *v4; // eax
  bool result; // al
  _BYTE v6[44]; // [esp+2Ch] [ebp-98h] BYREF
  float v7; // [esp+58h] [ebp-6Ch]
  int v8[14]; // [esp+80h] [ebp-44h] BYREF
  float v9[3]; // [esp+B8h] [ebp-Ch] BYREF

  v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this[1] + 532))(this[1]);
  v9[0] = *v4 + *a3;
  v9[1] = v4[1] + a3[1];
  v9[2] = v4[2] + a3[2];
  sub_10030570((int)a3, a2, v9, 0, (int)v6, 0);
  result = 0;
  if ( 1.0 == v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this[1] + 1936))(this[1], a3, 0, 0) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, float *, float *))(*this[1] + 1940))(this[1], a3, a2) )
      {
        memset(v8, 0, sizeof(v8));
        sub_1007C550((_DWORD *)this[1][650], 0, (float *)this[1] + 179, a3, 33701899, 0, 100.0, 0, (float *)v8);
        if ( !v8[0] )
          return 1;
      }
    }
  }
  return result;
}
