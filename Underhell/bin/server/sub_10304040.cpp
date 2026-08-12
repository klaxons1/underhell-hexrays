char __thiscall sub_10304040(int this, int a2, float *a3, int a4)
{
  float v6; // [esp+4h] [ebp-10h]

  if ( a2 == dword_106E29DC )
  {
    *(float *)(this + 3664) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.5,
                                1.0)
                            + *(float *)(dword_106B31C8 + 12);
    sub_10301C40(this, a3, (int)a3, 1, COERCE_INT(0.0));
    return 1;
  }
  else
  {
    if ( a2 == dword_106E29E0 && (*(_DWORD *)(this + 248) & 0x40000) != 0 )
    {
      v6 = *(float *)(dword_106B31C8 + 12) + *a3;
      sub_10031BA0(this, v6);
    }
    return sub_10038420((int *)this, a2, (int)a3, a4);
  }
}
