char __thiscall sub_1003E9C0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  char v4; // bl
  float *v5; // eax
  float *v6; // eax
  float v8[3]; // [esp+Ch] [ebp-18h] BYREF
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = (_DWORD *)a2;
  v4 = sub_1002F850(this, a2);
  if ( v4 && v2[3] == 2 && (int)this[661] > 0 )
  {
    sub_1002E560((char *)&a2 + 3, 1, 0);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, float *, float *))(this[1] + 148))(
           this + 1,
           this[661],
           v9,
           v8) )
    {
      v5 = (float *)v2[23];
      if ( v5 )
      {
        *v5 = v9[0];
        v5[1] = v9[1];
        v5[2] = v9[2];
      }
      v6 = (float *)v2[24];
      if ( v6 )
      {
        *v6 = v8[0];
        v6[1] = v8[1];
        v6[2] = v8[2];
      }
    }
    sub_1002B550();
  }
  return v4;
}
