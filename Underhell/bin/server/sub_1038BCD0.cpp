void __thiscall sub_1038BCD0(int this)
{
  int v2; // ecx
  bool v3; // zf
  int v4; // eax
  int v5; // edi
  float *v6; // ebx
  float *v7; // eax
  double v8; // st7
  double v9; // st5
  double v10; // st4
  void (__thiscall *v11)(int, int, _DWORD, _DWORD, _DWORD); // edx

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  sub_100AC1F0((int *)(this + 5160));
  v3 = *(_BYTE *)(this + 4892) == 0;
  *(_BYTE *)(this + 4340) = 0;
  if ( v3 || !sub_102A8560(this + 4876) )
  {
    v4 = sub_101679A0((int)"gordon_precriminal");
    if ( sub_10167A00(v4) == 1 )
    {
      v5 = sub_1025FB50(1);
      if ( v5
        && (v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this),
            v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5),
            v8 = *v7 - *v6,
            v9 = v7[2] - v6[2],
            v10 = v7[1] - v6[1],
            v9 * v9 + v10 * v10 + v8 * v8 < 16384.0) )
      {
        v11 = *(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1808);
        *(_BYTE *)(this + 4340) = 1;
        v11(this, v5, 0.75, 5.0, 0.0);
        if ( !*(_BYTE *)(this + 4892) && *(int *)(this + 4364) >= 3 )
        {
          *(float *)(this + 4316) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                           + 4))(
                                      dword_106B31E4,
                                      2.5,
                                      4.0)
                                  + *(float *)(dword_106B31C8 + 12);
          sub_100218B0((_DWORD *)this, v5);
          sub_10389C30(this, 1);
        }
      }
      else
      {
        if ( !*(_BYTE *)(this + 4892) && *(float *)(this + 4316) < (double)*(float *)(dword_106B31C8 + 12) )
          sub_10389C30(this, 0);
        *(_BYTE *)(this + 4342) = 0;
      }
    }
  }
  if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 )
    sub_10023CB0((char *)this, 73);
  else
    sub_10023E00((char *)this, 73);
  if ( *(float *)(this + 5188) + 3.0 < *(float *)(dword_106B31C8 + 12) )
  {
    *(_DWORD *)(this + 5184) = 0;
    *(float *)(this + 5188) = 0.0;
  }
}
