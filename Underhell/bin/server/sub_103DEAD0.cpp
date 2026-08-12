int __thiscall sub_103DEAD0(int this, int a2)
{
  double v3; // st7
  int v4; // edx
  int *v5; // ecx
  int v6; // eax
  double v7; // st7
  int *v8; // ecx
  int v9; // edi
  int result; // eax
  int *v11; // ecx
  int v12; // [esp+20h] [ebp-4h] BYREF
  float v13; // [esp+2Ch] [ebp+8h]

  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 876) )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v6 = sub_10261B20()) != 0 )
    {
      if ( *(_DWORD *)(this + 884) )
        v12 = *(_DWORD *)(this + 884);
      else
        v12 = sub_101EE630(v6);
      sub_102844E0((_DWORD *)(this + 864), &v12);
    }
    else
    {
      sub_102844E0((_DWORD *)(this + 864), (_DWORD *)(this + 884));
    }
  }
  else
  {
    v3 = *(float *)(this + 880);
    sub_103DF2D0(
      *(float *)(this + 880),
      *(float *)(this + 876),
      *(_DWORD *)(this + 864),
      *(_DWORD *)(this + 872),
      *(_BYTE *)(this + 888));
    v4 = (int)v3;
    v12 = (int)v3;
    if ( *(_DWORD *)(this + 864) != (int)v3 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 864) = v4;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
        {
          sub_100194B0(v5, 864);
          v4 = v12;
        }
        *(_DWORD *)(this + 864) = v4;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v7 = *(float *)(a2 + 8);
  else
    v7 = 0.0;
  v13 = v7 + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(this + 876) != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 876);
    }
    *(float *)(this + 876) = v13;
  }
  v9 = dword_106B31C8;
  result = *(_DWORD *)(this + 880);
  if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 880) = *(float *)(v9 + 12);
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        result = sub_100194B0(v11, 880);
      *(float *)(this + 880) = *(float *)(v9 + 12);
    }
  }
  return result;
}
