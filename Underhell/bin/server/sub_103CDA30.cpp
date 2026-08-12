void __thiscall sub_103CDA30(float *this)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]

  if ( this[950] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2320))(this) )
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1620))(this);
      v4 = 5.0;
      v2 = 2.0;
    }
    else
    {
      v4 = 2.0;
      v2 = 1.0;
    }
    v3 = v2;
    this[950] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  LODWORD(v3),
                  LODWORD(v4))
              + *(float *)(dword_106B31C8 + 12);
  }
  sub_1032CF60((int)this);
}
