char __thiscall sub_100E8B30(void *this, float *a2, float *a3)
{
  _DWORD *v4; // eax
  double v5; // st2
  double v6; // st1
  double v7; // st6
  double v8; // st7
  int (__thiscall *v9)(void *); // edx
  float v11; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+8h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
  {
    LOBYTE(v4) = (_BYTE)a3;
    *a3 = 999.0;
    a3[1] = 999.0;
    a3[2] = 999.0;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 320))(this) )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 320))(this);
    sub_100F5A30(v14, &v11, 0);
    v5 = v12 * 2.0;
    v6 = *a2;
    v12 = a2[1];
    LOBYTE(v4) = (_BYTE)a3;
    v7 = 16.0 * v14[2] + 2.0 * v13 + a2[2] - 4.0;
    v8 = v14[1] * 16.0 + v5 + v12;
    *a3 = v14[0] * 16.0 + v11 * 2.0 + v6;
    a3[1] = v8;
    a3[2] = v7;
  }
  else
  {
    *a3 = *a2;
    a3[1] = a2[1];
    v9 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 288);
    a3[2] = a2[2];
    v4 = (_DWORD *)v9(this);
    if ( v4 )
    {
      v4 = (_DWORD *)sub_100CF460(v4);
      if ( v4 )
      {
        LOBYTE(v4) = sub_100BCCA0(v4, 1, (int)&v11, (int)v14);
        if ( (_BYTE)v4 )
        {
          *a3 = v11;
          a3[1] = v12;
          a3[2] = v13;
        }
      }
    }
  }
  return (char)v4;
}
