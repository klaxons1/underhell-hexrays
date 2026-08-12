void __thiscall sub_1018B390(int this)
{
  int v1; // edx
  int v2; // eax
  int v3; // esi

  while ( *(_DWORD *)(this + 516) )
  {
    v1 = *(_DWORD *)(this + 516);
    if ( *(float *)(v1 + 504) <= (double)*(float *)(this + 504) )
      break;
    v2 = *(_DWORD *)(v1 + 516);
    v3 = *(_DWORD *)(this + 512);
    *(_DWORD *)(this + 512) = v1;
    *(_DWORD *)(this + 516) = v2;
    *(_DWORD *)(v1 + 516) = this;
    *(_DWORD *)(v1 + 512) = v3;
    if ( v2 )
      *(_DWORD *)(v2 + 512) = this;
    else
      dword_106B7A10 = this;
    if ( v3 )
      *(_DWORD *)(v3 + 516) = v1;
  }
}
