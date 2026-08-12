void __thiscall sub_10377F20(float *this, float a2, float a3, char a4)
{
  double v5; // st7
  int v6; // edi
  int i; // ebx
  float *v8; // esi
  double v9; // st7
  float v10; // [esp+18h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
    v5 = 1.25;
  else
    v5 = 1.0;
  v10 = v5;
  if ( *((_BYTE *)this + 4229) || a4 )
  {
    v6 = 0;
    for ( i = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this); v6 < dword_106E95A4; ++v6 )
    {
      v8 = *(float **)(dword_106E9598 + 4 * v6);
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v8 + 368))(v8) == i )
      {
        v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               LODWORD(a2),
               LODWORD(a3))
           * v10
           + *(float *)(dword_106B31C8 + 12);
        if ( v9 > v8[1137] )
          v8[1137] = v9;
      }
    }
  }
  else
  {
    this[1137] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   LODWORD(a2),
                   LODWORD(a3))
               * v10
               + *(float *)(dword_106B31C8 + 12);
  }
}
