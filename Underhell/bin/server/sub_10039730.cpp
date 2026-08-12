char __thiscall sub_10039730(float *this)
{
  char result; // al
  int v3; // edi

  sub_100391C0((int)this);
  *((_BYTE *)this + 2165) = 0;
  result = sub_10025C60((int)this);
  if ( result )
  {
    v3 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1212))(this);
    this[542] = *(float *)(dword_106B31C8 + 12);
    if ( 0.0 != flt_10690410 && !(*(int (**)(void))(g_pVCR + 12))() )
      flt_10690414 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0)
                   - flt_10690410
                   + flt_10690414;
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  return result;
}
