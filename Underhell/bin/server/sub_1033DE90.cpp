void __thiscall sub_1033DE90(_BYTE *this)
{
  int v2; // edi
  float *v3; // ebx
  float *v4; // eax
  double v5; // st6
  double v6; // st4
  double v7; // rt0
  const char *v8; // eax

  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5) <= 1 )
  {
    v2 = sub_10021B90(this);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 1604))(this, 0) )
      {
        v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
        v4 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 576))(this);
        v5 = v4[1] - v3[1];
        v6 = *v4 - *v3;
        v7 = v4[2] - v3[2];
        if ( v6 * v6 + v5 * v5 + v7 * v7 <= 4000000.0
          && (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 876))(v2, this)
          && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v2, 16449, 0) )
        {
          v8 = "COMBINEPRISONGUARD_ASSAULT";
          if ( !this[4976] )
            v8 = "COMBINE_ASSAULT";
          sub_100AC410((int)(this + 4244), v8, 0, 2);
        }
      }
    }
  }
}
