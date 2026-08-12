void __thiscall sub_1036A600(float *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  float v4; // ebx
  _DWORD *v5; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC)
    && *((_BYTE *)this + 3672) )
  {
    if ( -1.0 == this[919] )
    {
      this[919] = *(float *)(dword_106B31C8 + 12) + 0.15000001;
    }
    else if ( *(float *)(dword_106B31C8 + 12) >= (double)this[919] && !sub_100697A0(this, 108, 1) )
    {
      sub_100457E0(this, 108);
      if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      {
        v2 = (_DWORD *)sub_10261B20();
        v3 = v2;
        if ( v2 )
        {
          sub_100285C0(this, v2, 1);
          v4 = *this;
          v5 = sub_10019640(v3);
          (*(void (__thiscall **)(float *, _DWORD *, _DWORD *, _DWORD))(LODWORD(v4) + 1876))(this, v3, v5, 0);
        }
      }
    }
  }
}
