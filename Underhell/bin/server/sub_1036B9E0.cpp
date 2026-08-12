void __thiscall sub_1036B9E0(int *this, float a2, char a3, float a4, char a5)
{
  bool v6; // bl
  double v7; // st7
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // eax
  float v11; // [esp+0h] [ebp-18h]

  if ( !*((_BYTE *)this + 3655) )
  {
    v6 = (this[64] & 0x8000000) != 0;
    v7 = a2;
    if ( a2 < (double)this[55] )
      v7 = v7 + 10.0;
    v11 = v7;
    sub_1001F740(this, v11, a3, a4, a5);
    if ( !v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) == 1 )
      {
        v8 = (_DWORD *)sub_100BD8F0(this);
        sub_100EAB80(v8, 4);
      }
      v9 = *this;
      v10 = sub_10039AE0(this, this[595], 0);
      (*(void (__thiscall **)(int *, int))(v9 + 1416))(this, v10);
    }
  }
}
