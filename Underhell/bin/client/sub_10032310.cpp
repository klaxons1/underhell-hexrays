int __thiscall sub_10032310(unsigned __int8 *this, int a2)
{
  int result; // eax
  bool v4; // cl
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edx
  double v9; // st7
  int v10; // ecx
  double v11; // st6
  double v12; // rt0
  double v13; // rt1
  double v14; // st6
  double v15; // st7
  void *v16; // ecx

  result = a2;
  v4 = a2 != this[29];
  if ( a2 < 1 )
    result = 1;
  this[29] = result;
  if ( v4 )
  {
    sub_10034930(*((_DWORD *)this + 8));
    sub_10034930(*((_DWORD *)this + 5));
    v5 = sub_100DDA40(this[29]);
    v6 = this[29];
    *((_DWORD *)this + 8) = v5;
    v7 = sub_100DDA40((unsigned __int64)v6 >> 27 != 0 ? -1 : 32 * v6);
    if ( v7 )
    {
      v8 = v6 - 1;
      if ( (int)(v6 - 1) >= 0 )
      {
        v9 = 0.0;
        v10 = v7 + 8;
        v11 = 1.0;
        while ( 1 )
        {
          v13 = v11;
          v14 = v9;
          v10 += 32;
          --v8;
          *(float *)(v10 - 36) = v9;
          *(float *)(v10 - 32) = v9;
          *(float *)(v10 - 24) = v13;
          v15 = v13;
          *(float *)(v10 - 20) = v14;
          *(_DWORD *)(v10 - 40) = 0;
          *(float *)(v10 - 36) = v14;
          *(float *)(v10 - 32) = v14;
          *(float *)(v10 - 24) = v14;
          *(float *)(v10 - 20) = v14;
          *(float *)(v10 - 16) = v14;
          *(float *)(v10 - 12) = v14;
          if ( v8 < 0 )
            break;
          v12 = v14;
          v11 = v15;
          v9 = v12;
        }
      }
    }
    else
    {
      v7 = 0;
    }
    v16 = (void *)*((_DWORD *)this + 8);
    *((_DWORD *)this + 5) = v7;
    memset(v16, 0, this[29]);
    memset(*((void **)this + 5), 0, 32 * this[29]);
    return (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 20))(this);
  }
  return result;
}
