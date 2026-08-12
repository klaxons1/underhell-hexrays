int __thiscall sub_101A5020(float *this)
{
  double v2; // st7
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]

  if ( this[950] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2320))(this) )
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1620))(this);
      v5 = 15.0;
      v2 = 10.0;
    }
    else
    {
      v5 = 5.0;
      v2 = 2.5;
    }
    v4 = v2;
    this[950] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  LODWORD(v4),
                  LODWORD(v5))
              + *(float *)(dword_106B31C8 + 12);
  }
  return sub_1032CF60(this);
}
