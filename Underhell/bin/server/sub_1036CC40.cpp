int __thiscall sub_1036CC40(int this, int a2)
{
  char v2; // bl
  double v4; // st7
  int result; // eax
  int *v6; // ecx
  float v7; // [esp+10h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+8h]

  v7 = 0.0;
  v2 = 0;
  if ( a2 == 1 )
  {
    v4 = 0.75;
LABEL_5:
    v7 = v4;
    v2 = 1;
    goto LABEL_6;
  }
  if ( a2 == 11 )
  {
    v4 = 0.25;
    goto LABEL_5;
  }
LABEL_6:
  result = sub_100209B0((void *)this, a2);
  if ( v2 )
  {
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           LODWORD(v7));
    result = *(_DWORD *)(this + 904);
    if ( result != LODWORD(v8) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 904) = v8;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 904);
        *(float *)(this + 904) = v8;
      }
    }
  }
  return result;
}
