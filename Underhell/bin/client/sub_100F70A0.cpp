void __thiscall sub_100F70A0(char *this, void (__thiscall *a2)(char *), int a3, int a4, int a5)
{
  unsigned __int64 v6; // st7
  char *v7; // eax
  const char *v8; // [esp-4h] [ebp-18h]
  double v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]

  v10 = *(float *)(dword_10435F84 + 44);
  v11 = 0.0;
  if ( 0.0 != v10 )
    v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 56))(dword_1041315C);
  if ( a2 )
    a2(&this[a3]);
  if ( 0.0 != v10 )
  {
    *(double *)&v6 = (((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 56))(dword_1041315C) - v11)
                   * 1000.0;
    if ( v10 < *(double *)&v6 )
    {
      v8 = (const char *)sub_10287B08(&C_BaseEntity * `RTTI Type Descriptor', v6, HIDWORD(v6));
      v7 = sub_10034D90(this);
      Msg("CLIENT:  %s(%s) thinking for %.02f ms!!!\n", v7, v8, v9);
    }
  }
}
