void __thiscall sub_10118B90(int this, char a2)
{
  bool v2; // zf
  float *v3; // esi
  int v4; // edi
  int *v5; // ecx

  if ( a2 )
  {
    v2 = *(_BYTE *)(this + 1268) == 0;
    *(_BYTE *)(this + 1161) = 1;
    if ( v2 )
    {
      v3 = (float *)(this + 124);
      v4 = dword_106B31C8;
      if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *v3 = *(float *)(v4 + 12);
        }
        else
        {
          v5 = *(int **)(this + 24);
          if ( v5 )
            sub_100194B0(v5, 124);
          *v3 = *(float *)(v4 + 12);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 1161) = 0;
  }
}
