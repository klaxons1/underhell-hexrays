void __thiscall sub_103195B0(int this, int a2)
{
  float *v2; // esi
  int v3; // edi
  int *v4; // ecx

  if ( !*(_DWORD *)(this + 4076) )
  {
    v2 = (float *)(this + 1672);
    v3 = dword_106B31C8;
    if ( *(_DWORD *)(this + 1672) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v2 = *(float *)(v3 + 12);
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 1672);
        *v2 = *(float *)(v3 + 12);
      }
    }
  }
}
